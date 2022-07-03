i=1
p=1
x=1
while 1/i>pow(10,-7):
    i=i+2
    p=p+(1/i)*pow(-1,x)
    x=x+1
 else:
    print (4*p)
