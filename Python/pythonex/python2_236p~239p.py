
# coding: utf-8

# In[1]:


import pandas as pd


# ### Load Dataset

# In[2]:


train = pd.read_csv("data/train.tsv", sep="\t", index_col="PhraseId")

print(train.shape)
train.head()


# In[3]:


test = pd.read_csv("data/test.tsv", sep="\t", index_col="PhraseId")

print(test.shape)
test.head()


# ## Preprocessing

# In[4]:


train["Phrase(origin)"] = train["Phrase"].copy()

print(train.shape)
train[["Phrase", "Phrase(origin)"]].head()


# In[5]:


test["Phrase(origin)"] = test["Phrase"].copy()

print(test.shape)
test[["Phrase", "Phrase(origin)"]].head()


# ### Clean Text

# In[6]:


def clean_text(phrase):
    phrase = phrase.replace("doesn't ", "does not ")
    phrase = phrase.replace("ca n't ", "can not ")
    phrase = phrase.replace(" n't ", " not ")

    return phrase

train["Phrase"] = train["Phrase"].apply(clean_text)

print(train.shape)
train[["Phrase", "Phrase(origin)"]].head()


# In[7]:


test["Phrase"] = test["Phrase"].apply(clean_text)

print(test.shape)
test[["Phrase", "Phrase(origin)"]].head()


# ### Vectorize phrases

# In[8]:


from sklearn.feature_extraction.text import CountVectorizer

# http://scikit-learn.org/stable/modules/generated/sklearn.feature_extraction.text.CountVectorizer.html
# binary=True/False
# lowercase=True/False
# ngram_range=(1, 1)
# stop_words=None

# vectorizer = CountVectorizer(max_features=1000)
vectorizer = CountVectorizer(max_features=10000, ngram_range=(1, 2))
vectorizer


# In[9]:


vectorizer.fit(train["Phrase"])


# In[10]:


X_train = vectorizer.transform(train["Phrase"])
X_train


# In[11]:


columns = vectorizer.get_feature_names()
pd.DataFrame(X_train[:100].toarray(), columns=columns).head()


# In[12]:


X_test = vectorizer.transform(test["Phrase"])
X_test


# In[13]:


y_train = train["Sentiment"]

print(y_train.shape)
y_train.head()


# ## Score

# In[14]:


from sklearn.linear_model import SGDClassifier

model = SGDClassifier(random_state=37)
model


# In[15]:


# from sklearn.cross_validation import cross_val_score
from sklearn.cross_validation import cross_val_predict

y_predict = cross_val_predict(model, X_train, y_train, cv=5)

print(y_predict.shape)
y_predict[0:10]


# In[16]:


from sklearn.metrics import accuracy_score

score = accuracy_score(y_train, y_predict)
print("Score = {0:.5f}".format(score))


# In[17]:


import numpy as np

result = train.copy()
result["Sentiment(predict)"] = y_predict
result["Difference(Phrase)"] = np.abs(y_train - y_predict)

print(result.shape)
result.head()


# In[18]:


sentiment = result.groupby("SentenceId")["Difference(Phrase)"].mean()
print(sentiment.shape)
sentiment.head()


# In[19]:


def find_sentiment(sentence_id):
    return sentiment.loc[sentence_id]

result["Difference(Sentence)"] = result["SentenceId"].apply(find_sentiment)
result = result.sort_values(by="Difference(Sentence)", ascending=False)

print(result.shape)
result.head()


# In[20]:


result[0:1000].to_csv("result.csv")


# In[21]:


vocabulary = vectorizer.get_feature_names()
vocabulary[0:3]


# In[22]:


pd.DataFrame(vocabulary, columns=["word"]).to_csv("vocabulary.csv")


# In[23]:


result[result["Phrase"].str.contains("can not recommend")]


# ## Train

# In[24]:


model.fit(X_train, y_train)


# In[25]:


predictions = model.predict(X_test)

print(predictions.shape)
predictions[0:10]


# ## Submit

# In[26]:


submission = pd.read_csv("data/sampleSubmission.csv", index_col="PhraseId")

submission["Sentiment"] = predictions

print(submission.shape)
submission.head()


# In[27]:


# 경로(ex: baseline-script.csv)는 사용자 설정마다 다름
submission.to_csv("baseline-script.csv")

