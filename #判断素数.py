#判断素数
a=eval(input("请输入一个数:"))
b=2
while 2<=b<a:
    if a%b==0:
        print ("你输入的不是素数")
        break
    b=b+1
else:
    print ("你输入的是素数")