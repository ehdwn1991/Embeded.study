import sys

# for arg in sys.argv[1:]:
# 	try:
# 		f=open(arg,'r')
# 	except IOError:
# 		print("cannot open",arg)
# 	else:
# 		print(arg,"line: ",len(f.readlines()))
# 		f.close()

for arg in sys.argv[1:]:
	with open(arg,'r') as f:
		if f:
			print("Asda")