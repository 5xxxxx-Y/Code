#include<iostream>
using namespace std;
//time系统时间头文件包含
#include<ctime>

int main7() {

	int num = 0;

		/*while (num<10)
		{
			cout << num << endl;
			num++;
		}*/
		//在执行循环语句时候，程序必须提供跳出循环的出口，否则出现死循环



		//猜数字
		
		//添加随机数种子 利用当前系统时间生成随机数,防止每次随机数都一样 
	srand((unsigned int)time(NULL));
		
		
		//1、系统生产随机数
		int num1 = rand() % 100 + 1;  //生成(0+1)到(99+1)的随机数
		// cout << num1 << endl;
		//2、玩家进行猜测
		int val = 0;
		
		
		
		while (val!=num1)
		{
		
			cout << "请玩家输入数字：" << endl;
			cin >> val;//玩家输入数字
			//3、判断玩家的猜测
			if (val > num1)
			{
				cout << "您输入的数字大于随机数" << endl;
		
			}
			else if (val < num1)
			{
				cout << "你输入的数字小于随机数" << endl;
			}
			else if (val = num1)
			{
				cout << "恭喜您，猜对了" << endl;
				break;//成功则退出当前循环
			}

			
		}
		
			
		




	system("pause");
	return 0;
}