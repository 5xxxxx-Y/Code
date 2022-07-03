#include<iostream>``````````
using namespace std;

int main3() {
	
	//一、算数运算符
	//1、加减乘除
	int a1 = 10;
	int b1 = 3;
	int c1 = 20;
	cout << a1 + b1 << endl;
	cout << a1 - b1 << endl;
	cout << a1 * b1 << endl;
	cout << a1 / b1 << endl;//两个整数相除 结果依然是整数，将小数部分去除
	cout << a1 / c1 << endl;//两个整数相除 结果依然是整数，将小数部分去除
	//小数可以相除，且结果可为小数 
	double d1 = 0.7;
	double e1 = 0.2;
	cout << d1 / e1 << endl;
	cout << b1 / d1 << endl;

	//2、取模
	cout << a1 % b1 << endl;
	//两个小数不可以取模

	//3、前置后置递增运算符
	//后置递增
	int a = 10;
	a++; //等价于a = a + 1
	cout << a << endl; // 11

	//前置递增
	int b = 10;
	++b;
	cout << b << endl; // 11

	//区别
	//前置递增先对变量进行++，再计算表达式
	int a2 = 10;
	int b2 = ++a2 * 10;
	cout << b2 << endl;

	//后置递增先计算表达式，后对变量进行++
	int a3 = 10;
	int b3 = a3++ * 10;
	cout << b3 << endl;


    //二、赋值运算符
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


	//三、比较运算符//0（假）   1（真）
	int h = 10;
	int j = 20;

	cout << (h == j) << endl; // 0 

	cout << (h != j) << endl; // 1

	cout << (h > j) << endl; // 0

	cout << (h< j) << endl; // 1

	cout << (h >= j) << endl; // 0

	cout << (h <= j)<< endl; // 1

	//四、逻辑运算符
	//!  非	 !a	    如果a为假，则!a为真； 如果a为真，则!a为假。
	//&& 与	 a&&b	如果a和b都为真，则结果为真，否则为假。
	//|| 或	 a||b	如果a和b有一个为真，则结果为真，二者都为假时，结果为假。


	system("pause");
	return 0;
}