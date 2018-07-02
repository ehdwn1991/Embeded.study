#파이썬 3에서는 아래와 같이 입력
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
# domain 태그의 부모 노드를 가져와라
elements = soup.findAll('category')
for i in elements:
    parent = i.parent
##    print (str(parent))

# img와 동일 선상에 있는 이전 자식 노드를 가져와라
for i in elements:
    sibling = i.previous_silibing
##    print (str(sibling))

# xml 데이터 가져오는 부분은 기존과 동일하다.
tests = soup.findAll('item')
for test in tests:
    print(test.findAll('title'))
    print (test.findAll('pubdate'))
    print (test.findAll('category'))
	print (test['ispermalink'])
#예를 들어 데이터가 아래와 같다면 ‘123’과 ‘345’가 출력됨
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