import requests, json

r = requests.get('https://api.github.com/repos/kennethreitz/requests/issues/482')
if r.status_code == 200:
    issue = json.loads(r.text)
    print issue[u'title'],'\n',issue[u'comments']
    r = requests.get(r.url + u'/comments')
    if r.status_code == 200:
        comments = r.json()
        print comments[0].keys(),'\n',comments[2][u'body'],'\n',comments[2][u'user'][u'login'] 
        body = json.dumps({u"body": u"Sounds great! I'll get right on it!"})
        print(body)
url = u"https://api.github.com/repos/kennethreitz/requests/issues/482/comments"
r = requests.post(url=url, data=body)
print(r.status_code)
from requests.auth import HTTPBasicAuth
auth = HTTPBasicAuth('fake@example.com', 'not_a_real_password')

r = requests.post(url=url, data=body, auth=auth)
print(r.status_code)
content = r.json()
print(content[u'message'])



