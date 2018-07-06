import re 
text = "ababbaababbaababbabaabba"

pattern = 'ab'
for match in re.findall(pattern,text):
	print('found "%s" '%match)