month = int(input())
# 31����·ݣ�1~7֮��������¡�8~12֮���ż����
# �����31����·����yes
####### begin #######
if 1<=month<=7 and month%2==1:
    print ("yes")
elif 8<=month<=12 and month%2==0:    
    print ("yes")
else:
    print ("no")