import requests
url="https://www.baidu.com/baidu?tn=monline_4_dg&ie=utf-8&wd=ValueError%3A+check_hostname+requires+server_hostname"
a=requests.session()
b=a.get(url)
print(b)