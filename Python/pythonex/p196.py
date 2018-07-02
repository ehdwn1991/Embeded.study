#���̽� 3������ �Ʒ��� ���� �Է�
from bs4 import BeautifulSoup
import urllib

try:
    responsed = urllib.request.urlopen("https://www.packtpub.com/rss.xml")
    page = responsed.read().decode('utf-8', 'ignore')
    responsed.close()
except urllib.request.HTTPError as e:
    print(e.reason.args[1])
except urllib.request.URLError as e:
    print(e.reason.args[1])

soup = BeautifulSoup(page,"lxml")
#print(soup)
# domain �±��� �θ� ��带 �����Ͷ�
elements = soup.findAll('category')
for i in elements:
    parent = i.parent
##    print (str(parent))

# img�� ���� ���� �ִ� ���� �ڽ� ��带 �����Ͷ�
for i in elements:
    sibling = i.previous_silibing
##    print (str(sibling))

# xml ������ �������� �κ��� ������ �����ϴ�.
tests = soup.findAll('item')
for test in tests:
    print(test.findAll('title'))
    print (test.findAll('pubdate'))
    print (test.findAll('category'))
	print (test['ispermalink'])
#���� ��� �����Ͱ� �Ʒ��� ���ٸ� ��123���� ��345���� ��µ�
#<test value1='123' value2='345' />
#<test value1='234' value3='456' />
if(1):
	cats = soup.findAll('category')
	for cat in cats:
		print (cat['domain'])
else:		
	cats = soup.findAll('guid')
	for cat in cats:
		print (cat['ispermalink'])