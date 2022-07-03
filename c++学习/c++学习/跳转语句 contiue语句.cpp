#include<iostream>
using namespace std;

int main() {
	//在==循环语句==中，跳过本次循环中余下尚未执行的语句，继续执行下一次循环
	for (int i = 0; i < 100; i++)
	{
		if (i % 2 == 0)//0 2 4 6 8 10
		{
			continue;//可以筛选条件，执行到此就不在向下执行，执行下一次循环 
		}
	











	system("pause");
	return 0;
}
