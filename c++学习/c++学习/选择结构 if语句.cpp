#include<iostream>
using namespace std;

int main4() {

	//一、if语句
	//用户输入分数 ，如果分数大于600，则视为考生一本大学，在屏幕上输出，否则在屏幕上输出为考上一本大学
	//在一本分数线内，如果大于700分，考入北大，大于650分考入清华（嵌套if语句）
	//分数大于500分，视为考上二本大学
	//分数大于400分，视为考上三本大学
	//小于等于400分，视为未考上本科
	//1、用户输入分数
	int score = 0;
	cout << "请输入一个分数：" << endl;
	cin >> score;
	//2、打印用户输入的分数
	cout << "您输入的分数为：" << score << endl;
	//3、判断分数是否大于600，如果大于，那么输出
	//注意事项：if条件后面不要加分号
	if (score>600)
	{
		cout<<"恭喜你考上了一本大学"<<endl;
		if (score>700)
		{
			cout << "你能考上北京大学" << endl;
		}
		else if (score>650)
		{
			cout << "你能考上清华大学" << endl;
		}
	}
	else if (score>500)//第二个条件判断
	{
		cout << "恭喜你考上二本大学" << endl;
	}
	else if (score>400)//第三个判断条件
	{
		cout << "恭喜你考上了三本大学" << endl;
	}
	else
	{
		cout << "未考上本科大学，请再接再厉" << endl;
	}






	

	system("pause");
	return 0;
}