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
