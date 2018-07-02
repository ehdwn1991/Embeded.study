#-*- coding:cp949 -*-
import feedparser
llog = feedparser.parse("http://languagelog.ldc.upenn.edu/nll/?feed=atom")
llog['feed']['title']
len(llog.entries)
post = llog.entries[2]
post.title
content = post.content[0].value
content[:70] 
import nltk
from bs4 import BeautifulSoup
soup = BeautifulSoup(content, "html.parser")
print nltk.word_tokenize(soup.get_text())
soup = BeautifulSoup(llog.entries[2].content[0].value, "html.parser")
print nltk.word_tokenize(soup.get_text())[:30]
