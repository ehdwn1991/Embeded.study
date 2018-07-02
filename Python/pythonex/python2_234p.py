#-*- coding:cp949 -*-
from urllib import urlopen
url = "http://www.gutenberg.org/files/2554/2554.txt"
raw = urlopen(url).read()
type(raw)
#str

len(raw)
#1176831

raw[:75]
#'The Project Gutenberg EBook of Crime and Punishment, by Fyodor Dostoevsky\r\n'

import nltk
tokens = nltk.word_tokenize(raw)
len(tokens)
#255809

tokens[:10]
#['The', 'Project', 'Gutenberg', 'EBook', 'of', 'Crime', 'and', 'Punishment', ',', 'by']
import re
def clean_html(html):
    """
    Copied from NLTK package.    Remove HTML markup from the given string.
    :param html: the HTML string to be cleaned
    :type html: str    :rtype: str
    """

    # First we remove inline JavaScript/CSS:
    cleaned = re.sub(r"(?is)<(script|style).*?>.*?(</\1>)", "", html.strip())
    # Then we remove html comments. This has to be done before removing regular
    # tags since comments can contain '>' characters.
    cleaned = re.sub(r"(?s)<!--(.*?)-->[\n]?", "", cleaned)
    # Next we can remove the remaining tags:
    cleaned = re.sub(r"(?s)<.*?>", " ", cleaned)
    # Finally, we deal with whitespace
    cleaned = re.sub(r"&nbsp;", " ", cleaned)
    cleaned = re.sub(r"  ", " ", cleaned)
    cleaned = re.sub(r"  ", " ", cleaned)
    return cleaned.strip()
import mechanize
import nltk
from bs4 import BeautifulSoup
from html2text import html2text 

#url = "http://www.nytimes.com/2015/08/31/business/challenged-on-left-and-right-the-fed-faces-a-decision-on-rates.html"
url = "http://news.bbc.co.uk/2/hi/health/2284783.stm"
br = mechanize.Browser()
br.set_handle_robots(False)
br.addheaders = [('User-agent', 'Firefox')]
html = br.open(url).read().decode('utf-8')
cleanhtml = clean_html(html)
text = html2text(cleanhtml)
soup = BeautifulSoup(html, "html.parser")
text2 = soup.get_text()
tokens = tokens[96:399]
text3 = nltk.Text(tokens)
text3.concordance('gene')
print text2,text3
