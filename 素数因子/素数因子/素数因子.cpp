#include <iostream>
using namespace std;

int main()
{
	int num, a = 2;
	int con = 0;
	cout << "请输入一个整数:";
	cin >> num;
	cout << "素数因子为:";
	while (num!=1)
	{
		if (num % a == 0)
		{
			cout << a << ";";
			num = num / a;
		}
		else
		{
			++a;
		}
		con++;
	}
	cout << endl << "总共做了:" << con << "次循环";
}