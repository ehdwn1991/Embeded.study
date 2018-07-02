# def divide(x,y):
# 	try:
# 		result = x/y
# 	except ZeroDivisionError:
# 		print("Division by error")	
# 	else:
# 		print("result is ",result)
# 	finally:
# 		print("executing finally clause")

def divide(x,y):
	try:
		result = x/y
	except Execption as e:
		#에러종류를 다 똑같이 처리하고 싶을떄 
		print("Division by error")	
	else:
		print("result is ",result)
	finally:
		print("executing finally clause")

divide(3,0)

print("hello")
import sys
sys.stdout.write("CSE")
sys.stdout.write("Name:Codex")
