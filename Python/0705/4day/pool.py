import sys, multiprocessing

def upper(line):
    return line.upper()

p = multiprocessing.Pool(processes=4)
for line in p.imap(upper, sys.stdin):
    sys.stdout.write(line)
    sys.stdout.flush()
p.close()
