# �ڶ���
######## begin ###########
# ���д����isPrime(x)���ж�x�Ƿ�������������True����False
def isPrime(x):
    i=0
    for i in range(2,x):
        if x%i==0:
            print(False)
            break
    else:
        return True
#######  end    ############


def Goldbach(N):  # ��N�ֽ��������֮��
    if N < 6 or N % 2 == 1:  # ��NС��6��NΪ����
        None       
    else:
        # ѭ���жϣ��õ�����Ҫ���С��N����������������ӡ
        for x in range(2, N // 2):  # ����Ϊʲô�Ǵ�2��N/2
            # ����isPrime�������õ�����Ҫ���С��N����������
            ######## begin ###########
            if isPrime(x)==True and isPrime(N-x)==True:
                ######## end ###########
                print(N, '=', x, '+', N - x)
                break


N = int(input())
Goldbach(N)
