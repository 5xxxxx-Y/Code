#include <iostream>
using namespace std;
void hnt(int n, char a, char b, char c, int* num);

int main()
{
	int n;
	int num_1 = 1;
	int* num;
	cout << "请输入一共有多少个盘子:";
	cin >> n;
	num = &num_1;
	hnt(n, 'A', 'B', 'C' ,num);
}
void hnt(int n, char a, char b, char c, int* num)
{
	if (n == 1)
	{
		cout << "第" << *num << "步:" << a << "-->" << c << endl;
		*num += 1;
	}
	else
	{
		hnt(n - 1, a, c, b, num);
		cout << "第" << *num << "步:" << a << "-->" << c << endl;
		*num += 1;
		hnt(n - 1, b, a, c, num);
	}
}


