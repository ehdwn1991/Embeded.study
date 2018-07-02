
# # coding: utf-8

# # In[1]:


# #순서별 인자
# def zoo(d=4,f,g) #함수처음 만들떄 부터 인자를 정해주는걸 default인자 라고 한다 d=4 처럼 처음부터 default값을 선언해놈
#     print(d,f,g)
# zoo(d=1,f=5,g=2)
# a,*b =1,2,3
# print(a)
# def foo(*a)
#     print(a)
# foo(1,2,3,4,5,6)
# def bar(**g)
#     print(g)
# bar(a=1,c=10,b=3)


# # In[3]:


# def make_incrementor(n):
#     return lambda x: x+n

# f= make_incrementor(42)
# print(f(0))
# print(f(1))


# # In[4]:


# def plus(x,y):
#     return (x+y)
# from functoools
# import reduce
# li=['h','e','e','l']
# reduce(plus,li)


# # In[7]:


# #피보나치 수열
# def fib(n):
#     a, b = 0, 1
#     while a < n:
#         print(a, end=' ')
#         a, b = b, a+b
#         print()
        
# fib(1000)


# # In[11]:


# #피보나치 수열
# def fib(n):
#     a, b = 0, 1
#     for _ in range(n+1):
#         print(a, end=' ')
#         a,b = b,a+b
        
# fib(100)


def fib(n):
    a, b = 0, 1
    for _ in range(n+1):
        print(a, end=' ')
        a,b = b,a+b
        
# fib(100)

if __name__ == "__main__":
    print("메인")
    fib(10)
else:
    print("{__name__}라이브러리 입니다.")
