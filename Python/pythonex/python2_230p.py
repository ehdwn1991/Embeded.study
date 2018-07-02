#-*- coding:cp949 -*-
import pandas as pd
from konlpy.utils import pprint
korean_review_df = pd.read_csv( "ratings_test.txt", header=0, delimiter="\t", quoting=3, encoding="utf-8" )
# 제대로 읽혔는지 확인
print len(korean_review_df) # 50000개의 리뷰데이터 
# 읽은 리뷰데이터셋 확인
print korean_review_df[:5]

from konlpy.tag import Twitter
twi_tagger = Twitter()
# 트위터 형태소 분석기 테스트
temp_sen = u"마늘치킨이 먹고싶닼ㅋㅋ 치킨 사랑해~"
# 한글 깨지기 때문에 pprint 함수 사용하여 한글 출력.
pprint(twi_tagger.pos(temp_sen, norm=True, stem=True))
# 트위터 형태소 분석기로 리뷰 형태소 분석 테스트
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
# (돈, Noun) -> "돈/Noun" 형태로 형태소 분석.
def tokenizer_twit(doc):
    return ['/'.join(t) for t in twi_tagger.pos(doc, norm=True, stem=True)]
# 리뷰 단어 리스트 형태로 만듦.
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
# 총 단어(토큰) 갯수
len(words)
pprint(words[:10])
words_nltk = nltk.Text(words, name="words in movie reviews")
# 많이 쓰인 단어 보여줌. 상위 10개의 단어.
pprint(words_nltk.vocab().most_common(10))
import matplotlib
matplotlib.rc('font',family='HYPost') # 기본 폰트는 한글이 아니므로 임의로 지정. 
%matplotlib inline # Jupyter 노트북에 플롯 표시해줌.
words_nltk.plot(40) # 가장 많이쓰인 상위 40개의 단어

