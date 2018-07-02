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
