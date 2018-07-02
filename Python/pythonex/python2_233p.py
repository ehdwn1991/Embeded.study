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
