#include<iostream>
using namespace std;

int main11()
{
	//����1����ӡ��10x10��*��ͼ

	//���ѭ��
	for (int a = 0; a < 10; a++)
	{
		//�ڲ�ѭ��
		for (int i = 0; i < 10; i++)
		{
			cout << "* ";
		}
		cout << endl;
	}

	//����2���žų˷���

	for (int num1 = 1; num1 <= 9; num1++)
	{
		//��ӡ����
		//cout << num1 << endl;

		for (int num2 = 1; num2 <= num1; num2++)
		{
			cout << num2 << " * " << num1 << " = " << num1 * num2 << "\t";
		}
		cout << endl;
	}




		system("pause");
		return 0;
	}
