#include<iostream>
using namespace std;
#include<ctime>

int main9() 
{
	//forѭ��
	//������0��ӡ������9

	/*for (int i = 0; i < 10; i++)
	{
		cout << i << endl;
	}*/


	//��for�����в����֣���Ӳ²�������ƣ�

		//������������ ���õ�ǰϵͳʱ�����������,��ֹÿ���������һ�� 
	srand((unsigned int)time(NULL));


	//1��ϵͳ���������
	int num1 = rand() % 100 + 1;  //����(0+1)��(99+1)�������
	// cout << num1 << endl;
	//2����ҽ��в²�
	int val = 0;


	cout << "��������Ϸ��ʼ����ֻ��8�λ���" << endl;
	for (int a = 1; a <= 8; a++)//ֻ��8�β²����
	{

		cout << "������������֣�" << endl;
		cin >> val;//�����������
		//3���ж���ҵĲ²�
		if (val > num1) 
		{
			cout << "����������ִ��������" << endl;

		}
		else if (val < num1)
		{
			cout << "�����������С�������" << endl;
		}
		else if (val = num1)
		{
			cout << "��ϲ�����¶���" << endl;
			break;//�ɹ����˳�ѭ��
		}
		if (a==8)
		{
			cout << "���Ѳ²�8�Σ���Ϸ����" << endl;
		}
	}



	system("pause");
	return 0;
}
