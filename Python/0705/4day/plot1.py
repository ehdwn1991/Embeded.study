import numpy as np
import matplotlib.pyplot as plt
X = np.linspace(-6, 6, 1024)
Y = np.sinc(X)
plt.plot(X, Y,
linewidth = 3.,
color = 'k',
markersize = 9,
markeredgewidth = 1.5,
markerfacecolor = '.75',
markeredgecolor = 'k',
marker = 'o',
markevery = 32)
plt.show()