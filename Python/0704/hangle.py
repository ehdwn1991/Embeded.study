import pandas as pd
from konlpy.utils import pprint
korean_review_df = pd.read_csv("ratings_test.txt",header=0,delimiter = "\t",quoting =3, encoding = "utf-8")
len(korean_review_df)
korean_review_df[:5]

from konlpy.tag import Twitter
twi_tagger = Twitter()
temp_sen = u"마늘치킨이 먹고싶닼ㅋㅋ 치킨 사랑해!"
pprint(twi_tagger.pos(temp_sen,norm=True,stem=True))

words_temp=twi_tagger.pos(korean_review_df["document"][3], norm=True,stem=True)
pprint(words_temp)


import nltk
# nltk.download('punkt')
tokenizer =nltk.data.load("tokenizers/punkt/english.pickle")
tokenizer


from bs4 import BeautifulSoup
import re
from nltk.corpus import stopwords
def tokenizer_twit(doc):
    return ['/'.join(t) for t in twi_tagger.pos(doc, norm=True,stem=True)]

def review_to_wordlist(review):
    try:
        review_text = BeautifulSoup(review.strip(),"html.parser").get_text()
    except AttributeError as e:
        print(e)
        review_text=""
    review_words = tokenizer_twit(review_text)
    return review_words

words=[]
review_num=0

for review in korean_review_df["document"]:
    words+=review_to_wordlist(review)
    review_num+=1
    if review_num%5000==0:
        print("review_num: %d"%(review_num))


len(words)
pprint(words[:10])
import nltk
words_nltk = nltk.Text(words,name = "words in movie reviews")

pprint(words_nltk.vocab().most_common(10))

import matplotlib
matplotlib.rc('font',family='AppleGothic')
# matplotlib inline
words_nltk.plot(40)

Non_Stop_words = ["Noun","Verb","Adjective","Adverb","Excalmation","koreanParticle"]
words_new = [w for w in words if w.split("/")[-1] in Non_Stop_words]
pprint(words_new[:10])
words_nltk_new = nltk.Text(words_new,name= "new words in movie reviews")
pprint(words_nltk_new.vocab().most_common(10))
words_nltk_new.plot(40)