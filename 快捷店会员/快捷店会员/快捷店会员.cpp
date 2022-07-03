#include <iostream>
#include<iomanip>
#include<ctime>
#define random(a,b) (rand()%(b-a)+a)
using namespace std;
class member;
class RMB;
class memberCar;

/*
(1)定义人民币RMB类，实现人民币的基本运算和显示。
(2)定义会员member类，表示会员的基本信息，包括:编号(按建立会员的顺序自动生成)，姓名，密码，电话。提供输入、输出信息等功能。
(3)由RMB类和member类共同派生一个会员卡memberCar类，提供新建会员、充值、消费和查询余额等功能。
(4)main函数定义一个memberCar类数组或链表，保存会员卡，模拟一个快捷店的会员卡管理功能，主要包括:
① 新建会员;
② 已有会员充值;
③ 已有会员消费(凭密码，不能透支);
④输出快捷店当前会员数，营业额(收、支情况)。
*/

class member
{
public:
	member()
	{
		this->id = num;
		num += 1;
	};
	void in();
	void ou();
	static int num,allnum;
	int id;
	string name, passwd, phone;
};
int member::num = 0;
int member::allnum = 0;
void member::in()
{
	cout << "请输入您的姓名："; cin >> name; cout << endl;
	cout << "请输入您的密码："; cin >> passwd; cout << endl;
	cout << "请输入您的电话："; cin >> phone; cout << endl;
	this->name = name;
	this->passwd = passwd;
	this->phone = phone;
	cout << "已完成会员信息的录入！您的编号为："<<this->id << endl;
	member::allnum += 1;
}
void member::ou()
{
	cout << "编号：" << id << " 姓名：" << name << " 密码：" << passwd << " 电话：" << phone;
}


class RMB
{
public:
	RMB();
	void Show();
	void Input(double rmb);
	RMB& operator+(double rmb);
	RMB& operator-(double rmb);
	int yuan = (int)all, jiao = ((int)(all * 10)) % 10, fen = ((int)(all * 100)) % 10, * r;
	double all = yuan + (((double)jiao) / 10) + (((double)fen) / 100);
};

RMB::RMB()
{
	yuan = 0;
	jiao = 0;
	fen = 0;
}
void RMB::Input(double rmb)
{
	yuan = (int)rmb;
	jiao = ((int)(rmb * 10)) % 10;
	fen = ((int)(rmb * 100)) % 10;
}
void RMB::Show()
{
	cout << " 余额为：" << yuan << "元 " << jiao << "角 " << fen << "分" << endl;
}
RMB& RMB::operator+(double rmb)
{
	yuan += (int)rmb;
	jiao += ((int)(rmb * 10)) % 10;
	fen += ((int)(rmb * 100)) % 10;
	return *this;
}
RMB& RMB::operator-(double rmb)
{
	yuan -= (int)rmb;
	jiao -= ((int)(rmb * 10)) % 10;
	fen -= ((int)(rmb * 100)) % 10;
	return *this;
}


class memberCar :public member, public RMB
{
public:
	void new_vip();
	void cost(int id);
	void add(int id);
	int show_ou();
	int PD();
	double rmb;
	static int allnum;
	static double ins, out;
};
int memberCar::allnum = 0;
double memberCar::ins = 0;
double memberCar::out = 0;
void memberCar::new_vip()
{
	in();
	cout << endl << "请输入您的初始金额："; cin >> rmb; cout << endl;
	Input(rmb);
}
void memberCar::cost(int id)
{
	if (PD() == 1)
	{
		cout << "请输入要消费的金额："; cin >> rmb; cout << endl;
		operator-(rmb);
		memberCar::ins += rmb;
	}	
}
void memberCar::add(int id)
{
	if (PD()==1)
	{
		cout << "请输入要充值的金额："; cin >> rmb; cout << endl;
		operator+(rmb);
	}
}
int memberCar::show_ou()
{
	cout << "进入管理员界面" << endl;
	return PD();
}
int memberCar::PD()
{
	string n, pa;
	int ct = 0;
	cout << "请输入您的姓名："; cin >> n; cout << endl;
	if (n == this->name)
	{
		cout << "请输入您的密码："; cin >> pa; cout << endl;
		if (pa == this->passwd)
		{
			cout << "密码正确" << endl;
			ct = 1;
		}
		else
		{
			cout << "密码错误，请重新输入："; cin >> pa; cout << endl;
			if (pa == this->passwd)
			{
				cout << "密码正确" << endl;
				ct = 1;
			}
			else
			{
				cout << "密码错误，退出！" << endl;
				ct = 0;
			}
		}
	}
	else
	{
		cout << "姓名错误！请重新输入："; cin >> n; cout << endl;
		if (n==this->name)
		{
			cout << "请输入您的密码："; cin >> pa; cout << endl;
			if (pa == this->passwd)
			{
				cout << "密码正确" << endl;
				ct = 1;
			}
			else
			{
				cout << "密码错误，请重新输入："; cin >> pa; cout << endl;
				if (pa == this->passwd)
				{
					cout << "密码正确" << endl;
					ct = 1;
				}
				else
				{
					cout << "密码错误，退出！" << endl;
					ct = 0;
				}
			}
		}
		else
		{
			cout << "姓名错误！退出！" << endl;
			ct = 0;
		}
	}
	return ct;
}

int main()
{
	srand(int(time(0)));
	int choice=0, your_id=0,tt=0;
	memberCar m[100];
	m[0].name = "admin";
	m[0].passwd = "admin";
	m[0].phone = "111";
	m[1].name = "伍xx";
	m[2].name = "程xx";
	m[1].passwd = "123";
	m[2].passwd = "123";
	m[1].phone = "123";
	m[2].phone = "123";
	member::allnum = 3;
	for (int i = 0; i < member::allnum; i++)
	{
		m[i].Input(random(0, 99999));
	}
	while (tt=choice>=0)
	{
		cout << endl << endl << "0：输出快捷店当前会员，营业额(收、支情况);1：新建会员;2：已有会员消费(凭密码，不能透支);3：已有会员充值;。" << endl;
		cout << "输入操作："; cin >> choice; cout << endl;
		switch (choice)
		{
		case 0:
			if (m[0].show_ou() == 1)
			{
				for (int i = 0; i < member::allnum; i++)
				{
					m[i].ou();
					m[i].Show();
				}
			}
			break;
		case 1:
			m[member::allnum].new_vip(); break;
		case 2:
			cout << "请输入您的编号："; cin >> your_id; cout << endl;
			m[your_id].cost(your_id);
			m[your_id].Show();
			break;
		case 3:
			cout << "请输入您的编号："; cin >> your_id; cout << endl;
			m[your_id].add(your_id);
			m[your_id].Show();
			break;
		default:
			break;
		}
	}
}