
# coding: utf-8

# In[ ]:


a=10
a


# In[ ]:


3+5


# In[ ]:


2+1


# In[ ]:


id(x)


# In[ ]:


id(a)


# In[ ]:


x = [1,2,3]
y=x
id(x), id(y)
x+=[4,5]
print(id(x), id(y))


# In[ ]:


y=x[:]
id(x),id(y)


# In[ ]:


x.append([4,5])
x, y
id(x), id(y)


# In[ ]:


x, y


# In[ ]:


x[2].append(10)
print(id(x),x)
print(id(y),y)


# In[ ]:


x[2].append(1)
x


# In[ ]:


a=["spam","eggs",100,1234,2*2]


# In[ ]:


a[:2]


# In[ ]:


a[2]+=23
a


# In[ ]:



a[0:2]=[1,12]
a


# In[ ]:


a[0:0]=[0]
a


# In[ ]:


def uni(x):
	return x%10
li = [1232,3839,22201,38482938]
li.sort(key=uni,reverse=True)
print(li)


# In[ ]:


a=iter(li)
next(a)


# In[ ]:


a=3; b=5; print("%d+%d"%(a,b))
exec("%d+%d;c=int(input());print(a+b+c)"%(a,b))


# In[ ]:


get_ipython().run_line_magic('pinfo', 'input')


# In[ ]:


def foo(f):
	msg=f"hello {f.__name__}"
	def wrapper(*a,**k):
		print(msg)
		return f(*a,**k)
	return wrapper
@foo
def bar(name,age,he):
	print(f"{name} is {age} years old  height: {he}")
bar(age =22,he = 180,name="dj")


# In[ ]:


#시간 함수
def foo(f):
	msg=f"hello {f.__name__}"
	def wrapper(*a,**k):
		print(msg)
		return f(*a,**k)
	return wrapper

def zoo(f):
    import datetime
    t1 = datetime.datetime.now()
    def wrapper(*a,**k):
        print(datetime.datetime.now())
        print(t1,end="  ")
        print("msec")
        return f(*a,**k)
    return wrapper
@foo
@zoo
def bar(name,age):
    print(f"{name} is {age} years old")
bar(age=20,name="dj")


# In[ ]:


#시간 함수 강제 시간 차이나게 하기 10초 뒤에 함수 동작 time.sleep이 10초동안 잠듦
def foo(f):
	msg=f"hello {f.__name__}"
	def wrapper(*a,**k):
		print(msg)
		return f(*a,**k)
	return wrapper

def zoo(f):
    import time
    t1 = time.time()
    def wrapper(*a,**k):
        time.sleep(10);
        t2=time.time();
        print(t2-t1)
        print("sec")
        return f(*a,**k)
    return wrapper
# @foo #bar=foo(bar)
# @zoo #bar=zoo(bar)  bar 함수 기준으로 가장 가까이있는게 먼저 되야 하니까 zoo가 먼저 실행되고 foo가 실행된다.
# @zoo @foo 와 같은 효과를 가지려면 bar=foo(zoo(bar)) 일케 해줘야댐
def bar(name,age):
    print(f"{name} is {age} years old")
bar=foo(zoo(bar)) #먼저 bar를 호출한 zoo가 반환을 하고 그걸 foo가 받아서 동작 하기떄문에 zoo가 bar 에 가깝다고 보면된다.
bar(age=20,name="dj")


# In[ ]:


#시간 함수 강제 시간 차이나게 하기 10초 뒤에 함수 동작 time.sleep이 10초동안 잠듦
def foo(f):
	msg=f"hello {f.__name__}"
	def wrapper(*a,**k):
		print(msg)
		return f(*a,**k)
	return wrapper

def zoo(f):
    import time
    t1 = time.time()
    def wrapper(*a,**k):
        time.sleep(10);
        t2=time.time();
        print(t2-t1)
        print("sec")
        return f(*a,**k)
    return wrapper
# @foo #bar=foo(bar)
# @zoo #bar=zoo(bar)  bar 함수 기준으로 가장 가까이있는게 먼저 되야 하니까 zoo가 먼저 실행되고 foo가 실행된다.
# @zoo @foo 와 같은 효과를 가지려면 bar=foo(zoo(bar)) 일케 해줘야댐
def bar(name,age):
    print(f"{name} is {age} years old")
bar1  =zoo(bar)
bar=foo(bar1)
# 이런순서로 된다고 보면됨 zoo가 먼저 실행 되고 10초 대기하는중에 foo가 실핸되고 10초가 끝나면 나머지 zoo 동작
bar(age=20,name="dj")


# In[ ]:


#시간 함수 강제 시간 차이나게 하기 10초 뒤에 함수 동작 time.sleep이 10초동안 잠듦
def foo(f):
	msg=f"hello {f.__name__}"
	def wrapper(*a,**k):
		print(msg)
		return f(*a,**k)
	return wrapper

def zoo(f):
    import time
    t1 = time.time()
    def wrapper(*a,**k):
        time.sleep(10);
        t2=time.time();
        print(t2-t1)
        print("sec")
        return f(*a,**k)
    return wrapper
@zoo #bar1= foo(bar)
@foo #bar=zoo(bar1)
일케하면 foo가 먼저 실행되고 zoork tlfgodehla
# @foo #bar=fo은 효과를 가지려면 bar=foo(zoo(bar)) 일케 해줘야댐
def bar(name,age):
    print(f"{name} is {age} years old")
# bar1 된다고 보면됨 zoo가 먼저 실행 되고 10초 대기하는중에 foo가 실핸되고 10초가 끝나면 나머지 zoo 동작
bar(age=20,name="dj")

