from bs4 import BeautifulSoup

page = '<a class="sister" href="http://example.com/elsie" id="link1">Elsie</a>'
soup = BeautifulSoup(page,"html.parser")
Learning = soup.find_all("a", class_="sister")
print(Learning)
