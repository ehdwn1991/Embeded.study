import requests
import urllib.request
import os 

k_stock_1976_file_name = "input/k_stock_200.txt"

print(os.getcwd())
stock_codes = []
with open(k_stock_1976_file_name,"r") as k_stok_1976_file:
    
    while 1:
        line = k_stok_1976_file.readline()
        if not line: break
        stock_codes.append(line.strip())


output_prefix = "output"
if not os.path.exists(output_prefix):
        os.makedirs(output_prefix)
os.chdir(output_prefix)
print(os.getcwd())
web_url_prefix = "http://finance.naver.com/item/main.nhn?code="

for code in stock_codes:
    file_name = output_prefix + code + ".html"
    web_url = web_url_prefix + code
    
    with open(file_name, "wt", encoding='utf-8') as stock_html_file:
        html_contents = urllib.request.urlopen(web_url).read().decode('euc-kr')
        #import chardet
        #print(chardet.detect(html_contents))
        stock_html_file.write(html_contents)
