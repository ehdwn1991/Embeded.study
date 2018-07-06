

import multiprocessing as multi

def worker():
 print ("Worker!!!")
 return

jobs = []
for i in range(5):
 p = multi.Process(target = worker)
 jobs.append(p) 
 p.start()
