#-*- coding:cp949 -*-
import pandas as pd
from konlpy.utils import pprint
korean_review_df = pd.read_csv( "ratings_test.txt", header=0, delimiter="\t", quoting=3, encoding="utf-8" )
# 제대로 읽혔는지 확인
print len(korean_review_df) # 50000개의 리뷰데이터 
# 읽은 리뷰데이터셋 확인
print korean_review_df[:5]
