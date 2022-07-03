#include<iostream>
using namespace std;
#include<string>//用c++风格的字符串是，要包含这个头文件


int main2() 
{
	//一、
	//变量的定义
	//语法：数据类型 变量名=初始值

	int a = 9;
	cout << "a=" << a << endl;

	//常量的定义方式
	//1、#define 宏常量
	//2、const修饰的变量也是常量

	//1、#define宏常量
    #define Day 7

	cout << "一周总共有：" << Day << "天" << endl;

	//2、const修饰的变量也是常量
	const int month = 12;
	
	cout << "一年总共有：" << month << "个月" << endl;






	//二、
	//整形：
	//1、short(短整型)（2字节）
	//2、int(整形)（4字节）
	//3、long(长整型)（4字节）
	//4、long long(长长整型)（8字节）
	
	
	//三、
	//可以用sizeof求出数据类型占用内存大小
	//语法：sizeof（数据类型/变量）

	short num1=10;
	cout << "num1=" << num1 << endl;
	cout << "num1占用内存空间为：" << sizeof(num1) << endl;
	
	int num2=11;
	cout << "num2=" << num2 << endl;
	cout << "num2占用内存空间为：" << sizeof(num2) << endl;

	long num3 = 12;
	cout << "num3=" << num3 << endl;
	cout << "num3占用内存空间为：" << sizeof(num3) << endl;

	long long num4 = 13;
	cout << "num4=" << num4 << endl;
	cout << "num4占用内存空间为：" << sizeof(num4) << endl;




	//四、
	//实型（浮点型）(用于表示小数)
	//1、单精度  float(4字节)
    //2、双精度 double（8字节）
	//默认情况下，输出一个小数，会显示出6位有效数字

	float f1 = 3.14f;
	cout << "f1=" << f1 << endl;

	double d1 = 3.14;
	cout << "d1=" << d1 << endl; 

	//科学计数法
	float f2 = 3e2;//相当于3*10^2
	cout << "f2=" << f2 << endl;

	float f3 = 3e-2;//相当于3*10^-2
	cout << "f3=" << f3 << endl;





	//五、字符型变（1字节）
	
	//1、字符型变量的创建方式
	//字符用单引号
	char ch = 'a';
	cout << ch << endl;
	//2、字符型变量所占内存大小
	cout << "字符型变量所占内存:" << sizeof(char) << endl;
    //3、字符型变量常见错误
	//char ch2="b";(创建字符型变量的时候，要用单引号)
	//char ch2='abcd';(创建字符型变量的时候，单引号内只能有一个字符）
    //4、字符型变量对应的ASCII编码
	//a-97
	//A-65
	cout << (int)ch << endl;//(int)ch，将字符型变量强制转换成整型'



	//六、转义字符
	//换行符\n
	cout << "hello world\n";//相当于<<endl
   	//反斜杠  
	cout << "\\" << endl;
	//水平制表符  \t   (占八个格)可以整齐的输出数据
	cout << "aaaa\thellowworld" << endl;
	cout << "aaaaa\thellowworld" << endl;
	cout << "aaaaaa\thellowworld" << endl;



	//七、字符串型
	//1、c风格的字符串
	//必须加中括号  字符串用双引号
	char str[] = "hello world";
    cout << str << endl;
	//2、c++风格字符串
	//需包含一个头文件  #include<string>
	string str1 = "hello world";
	cout << str1 << endl;



	//八、布尔类型bool
	bool flag = true;//true代表真
	cout << flag << endl;
	
	flag = false;
	cout << flag << endl;




	//九、数据的输入
	//整型输入
	int z = 0 ;
	cout << "请输入整型变量：" << endl;
	cin >> a;
	cout << a << endl;

	//浮点型输入
	//double d = 0;
	//cout << "请输入浮点型变量：" << endl;
	//cin >> d;
	//cout << d << endl;

	////字符型输入
	//char ch = 0;
	//cout << "请输入字符型变量：" << endl;
	//cin >> ch;
	//cout << ch << endl;

	////字符串型输入
	//string str;
	//cout << "请输入字符串型变量：" << endl;
	//cin >> str;
	//cout << str << endl;

	////布尔类型输入
	//bool flag = true;
	//cout << "请输入布尔型变量：" << endl;//bool类型 只要是非0的值都代表真
	//cin >> flag;
	//cout << flag << endl;





	system("pause");
	return 0;
} 
