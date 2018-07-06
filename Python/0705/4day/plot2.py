import numpy as np
from matplotlib import cm
from mpl_toolkits.mplot3d import Axes3D
import matplotlib.pyplot as plt
x = np.linspace(-3, 3, 256)
y = np.linspace(-3, 3, 256)
X, Y = np.meshgrid(x, y)
Z = np.sinc(np.sqrt(X ** 2 + Y ** 2))
fig = plt.figure()
ax = fig.gca(projection = '3d')
#ax.plot_surface(X, Y, Z, cmap=cm.gray)
ax.plot_surface(X, Y, Z, cmap=cm.hsv)
plt.show()