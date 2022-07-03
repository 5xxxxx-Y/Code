#include<iostream>
using namespace std;
#include<ctime>

int main9() 
{
	//for循环
	//从数字0打印到数字9

	/*for (int i = 0; i < 10; i++)
	{
		cout << i << endl;
	}*/


	//用for语句进行猜数字（添加猜测次数限制）

		//添加随机数种子 利用当前系统时间生成随机数,防止每次随机数都一样 
	srand((unsigned int)time(NULL));


	//1、系统生产随机数
	int num1 = rand() % 100 + 1;  //生成(0+1)到(99+1)的随机数
	// cout << num1 << endl;
	//2、玩家进行猜测
	int val = 0;


	cout << "猜数字游戏开始，你只有8次机会" << endl;
	for (int a = 1; a <= 8; a++)//只有8次猜测机会
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
			break;//成功则退出循环
		}
		if (a==8)
		{
			cout << "您已猜测8次，游戏结束" << endl;
		}
	}



	system("pause");
	return 0;
}
