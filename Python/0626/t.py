# 에라토테네스의 체 올바른 케이스
# for n in range(2,10):
# 	for x in range(2,n):
# 		# 만약 시작인덱스와 끝 인덱스가 같다면 한번도 동작을 안한다. 즉, 반복문 안돌아감 그래서
# 		# 그떄는 else가 작동
# 		if n % x == 0:
# 			print(n,'equals',x,'*',n//x)
# 			break
# 	else:
# 		print(n,'is prime')
# 두번째 반복문에서 반복문이 작동이 안될떄 else동작


# 잘못된 케이스 1
# for n in range(2,10):
# 	for x in range(2,n):
# 		# 만약 시작인덱스와 끝 인덱스가 같다면 한번도 동작을 안한다. 즉, 반복문 안돌아감 그래서
# 		# 그떄는 else가 작동
# 		if n % x == 0:
# 			print(n,'equals',x,'*',n//x)
# 			break
# 		else:
# 			print(n,'is prime')
# 두번쨰 반복문 안에서 if가 거짓일떄 else 동작

# 잘못된 케이스 2
# for n in range(2,10):
# 	for x in range(2,n):
# 		# 만약 시작인덱스와 끝 인덱스가 같다면 한번도 동작을 안한다. 즉, 반복문 안돌아감 그래서
# 		# 그떄는 else가 작동
# 		if n % x == 0:
# 			print(n,'equals',x,'*',n//x)
# 			break
# else:	
# 	print(n,'is prime')
# 첫번쨰 반복문이 작동 안할때 else 동작, 그래서 첫번쨰 반복문이 전부 동작 하고 나서 else 한번 작동

# lst = [1,2,3]
# for x in lst:
# 	print(x)

# course =['asd','qwea']

# print(len(course))		#리스트 객체 안의 요소 갯수	
# print(len(course[0]))	#리스트 객체 안의 각 요소들의 문자수
# print(len(course[1]))   #리스트 객체 안의 각 요소들의 문자수

# a=list(range(10))
# print(a) #0~4까지 5개의 숫자 리스트
# print(a[2:5]) #a 의 리스트 안에 있는 요소들중에 2~5까지의 숫자만 보여줌 2이상 5미만 의 값
# print(a[2:10:2]) # a의 리스트 안에 있는 요소들중에 2~5까지의 숫자를 처음 2 ,(2)+2, (2+2)+2... 이전값의 2씩 증가한 값을 보여줌

# b=list(range(10,0,-1)) # b의 리스트는 10부터 1까지 역방향으로 생성 0은 미만 이니 1까지
# print(b)
# print(b[2:10])
# print(b[10:2:-2]) #제일 왼쪽 부터 역방향으로 나감 즉 우리가 보기엔 정방향 

# c=["a","b","c","d","e","f"]
# print(c)
# print(c[2:5])
# print(c[5:2:-2])
# print(c[0]) #요소하나를 출력하면 '' 없이 출력됨.

# y=c
# print(y)
# y[0]='qwe'
# print(y,c)
# z=y.append(2)
# print(z,y,c)


# append와 (+)연산자  얕은 복사와 깊은 복사이차이이
# x=[1,2,3]
# y=x
# z=x.append(12) #append는 반환값이 None이다. 그래서 z에 None이 대입됨.
# if z == None:
# 	print(True)

# print("id(x):",id(x))
# print("id(y):",id(y))
# print(y)
# x=x+[9,10] # 더하기(+)연산때 x는 다른 객체로 저장됨 기존에 있던 x와는 다른 새로운 객체로 처리
# print(x)
# print(y)
# print("id(x):",id(x))
# print("id(y):",id(y))

# x[1]=15
# print(x)
# print(y)
# print("id(x):",id(x))
# print("id(y):",id(y))
# x.append(18)
# print(x)
# print(y)
# print("id(x):",id(x))
# print("id(y):",id(y))
# x=None # x를 None으로 만들고 나서 리스트 객체를 더하기 연산자로 추가하려 하면 에러나옴
# x=x+[9,10] # 더하기(+)연산자는 같은 타입만 가능하다.
# print(x)
# print(y)
# print("id(x):",id(x))
# print("id(y):",id(y))

# x=[1,2,3,4,5]
# y=x[:] #slice표기 법으로 복사 비슷하게 동작할수 있음. 얕은복사임 사본이 생성된거라서
# id(x),id(y)

# x.append([4,5]) #이게 깊은 복사임 x 자체에 4,5를 추가
# # x[2].append(10)
# print(id(x),x)
# print(id(y),y)
# print(x)
# print(y)


# a=["spam","eggs",100,1234,2*2]

# # a의 0 번 위치에 값 추가
# a[0:0]=[0]
# print(a)
# a[0:0]=[0]
# print(a)
# a[0:0]=[ ]
# print(a)


# li = [5,2,6,11]
# li.reverse()
# print(li)
# li.sort()
# print(li)


# def neg(x):
# 	return -x

# #1의 자리로만 비교
# def uni(x):
# 	return x%10
# def odd(x):
# 	return x%2==0

# li.sort(key=neg) #keyword arg로 key 를 꼭 줘야 한다. key=함수이름 이런식
# print(li)

