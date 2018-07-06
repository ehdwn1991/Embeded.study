#!/usr/bin/python

""" read text from standard input and output any email 
address it finds, one to a line
"""

import re
from sys import stdin

# a regular expression ~ for a valid email address

pat = re.compile(r'[-\w][-.\w]*@[-\w][-\w.]+[a-zA-Z]{2,4}')

for line in stdin.readlines():
	for address in pat.findall(line):
		print(address)

# 리눅스 에서는 control+d 해줘야댐