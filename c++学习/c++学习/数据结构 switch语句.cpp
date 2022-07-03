#include<iostream>
using namespace std;

int main6() {

	//switch语句 
	//请给电影评分 
	//10 ~ 9   经典   
	// 8 ~ 7   非常好
	// 6 ~ 5   一般
	// 5分以下 烂片

	//1、提示用户给电影评分
	cout << "请给电影进行评分:" << endl;
	//2、用户开始进行评分
	int score = 0;
	cin >> score;
	cout << "您评的分数为：" << score << endl;
	//3、根据用户输入的分数来提示用户最后的结果
	switch (score)
	{
	case 10:
	case 9:
		cout << "您认为是经典电影" << endl;
		 break;//退出当前的分支  
	case 8:
	case 7:
		cout << "非常好" << endl;
		break;
	case 6:
	case 5:
		cout << "一般" << endl;
		break;
	default:
		cout << "烂片" << endl;
		break;
	}
	//与if语句比，对于多条件判断时，switch的结构清晰，执行效率高，缺点是switch不可以判断区间


	system("pause");
	return 0;
}