# print(str(li[0:]))
# li = [1232,3839,22201,38482938]
# # 일의자리만 비교
# li.sort(key=uni,reverse=True)
# print(li)
# # 짝수만 리스팅
# print(list(filter(odd,li)))

# a=iter(li)
# next(a)



# a=3; b=5; print("%d+%d"%(a,b))
# print(eval("%d+%d"%(a,b)))
# exec("%d+%d;c=int(input());print(a+b+c)"%(a,b))


# age = input("age?")
# height = input("height?")
# kg = input("kg?")
# print(age, height,kg)

# print(sum(range(1,101)))

# def sum(numbers):
# 	global total
# 	total=0 # 밖에서도 total 에 접근 하게 하려면 global 을 써주면 된다.
	
# 	for number in numbers:
# 		total+=number;
# 	return total

# print(sum(range(1,101)))

# print("after sum, %d"%total)
# del total #del total 하면 total 객체가 지워짐
# print("after del total %d"%total)

# import keyword;print(keyword.kwlist)

# yield 사용 예제 yield는 generator라고 함

# def sum(numbers):
# 	global total
# 	total=0 # 밖에서도 total 에 접근 하게 하려면 global 을 써주면 된다.
	
# 	for number in numbers:
# 		total+=number;
# 		yield total #yield가 있어서 sum함수가 generator가 됨

# a=sum(range(1,101))
# print(next(a))
# print(next(a))
# print(next(a))

# # dict과 set과 list와 generator 차이
# print("dict",type({i:j for i,j in zip({2,3,4,5},{1,2,23,6})}))
# print("set",type({i*2 for i in {2,3,4}}))
# print("list",type([i*2 for i in [2,3,4]]))
# print("generator",type(i for i in [1,2,3,4]))



# ================
# def foo(f):
# 	print("hello")
# 	return f

# @foo
# # @골뱅이 뒤에 붙은 함수를 가따쓴다는 의믜 이떄 골뱅이를 decorator 라고함
# # 이거랑  밑에  bar = foo(bar)한거랑 같음
#  # 간단히 해서 foo가 bar로 바뀌고 원래 있던 bar는 foo안에 들어가고 두개 가 합쳐져서 bar가 됬다고 생각해야댐
# def bar():
# 	print("there")

# # bar = foo(bar)
# bar()
# ================

# def foo(*a):
# 	for x in a:
# 		print(x,end="\t")
# foo(3,4,5)

# 키워드 인자 키워드 인자를 가변인자로 전달하는건 안된다.
# def foo(a,b,c):
# 	print(a,b,c)
# foo(a=3,c=4,b=5)


# def foo(*a):
# 	for x in a:
# 		print(x,end="\t")
# foo(a=3,c=4,b=5)


# 키워드 인자를 가변인자로 전달하고 싶을떄는 **두개 써주면됨.
# def foo(**a):
# 	for x in a:
# 		print(x,end="\t")
# foo(a=3,c=4,b=5)

# 키워드 인자 가변 인자 전달 할떄 이쁘게 출력
# def foo(**a):
# 	for i,j in a.items():
# 		print(i,"=",j,end="\t")
# foo(a=3,c=4,b=5)


# *순서별 인자  ** 키워드자인자
# 어떤 인자가 들어올지 모르니 두개다 대비하는거
# def foo(q):
# 	print("hello", q.__name__)
# 	def wrapper(*a,**k):
# 		return q(*a,**k)
# 	return wrapper
# @foo
# # @foo 쓰던 아니면 bar=foo(bar) 를 쓰던 똑같은 기능을함
# def bar(name,age,he,col):
# 	print(f"{name} is {age} years old  height: {he}  {col}")

# # bar=foo(bar)
# # bar("dj")
# bar(age =22,he = 180,name="dj","asd")




# def foo(q):
# 	msg=f"hello {q.__name__}"
# 	def wrapper(*a,**k):
# 		print(msg)
# 		return q(*a,**k)
# 	return wrapper
# @foo
# # @foo 쓰던 아니면 bar=foo(bar) 를 쓰던 똑같은 기능을함
# def bar(name,age,he):
# 	print(f"{name} is {age} years old  height: {he}")

# # bar=foo(bar)
# # bar("dj")
# bar(age =22,he = 180,name="dj")
# # dir(foo.됨closure__[0].cell_contents)
# # closure의 의미는 닫혀있다는 의미로써 친근하다라고 표현할수도 있고 두개의 속성이 같이 있다라고 생각해도됨




# #시간 함수
# def foo(f):
# 	msg=f"hello {f.__name__}"
# 	def wrapper(*a,**k):
# 		print(msg)
# 		return f(*a,**k)
# 	return wrapper

# def zoo(f):
#     import datetime
#     t1 = datetime.datetime.now()
#     def wrapper(*a,**k):
#         print(datetime.datetime.now())
#         print(t1,end="  ")
#         print("msec")
#         return f(*a,**k)
#     return wrapper
# @foo
# @zoo
# def bar(name,age):
#     print(f"{name} is {age} years old")
# bar(age=20,name="dj")


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
bar=foo(zoo(bar))
bar(age=20,name="dj")