#include<iostream>
using namespace std;
#include<string>//��c++�����ַ����ǣ�Ҫ�������ͷ�ļ�


int main2() 
{
	//һ��
	//�����Ķ���
	//�﷨���������� ������=��ʼֵ

	int a = 9;
	cout << "a=" << a << endl;

	//�����Ķ��巽ʽ
	//1��#define �곣��
	//2��const���εı���Ҳ�ǳ���

	//1��#define�곣��
    #define Day 7

	cout << "һ���ܹ��У�" << Day << "��" << endl;

	//2��const���εı���Ҳ�ǳ���
	const int month = 12;
	
	cout << "һ���ܹ��У�" << month << "����" << endl;






	//����
	//���Σ�
	//1��short(������)��2�ֽڣ�
	//2��int(����)��4�ֽڣ�
	//3��long(������)��4�ֽڣ�
	//4��long long(��������)��8�ֽڣ�
	
	
	//����
	//������sizeof�����������ռ���ڴ��С
	//�﷨��sizeof����������/������

	short num1=10;
	cout << "num1=" << num1 << endl;
	cout << "num1ռ���ڴ�ռ�Ϊ��" << sizeof(num1) << endl;
	
	int num2=11;
	cout << "num2=" << num2 << endl;
	cout << "num2ռ���ڴ�ռ�Ϊ��" << sizeof(num2) << endl;

	long num3 = 12;
	cout << "num3=" << num3 << endl;
	cout << "num3ռ���ڴ�ռ�Ϊ��" << sizeof(num3) << endl;

	long long num4 = 13;
	cout << "num4=" << num4 << endl;
	cout << "num4ռ���ڴ�ռ�Ϊ��" << sizeof(num4) << endl;




	//�ġ�
	//ʵ�ͣ������ͣ�(���ڱ�ʾС��)
	//1��������  float(4�ֽ�)
    //2��˫���� double��8�ֽڣ�
	//Ĭ������£����һ��С��������ʾ��6λ��Ч����

	float f1 = 3.14f;
	cout << "f1=" << f1 << endl;

	double d1 = 3.14;
	cout << "d1=" << d1 << endl; 

	//��ѧ������
	float f2 = 3e2;//�൱��3*10^2
	cout << "f2=" << f2 << endl;

	float f3 = 3e-2;//�൱��3*10^-2
	cout << "f3=" << f3 << endl;





	//�塢�ַ��ͱ䣨1�ֽڣ�
	
	//1���ַ��ͱ����Ĵ�����ʽ
	//�ַ��õ�����
	char ch = 'a';
	cout << ch << endl;
	//2���ַ��ͱ�����ռ�ڴ��С
	cout << "�ַ��ͱ�����ռ�ڴ�:" << sizeof(char) << endl;
    //3���ַ��ͱ�����������
	//char ch2="b";(�����ַ��ͱ�����ʱ��Ҫ�õ�����)
	//char ch2='abcd';(�����ַ��ͱ�����ʱ�򣬵�������ֻ����һ���ַ���
    //4���ַ��ͱ�����Ӧ��ASCII����
	//a-97
	//A-65
	cout << (int)ch << endl;//(int)ch�����ַ��ͱ���ǿ��ת��������'



	//����ת���ַ�
	//���з�\n
	cout << "hello world\n";//�൱��<<endl
   	//��б��  
	cout << "\\" << endl;
	//ˮƽ�Ʊ��  \t   (ռ�˸���)����������������
	cout << "aaaa\thellowworld" << endl;
	cout << "aaaaa\thellowworld" << endl;
	cout << "aaaaaa\thellowworld" << endl;



	//�ߡ��ַ�����
	//1��c�����ַ���
	//�����������  �ַ�����˫����
	char str[] = "hello world";
    cout << str << endl;
	//2��c++����ַ���
	//�����һ��ͷ�ļ�  #include<string>
	string str1 = "hello world";
	cout << str1 << endl;



	//�ˡ���������bool
	bool flag = true;//true������
	cout << flag << endl;
	
	flag = false;
	cout << flag << endl;




	//�š����ݵ�����
	//��������
	int z = 0 ;
	cout << "���������ͱ�����" << endl;
	cin >> a;
	cout << a << endl;

	//����������
	//double d = 0;
	//cout << "�����븡���ͱ�����" << endl;
	//cin >> d;
	//cout << d << endl;

	////�ַ�������
	//char ch = 0;
	//cout << "�������ַ��ͱ�����" << endl;
	//cin >> ch;
	//cout << ch << endl;

	////�ַ���������
	//string str;
	//cout << "�������ַ����ͱ�����" << endl;
	//cin >> str;
	//cout << str << endl;

	////������������
	//bool flag = true;
	//cout << "�����벼���ͱ�����" << endl;//bool���� ֻҪ�Ƿ�0��ֵ��������
	//cin >> flag;
	//cout << flag << endl;





	system("pause");
	return 0;
} 
