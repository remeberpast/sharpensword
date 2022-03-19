import requests
from requests.packages import urllib3

urllib3.disable_warnings()
# 窒息感API调用并处理响应
url = 'https://api.github.com/search/repositories?q=language:python&sort=stars'
headers = {'Accept': 'application/vnd.github.v3+json'}
r = requests.get(url, headers=headers, verify=False)
print(f"Status code: {r.status_code}")
# 将api响应赋给一个变量
response_dict = r.json()

# 处理结果
print(response_dict.keys())
