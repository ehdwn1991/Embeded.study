#파이썬 3에서는 아래와 같이 입력
from bs4 import BeautifulSoup
import urllib

try:
    responsed = urllib.request.urlopen("https://www.pycon.kr/2017/")
    page = responsed.read().decode('cp949', 'ignore')
    responsed.close()
except urllib.request.HTTPError as e:
    print(e.reason.args[1])
except urllib.request.URLError as e:
    print(e.reason.args[1])

soup = BeautifulSoup(page,"lxml")
print(soup)
# td 태그의 class 명이 'test'인 항목만 가져와서 출력해라
elements = soup.findAll('td', {'class':'test'})
for i in elements:
    print (str(i))

# img?태그의 속성?명이 'vspace'이고 값이 5인 항목만 가져와서 출력해라
elements = soup.findAll('img', attrs={'vspace':'5'})
for i in elements:
    print (str(i))

# img 태그를 가져온 다음 src 안의 내용을 출력해라
elements = soup.findAll('img')
for i in elements:
    print (str(i['src']))

