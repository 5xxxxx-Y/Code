#include <iostream>
using namespace std;
int Fabricate(long long int m, long long int n);
void print(int w);

void print(int w)
{
	if (w==0)
	{
		return;
	}
	print(w-1);
	for (int i = 1; i <= w; i++)
	{
		cout << w << " ";
	}
	cout << endl;
}

int Fabricate(long long int m, long long int n)
{
	long long int sum_m = 1, sum_n = 1;
	for (long long int i = m; i > n ; i--)
	{
		sum_m *= i;
		cout << sum_m << endl;
	}
	for (long long int j = 1; j < n+1; j++)
	{
		sum_n *= j;
	}
	return sum_m / sum_n;
}

int main()
{
	int choice;
	cout << "1-->print;2-->Fabricate:";
	cin >> choice;
	if (choice==1)
	{
		print(5);
	}
	if (choice==2)
	{
		long long int m, n, result;
		cout << "请输入m和n，以空格为间隔:";
		cin >> m >> n;
		if (m < n)
		{
			cout << "你输入的m小于n,已自动为你调转为:";
			m = m + n;
			n = m - n;
			m = m - n;
			cout << "m=" << m << ' ' << "n=" << n << endl;
		}
		result = Fabricate(m, n);
		cout << "结果为:" << result;
	}
}

