#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

// 求一元二次方程的根
void SloveEquation()
{
	float a, b, c;
	float root1 = 0, root2 = 0, det = 0;
	cout << "请分别输入二次项系数a,一次项系数b,常数c(以空格为间隔):";
	cin >> a >> b >> c;
	cout << "该方程为:" << "y=" << a << "x*x" << "+" << b << "x" << "+" << c << endl;
	det = b * b - 4 * a * c;
	if (a == 0 && b == 0)
	{
		cout << "该方程无意义" << endl;
	}
	else if (a == 0 && b != 0)
	{
		cout << "该方程的根为:" << (float) - c / b;
	}
	else
	{
		if (det < 0)
		{
			root1 = -b / 2 * a + sqrt(4 * a * c - b * b) / 2 * a;
			root2 = -b / 2 * a - sqrt(4 * a * c - b * b) / 2 * a;
			cout << "该方程的第一个虚根为:" << -b / 2 * a << "+" << sqrt(4 * a * c - b * b) / 2 * a << "i" << endl;
			cout << "该方程的第二个虚根为:" << -b / 2 * a << "-" << sqrt(4 * a * c - b * b) / 2 * a << "i" << endl;
		}
		else if (det == 0)
		{
			root1 = (-b + sqrt(det)) / 2 * a;
			cout << "该方程的根为:" << root1 << endl;
		}
		else
		{
			root1 = (-b + sqrt(det)) / 2 * a;
			root2 = (-b - sqrt(det)) / 2 * a;
			cout << "该方程的第一个根为:" << root1 << endl;
			cout << "该方程的第二个根为:" << root2 << endl;
		}

	}

}

// 把输入的字符中的O或1提取，作为二进制数，并输出十进制的值
void BinaryToDec()
{
	char a[100];
	char b[100];
	int c = 0, d = 0;
	cout << "请输入一段字符串:";
	cin >> a;
	for (int i = 0; a[i] != '\0'; ++i) 
	{
		if (a[i] == '0' || a[i] == '1') 
		{
			d *= 2;
			d += a[i] - '0'; 
		}
	}
	cout << d << endl;
}

// 输出[m, n]之间的所有素数，并求素数个数
void Primes()
{
	int m, n, flag = 0, con = 0;
	cout << "请输入m、n:" << endl;
	cin >> m >> n;
	if (m > n)
	{
		m = m + n;
		n = m - n;
		m = m - n;
	}
	for (int i = m; i < n; i++)
	{
		for (int j = 2; j < i-1; j++)
		{
			flag = 1;
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag==1 || i==1)
		{
			cout << i << "是素数" << endl;
			con++;
		}
	}
	cout << "一共有" << con << "个素数" << endl;
}

int main() {
	int choice = 0;
	cout << " 0 => 一元二次方程；1 => 二进制转十进制； 2 => 素数：";
	cin >> choice;

	switch (choice)
	{
	case 0:
		SloveEquation();
		break;
	case 1:
		BinaryToDec();
		break;
	case 2:
		Primes();
		break;
	}
	system("pause");
	return 0;
}

