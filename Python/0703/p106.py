import re
import urlparse

def link_crawler(seef_url,link_regex):
	crawl_queue=[seef_url]
	while crawl_queue:
		url=crawl_queue.pop()
		html= download(url)

		for link in get_links(html):
			if re.match(link_regex,link):
				link = urlparse.urljoin(seef_url,link)
				crawl_queue.append(link)


def get_link(html):
	webpage_regex = re.compile