#���̽� 3������ �Ʒ��� ���� �Է�
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
# td �±��� class ���� 'test'�� �׸� �����ͼ� ����ض�
elements = soup.findAll('td', {'class':'test'})
for i in elements:
    print (str(i))

# img?�±��� �Ӽ�?���� 'vspace'�̰� ���� 5�� �׸� �����ͼ� ����ض�
elements = soup.findAll('img', attrs={'vspace':'5'})
for i in elements:
    print (str(i))

# img �±׸� ������ ���� src ���� ������ ����ض�
elements = soup.findAll('img')
for i in elements:
    print (str(i['src']))

