#include<iostream>
using namespace std;
int main10() 
{	//案例描述：从1开始数到数字100， 如果数字个位含有7，或者数字十位含有7，或者该数字是7的倍数，我们打印敲桌子，其余数字直接打印输出。
	int a = 0;
	int b = 0;
	for (int num = 1; num <= 100; num++)
	{
		a = num % 10;
		if (10<=num<=99)
		{
			b = num / 10 % 10;
		}
		if (a==7||b==7||num%7==0)
		{
			cout << "敲桌子" << endl;
		}
		else
		{
			cout << num << endl;
		}
	}


	
	
	
	
	
	
	
	
	system("pause");
	return 0;
}
