import requests
from bs4 import BeautifulSoup
import re 
import os

# 页面请求
def get_html(url):
    try:
        r = requests.get(url=url)
        r.raise_for_status()
        r.encoding = r.apparent_encoding
        print(r.text)
        print("爬取成功")
        return r.text
    except:
        print("请求失败")
        return -1
    
# 批量下载
def download(url):
    dir_name, src_name = url.split("/")[-2:]  # 获取文件夹名和源码名
    if not os.path.isdir(dir_name):  # 如果目录不存在，那么创建目录
        os.mkdir(os.path.join(os.getcwd(), dir_name))
    text = get_html(url)    # 获取代码路径
    if (text != -1):
        with open(os.path.join(os.getcwd(), dir_name, src_name), "w") as f:
            f.write(text)


def text_processing(text):    
    # 转换 html 至 C 源代码
    clean = re.compile("<.*?>")         # 移除标签
    text = re.sub(clean, "", text)      # 移除标签
    text = text.replace("&lt;", "<")    # 处理 html 转义字符
    text = text.replace("&gt;", ">")    # 处理 html 转义字符
    newtext = ""
    for line in text.split("\n")[10:]:  # 跳过 head 行
        newtext += line[5:] + "\n"      # 删除行号
    
    return newtext

def do_process2file(path):
    
    with open(path, "r", encoding="gbk") as f:  # html 的字符格编码是 GBK
        text = f.read()
        text = text_processing(text)
        with open(path[:-4], "w", encoding="utf-8") as f:  # 将 html 的编码转换成 utf-8 编码
            f.write(text)


if __name__ == "__main__":
    
    # 批量下载源代码的 html 文件
    url = "https://dsa.cs.tsinghua.edu.cn/~deng/ds/src_link/"
    html = get_html(url=url)

    soup = BeautifulSoup(html, "html.parser")
    for Tag in soup.find_all('a'):
        link = Tag.get("href")
        if isinstance(link, str):
            print(url + link[2:])
            download(url + link[2:])
            # time.sleep(0.5)
    
    # 批量将 html 文件转换成源码
    for dirpath, dirnames, filenames in os.walk("./"):
        for file in filenames:
            if file != "deal.py":
                print(os.path.join(dirpath, file))
                do_process2file(os.path.join(dirpath, file))