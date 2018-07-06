import matplotlib.pyplot as plt
from pandas.tools.plotting import scatter_matrix
from pandas import DataFrame, Series
from numpy.random import randn

df = DataFrame(randn(1000, 4), columns=['a', 'b', 'c', 'd'])

scatter_matrix(df, alpha=0.2, figsize=(6, 6), diagonal='kde')

plt.show() 
