#include<iostream>``````````
using namespace std;

int main3() {
	
	//һ�����������
	//1���Ӽ��˳�
	int a1 = 10;
	int b1 = 3;
	int c1 = 20;
	cout << a1 + b1 << endl;
	cout << a1 - b1 << endl;
	cout << a1 * b1 << endl;
	cout << a1 / b1 << endl;//����������� �����Ȼ����������С������ȥ��
	cout << a1 / c1 << endl;//����������� �����Ȼ����������С������ȥ��
	//С������������ҽ����ΪС�� 
	double d1 = 0.7;
	double e1 = 0.2;
	cout << d1 / e1 << endl;
	cout << b1 / d1 << endl;

	//2��ȡģ
	cout << a1 % b1 << endl;
	//����С��������ȡģ

	//3��ǰ�ú��õ��������
	//���õ���
	int a = 10;
	a++; //�ȼ���a = a + 1
	cout << a << endl; // 11

	//ǰ�õ���
	int b = 10;
	++b;
	cout << b << endl; // 11

	//����
	//ǰ�õ����ȶԱ�������++���ټ�����ʽ
	int a2 = 10;
	int b2 = ++a2 * 10;
	cout << b2 << endl;

	//���õ����ȼ�����ʽ����Ա�������++
	int a3 = 10;
	int b3 = a3++ * 10;
	cout << b3 << endl;


    //������ֵ�����
	// =
	int a5 = 10;
	a5 = 100;
	cout << "a5 = " << a5 << endl;

	// +=
	a5 = 10;
	a5 += 2; // a = a + 2;
	cout << "a5 = " << a5 << endl;

	// -=
	a5 = 10;
	a5 -= 2; // a = a - 2
	cout << "a5 = " << a5 << endl;

	// *=
	a5 = 10;
	a5 *= 2; // a = a * 2
	cout << "a5 = " << a5 << endl;

	// /=
	a5 = 10;
	a5 /= 2;  // a = a / 2;
	cout << "a5 = " << a5 << endl;

	// %=
	a5 = 10;
	a5 %= 2;  // a = a % 2;
	cout << "a5 = " << a5 << endl;


	//�����Ƚ������//0���٣�   1���棩
	int h = 10;
	int j = 20;

	cout << (h == j) << endl; // 0 

	cout << (h != j) << endl; // 1

	cout << (h > j) << endl; // 0

	cout << (h< j) << endl; // 1

	cout << (h >= j) << endl; // 0

	cout << (h <= j)<< endl; // 1

	//�ġ��߼������
	//!  ��	 !a	    ���aΪ�٣���!aΪ�棻 ���aΪ�棬��!aΪ�١�
	//&& ��	 a&&b	���a��b��Ϊ�棬����Ϊ�棬����Ϊ�١�
	//|| ��	 a||b	���a��b��һ��Ϊ�棬����Ϊ�棬���߶�Ϊ��ʱ�����Ϊ�١�


	system("pause");
	return 0;
}