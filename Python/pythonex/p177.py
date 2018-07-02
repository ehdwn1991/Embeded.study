import urllib.request, datetime
def download(url, user_agent='wswp', num_retries=2):
    print ('Downloading:', url)
    headers = {'User-agent': user_agent}
    request = urllib.request.Request(url, headers=headers)
    try:
        html = urllib.request.urlopen(request).read()
    except urllib.request.URLError as e:
        print ('Download error:', e.reason)
        html = None
        if num_retries > 0:
            if hasattr(e, 'code') and 500 <= e.code < 600:
        # retry 5XX HTTP errors
                return download(url, user_agent, num_retries-1)
    return html

download('http://httpstat.us/500') 
class Throttle: 
    """Add a delay between downloads to the same domain""" 
    def __init__(self, delay): 
	# amount of delay between downloads for each domain 
        self.delay = delay
	# timestamp of when a domain was last accessed 
        self.domains = {}
    def wait(self, url): 
        domain = urlparse.urlparse(url).netloc 
        last_accessed = self.domains.get(domain) 
        if self.delay > 0 and last_accessed is not None: 
            sleep_secs = self.delay - (datetime.datetime.now() - last_accessed).seconds 
        if sleep_secs > 0: 
	    # domain has been accessed recently 
	    # so need to sleep 
            time.sleep(sleep_secs) 
	# update the last accessed time 
        self.domains[domain] = datetime.datetime.now()
#throttle = Throttle(delay) ... 
#throttle.wait(url) 
#result = download(url, headers, proxy=proxy, num_retries=num_retries) 
