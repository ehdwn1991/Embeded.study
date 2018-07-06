from apyori import apriori

transactions= [['beer','nuts'],['beer','cheese'],]
result = list(apriori(transactions))

# print(result)
import pandas as pd
print(pd.DataFrame(result))
# pd.DataFrame(result)



import numpy as numpy
import matplotlib.pyplot as plt
import pandas as pd

dataset = pd.read_csv('apriori_data.csv',header = None)
records=[]
for i in range(0,7):
	records.append([str(dataset.values[i,j]) for j in range(0,6)])

from apyori import apriori
rules = apriori(records,min_support=0.003,min_confidence =0.2, min_list =3 , min_length=2)

result=list(rules)

print(result)