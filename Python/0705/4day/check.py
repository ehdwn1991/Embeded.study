# -*- coding: utf-8 -*-
def error(f,x,y):
    return sp.sum((f(x)-y)**2)

import scipy as sp
data = sp.genfromtxt("web_traffic.tsv", delimiter="\t")
print(data[:10])
print(data.shape)
x=data[:,0]
y=data[:,1]
sp.sum(sp.isnan(y))
x=x[~sp.isnan(y)]
y=y[~sp.isnan(y)]

import matplotlib.pyplot as plt
plt.scatter(x,y)
plt.title("Web traffic over the last month")
plt.xlabel("Time")
plt.ylabel("Hits/hour")
plt.xticks([w*7*24 for w in range(10)],['week %i'%w for w in range(10)])
plt.autoscale(tight=True)
plt.grid()
plt.show()

fp1, residuals, rank, sv, rcond = sp.polyfit(x, y, 1, full=True)
print("Model parameters: %s" % fp1)
print(residuals)

fp1, residuals, rank, sv, rcond = sp.polyfit(x, y, 1, full=True)
print("Model parameters: %s" % fp1)
print(residuals)

f1 = sp.poly1d(fp1)
print(error(f1, x, y))
fx = sp.linspace(0,x[-1],1000)
plt.plot(fx,f1(fx), linewidth=4)
first=plt.legend(["d=%i" % f1.order],loc="upper left")
f2p = sp.polyfit(x, y, 2)
print(f2p)
f2 = sp.poly1d(f2p)
print(error(f2, x, y))
fx2 = sp.linspace(1,x[-2],1000)
second=plt.plot(fx2,f2(fx2), linewidth=2)
#plt.legend(handles=["d=%i" % f1.order, "d=%i" % f2.order],loc="upper left")
inflection = 3.5*7*24
xa = x[:inflection]#변곡점 이전 데이터
ya = y[:inflection]
xb = x[inflection:]#이후 데이터
yb = y[inflection:]

fa = sp.poly1d(sp.polyfit(xa, ya, 1))
fb = sp.poly1d(sp.polyfit(xb, yb, 1))

fa_error = error(fa, xa, ya)
fb_error = error(fb, xb, yb)

print("Error inflection=%f" % (fa_error + fb_error))

#fbt2 = sp.poly1d(sp.polyfit(xb[train], yb[train],2))
#print(fbt2)

