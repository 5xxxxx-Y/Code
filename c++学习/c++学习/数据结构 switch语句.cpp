#include<iostream>
using namespace std;

int main6() {

	//switch��� 
	//�����Ӱ���� 
	//10 ~ 9   ����   
	// 8 ~ 7   �ǳ���
	// 6 ~ 5   һ��
	// 5������ ��Ƭ

	//1����ʾ�û�����Ӱ����
	cout << "�����Ӱ��������:" << endl;
	//2���û���ʼ��������
	int score = 0;
	cin >> score;
	cout << "�����ķ���Ϊ��" << score << endl;
	//3�������û�����ķ�������ʾ�û����Ľ��
	switch (score)
	{
	case 10:
	case 9:
		cout << "����Ϊ�Ǿ����Ӱ" << endl;
		 break;//�˳���ǰ�ķ�֧  
	case 8:
	case 7:
		cout << "�ǳ���" << endl;
		break;
	case 6:
	case 5:
		cout << "һ��" << endl;
		break;
	default:
		cout << "��Ƭ" << endl;
		break;
	}
	//��if���ȣ����ڶ������ж�ʱ��switch�Ľṹ������ִ��Ч�ʸߣ�ȱ����switch�������ж�����


	system("pause");
	return 0;
}
