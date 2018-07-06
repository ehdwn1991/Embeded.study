import numpy as np 
import matplotlib.pyplot as plt 
from numpy.random import randn
X = np.linspace(-3, 2, 200) 
Y = X ** 2 - 2 * X + 1. 
plt.plot(X, Y) 
plt.show() 
fig = plt.figure(); ax = fig.add_subplot(1, 1, 1)

ax.plot(np.random.randn(1000).cumsum())
ax.plot(randn(1000).cumsum(), 'k', label='one')
ax.plot(randn(1000).cumsum(), 'k--', label='two')
ax.plot(randn(1000).cumsum(), 'k', label='three')

ax.legend(loc='best')

