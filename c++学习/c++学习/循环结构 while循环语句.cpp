#include<iostream>
using namespace std;
//timeϵͳʱ��ͷ�ļ�����
#include<ctime>

int main7() {

	int num = 0;

		/*while (num<10)
		{
			cout << num << endl;
			num++;
		}*/
		//��ִ��ѭ�����ʱ�򣬳�������ṩ����ѭ���ĳ��ڣ����������ѭ��



		//������
		
		//������������ ���õ�ǰϵͳʱ�����������,��ֹÿ���������һ�� 
	srand((unsigned int)time(NULL));
		
		
		//1��ϵͳ���������
		int num1 = rand() % 100 + 1;  //����(0+1)��(99+1)�������
		// cout << num1 << endl;
		//2����ҽ��в²�
		int val = 0;
		
		
		
		while (val!=num1)
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
				break;//�ɹ����˳���ǰѭ��
			}

			
		}
		
			
		




	system("pause");
	return 0;
}