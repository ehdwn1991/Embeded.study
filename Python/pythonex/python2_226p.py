#-*- coding:cp949 -*-
import pandas as pd
from konlpy.utils import pprint
korean_review_df = pd.read_csv( "ratings_test.txt", header=0, delimiter="\t", quoting=3, encoding="utf-8" )
# ����� �������� Ȯ��
print len(korean_review_df) # 50000���� ���䵥���� 
# ���� ���䵥���ͼ� Ȯ��
print korean_review_df[:5]
