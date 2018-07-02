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
