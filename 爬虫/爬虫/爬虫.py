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
    imgre = re.compile(reg)  # ת����һ���������
    imglist = imgre.findall(html)  # ��ʾ��������ҳ���˳�����ͼƬ�ĵ�ַ������imgList��
    x = 0        # ����һ��������ֵ
    path = 'E:\\pc'  # ����ͼƬ�ı����ַ
    paths = path + '\\'  # ������test·����
    for imgurl in imglist:
        urllib.request.urlretrieve(imgurl, '{0}{1}.jpg'.format(paths, x))  # ��imgList,����ͼƬ������
        x = x + 1
        print('begin')
    return imglist

html=vists_baidu()
get_img(html)

