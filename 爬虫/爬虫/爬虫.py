import re
from ssl import RAND_pseudo_bytes
from urllib import request
import urllib

def vists_baidu():
    # create a request obkect
    req = request.Request('http://www.baidu.com/index.html')
    # open the request object
    response = request.urlopen(req)
    # read the response 
    html = response.read()
    html = html.decode('utf-8')
    print(html)
    return html
def get_img(html):
    reg = r'https://[^\s]*?\.jpg'
    imgre = re.compile(reg)  # 转换成一个正则对象
    imglist = imgre.findall(html)  # 表示在整个网页过滤出所有图片的地址，放在imgList中
    x = 0        # 声明一个变量赋值
    path = 'E:\\pc'  # 设置图片的保存地址
    paths = path + '\\'  # 保存在test路径下
    for imgurl in imglist:
        urllib.request.urlretrieve(imgurl, '{0}{1}.jpg'.format(paths, x))  # 打开imgList,下载图片到本地
        x = x + 1
        print('begin')
    return imglist

html=vists_baidu()
get_img(html)

