import requests
r = requests.get(
'https://api.github.com/repos/kennethreitz/requests/git/commits/a050faf084662f3a352dd1a941f2c7c9f886d4ad')
if r.status_code == requests.codes.ok: 
    print (r.headers['content-type'])
    commit_data = r.json()
    print (commit_data.keys() )
    print (commit_data[u'committer'] )
    print (commit_data[u'message'])
    verbs = requests.options(r.url)
    print(verbs.status_code)
    verbs = requests.options('http://www.mdsacademy.co.kr/')
    print(verbs.headers[u'set-cookie'])
