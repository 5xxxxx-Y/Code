#include<iostream>
using namespace std;

int main8() {

	//do...while语句
	/*int num = 0;

	do
	{
		cout << num << endl;
		num++;

	} 
	while (num < 10);*/
	//与while循环区别在于，do...while先执行一次循环语句，再判断循环条件
	
	//案例：水仙花数
	//案例描述：水仙花数是指一个 3 位数，它的每个位上的数字的 3次幂之和等于它本身
    //例如：1 ^ 3 + 5 ^ 3 + 3 ^ 3 = 153
	int num = 100;
	do
	{
	
		//2、从所有三位数字中找到水仙花数
		int a = 0;//个位
		int b = 0;//十位
		int C = 0;//百位
	

		a = num % 10;
		b = num / 10 % 10;
		C = num / 100 ;
		if (a*a*a+b*b*b+C*C*C==num)//如果是水仙花数，才打印
		{
			cout << num << endl;
		}
		num++;
		
	} 
	while (num<1000);
	
	
	
	system("pause");
	return 0;
}
 