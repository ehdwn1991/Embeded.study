#-*- coding:cp949 -*-
from urllib import urlopen
url = "http://www.gutenberg.org/files/2554/2554.txt"
raw = urlopen(url).read()
type(raw)
#str

len(raw)
#1176831

raw[:75]
#'The Project Gutenberg EBook of Crime and Punishment, by Fyodor Dostoevsky\r\n'

import nltk
tokens = nltk.word_tokenize(raw)
len(tokens)
#255809

tokens[:10]
#['The', 'Project', 'Gutenberg', 'EBook', 'of', 'Crime', 'and', 'Punishment', ',', 'by']
