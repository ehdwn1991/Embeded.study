#-*- coding:cp949 -*-
import pandas as pd
from konlpy.utils import pprint
korean_review_df = pd.read_csv( "ratings_test.txt", header=0, delimiter="\t", quoting=3, encoding="utf-8" )
# ����� �������� Ȯ��
print len(korean_review_df) # 50000���� ���䵥���� 
# ���� ���䵥���ͼ� Ȯ��
print korean_review_df[:5]

from konlpy.tag import Twitter
twi_tagger = Twitter()
# Ʈ���� ���¼� �м��� �׽�Ʈ
temp_sen = u"����ġŲ�� �԰�͈����� ġŲ �����~"
# �ѱ� ������ ������ pprint �Լ� ����Ͽ� �ѱ� ���.
pprint(twi_tagger.pos(temp_sen, norm=True, stem=True))
# Ʈ���� ���¼� �м���� ���� ���¼� �м� �׽�Ʈ
words_temp = twi_tagger.pos(korean_review_df["document"][3], norm=True, stem=True)
pprint(words_temp)

# Load the punkt tokenizer
import nltk
tokenizer = nltk.data.load('tokenizers/punkt/english.pickle')
tokenizer
# Import various modules for string cleaning
from bs4 import BeautifulSoup
import re
from nltk.corpus import stopwords
# (��, Noun) -> "��/Noun" ���·� ���¼� �м�.
def tokenizer_twit(doc):
    return ['/'.join(t) for t in twi_tagger.pos(doc, norm=True, stem=True)]
# ���� �ܾ� ����Ʈ ���·� ����.
def review_to_wordlist(review):
    try:
        review_text = BeautifulSoup(review.strip()).get_text()
    except AttributeError, e:
        print e
        review_text = ""
    review_words = tokenizer_twit(review_text)
    return review_words
words=[]
review_num=0
for review in korean_review_df["document"]:
    words += review_to_wordlist(review)
    review_num += 1
    if review_num%5000==0:
        print "review_num : %d" % (review_num)
# �� �ܾ�(��ū) ����
len(words)
pprint(words[:10])
words_nltk = nltk.Text(words, name="words in movie reviews")
# ���� ���� �ܾ� ������. ���� 10���� �ܾ�.
pprint(words_nltk.vocab().most_common(10))
import matplotlib
matplotlib.rc('font',family='HYPost') # �⺻ ��Ʈ�� �ѱ��� �ƴϹǷ� ���Ƿ� ����. 
%matplotlib inline # Jupyter ��Ʈ�Ͽ� �÷� ǥ������.
words_nltk.plot(40) # ���� ���̾��� ���� 40���� �ܾ�

