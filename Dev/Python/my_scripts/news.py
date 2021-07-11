import requests
import os
import pprint
#r = requests.get('https://news.google.pl')
#if r.status_code == 200:
#	pass
	#print(r.text)
	#os.system('find "^<a href="' + r.text[:100])
	#os.system('find "^<a href="' + r.text[100:])
gh = requests.get('https://api.github.com/events')#, auth=('ankiedos', 'nkomlp1380J'))
if gh.status_code == 200:
	pprint.pprint(gh.json())
	pprint.pprint(gh.text)