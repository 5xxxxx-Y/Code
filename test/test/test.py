# 第二题
######## begin ###########
# 请编写函数isPrime(x)。判断x是否是素数，返回True或者False
def isPrime(x):
    i=0
    for i in range(2,x):
        if x%i==0:
            print(False)
            break
    else:
        return True
#######  end    ############


def Goldbach(N):  # 将N分解成两素数之和
    if N < 6 or N % 2 == 1:  # 若N小于6或N为奇数
        None       
    else:
        # 循环判断，得到符合要求的小于N的两个素数，并打印
        for x in range(2, N // 2):  # 想想为什么是从2到N/2
            # 调用isPrime函数，得到符合要求的小于N的两个素数
            ######## begin ###########
            if isPrime(x)==True and isPrime(N-x)==True:
                ######## end ###########
                print(N, '=', x, '+', N - x)
                break


N = int(input())
Goldbach(N)
