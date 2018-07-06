import nltk
# nltk.download('punkt')
# nltk.download('averaged_perceptron_tagger')
text = """Is this the real life?/Is this just fantasy?/
Caught in a landslide/No escape from reality/
Open your eyes/Look up to the skies and see/
I'm just a poor boy, I need no sympathy/"""

text
sentences= nltk.tokenize.sent_tokenize(text)
print(sentences)


tokens= [nltk.tokenize.word_tokenize(sen) for sen in sentences]
print(tokens)

pos_tagged_token = [nltk.pos_tag(t) for t in tokens]
print(pos_tagged_token)