#include<iostream>
using namespace std;

int main8() {

	//do...while���
	/*int num = 0;

	do
	{
		cout << num << endl;
		num++;

	} 
	while (num < 10);*/
	//��whileѭ���������ڣ�do...while��ִ��һ��ѭ����䣬���ж�ѭ������
	
	//������ˮ�ɻ���
	//����������ˮ�ɻ�����ָһ�� 3 λ��������ÿ��λ�ϵ����ֵ� 3����֮�͵���������
    //���磺1 ^ 3 + 5 ^ 3 + 3 ^ 3 = 153
	int num = 100;
	do
	{
	
		//2����������λ�������ҵ�ˮ�ɻ���
		int a = 0;//��λ
		int b = 0;//ʮλ
		int C = 0;//��λ
	

		a = num % 10;
		b = num / 10 % 10;
		C = num / 100 ;
		if (a*a*a+b*b*b+C*C*C==num)//�����ˮ�ɻ������Ŵ�ӡ
		{
			cout << num << endl;
		}
		num++;
		
	} 
	while (num<1000);
	
	
	
	system("pause");
	return 0;
}
 