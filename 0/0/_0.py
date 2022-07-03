month = int(input())
# 31天的月份：1~7之间的奇数月、8~12之间的偶数月
# 如果是31天的月份输出yes
####### begin #######
if 1<=month<=7 and month%2==1:
    print ("yes")
elif 8<=month<=12 and month%2==0:    
    print ("yes")
else:
    print ("no")