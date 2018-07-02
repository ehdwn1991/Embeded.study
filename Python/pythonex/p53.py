class Stack:
    "A well-known data structure…"
    def __init__(self):		# 생성자와 유사한 역할
        self.items = []
    def push(self, x):
        self.items.append(x)	           # 추가하는 제한은???
    def pop(self):
        x = self.items[-1]		# 만약에 비어있다면 어떤 일이 발생???
        del self.items[-1]
        return x
    def empty(self):
        return len(self.items) == 0	# 참 또는 거짓을 반환
x = Stack()
print(x.empty())
print(x.push(1))
print(x.empty())
print(x.push("hello"))
print(x.pop())
print(x.items)
class FancyStack(Stack):
    "stack with added ability to inspect inferior stack items"

    def peek(self, n):
        "peek(0) returns top; peek(-1) returns item below that; etc."
        size = len(self.items)
        assert 0 <= n < size			# 조건을 이용한 사전 검사
        return self.items[size-1-n]
class LimitedStack(FancyStack):
    "fancy stack with limit on stack size"

    def __init__(self, limit):
        self.limit = limit
        FancyStack.__init__(self)		# 기초 클래스 생성자

    def push(self, x):
        assert len(self.items) < self.limit
        FancyStack.push(self, x)		# "조상" 함수 호출
x = LimitedStack(30)
print(x.empty())
print(x.push(1))
print(x.empty())
print(x.push("hello"))
print(x.pop())
print(x.items)
