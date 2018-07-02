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
