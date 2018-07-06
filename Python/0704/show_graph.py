from pylab import plot, show
from numpy import linspace, sin

# case1
# y=[1.0,2.4,1.7,0.3,0.6, 1.8]
# plot(y)
# show()
# case2
# x= linspace(0,10,100)
# y=sin(x)
# plot(x,y)
# plot(x)
# plot(y)
# show()



from pylab import plot, show
from numpy import linspace,sin
# from math import sin
x= linspace(0,10,100)
y=sin(x)
plot(x,y)
ylim(-1.1,1.1)
xlabel("x axis")
ylabel("y = sin x")
plot(x,y)
show()
