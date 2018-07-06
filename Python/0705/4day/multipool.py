import multiprocessing, time, random, sys
def square(x):
    sec = random.choice([1, 2, 3])
    print('before {0} wait {1} sec'.format(x, sec))
    time.sleep(sec)
    print('after {0}'.format(x))
    return x * x

def g(n):
    i = 0
    while i < n:
        yield i
        i += 1

sys.stdout.flush()
pool = multiprocessing.Pool(processes=4)
for each in pool.imap(square, g(20)):
    print(each, flush, True)