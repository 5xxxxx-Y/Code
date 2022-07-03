#include<iostream>
using namespace std;

int main11()
{
	//案例1：打印出10x10的*星图

	//外层循环
	for (int a = 0; a < 10; a++)
	{
		//内层循环
		for (int i = 0; i < 10; i++)
		{
			cout << "* ";
		}
		cout << endl;
	}

	//案例2：九九乘法表

	for (int num1 = 1; num1 <= 9; num1++)
	{
		//打印行数
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
