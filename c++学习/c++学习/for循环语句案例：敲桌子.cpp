#include<iostream>
using namespace std;
int main10() 
{	//������������1��ʼ��������100�� ������ָ�λ����7����������ʮλ����7�����߸�������7�ı��������Ǵ�ӡ�����ӣ���������ֱ�Ӵ�ӡ�����
	int a = 0;
	int b = 0;
	for (int num = 1; num <= 100; num++)
	{
		a = num % 10;
		if (10<=num<=99)
		{
			b = num / 10 % 10;
		}
		if (a==7||b==7||num%7==0)
		{
			cout << "������" << endl;
		}
		else
		{
			cout << num << endl;
		}
	}


	
	
	
	
	
	
	
	
	system("pause");
	return 0;
}
