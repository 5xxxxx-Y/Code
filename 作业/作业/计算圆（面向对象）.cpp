// 作业.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
#define PI 3.14159
#include <iostream>
using namespace std;
class Circle
{
	double radius;
public:
	void Set_Radius(double r)
	{
		radius = r;
	}
	double Get_Radius()
	{
		return radius;
	}
	double Get_Girth()
	{
		return 2 * PI * radius;
	}
	double Get_Area()
	{
		return PI * radius * radius;
	};
};

int main3()
{
	Circle A, B;
	double r;
	cout << "please input the radius:";
	cin >> r;
	A.Set_Radius(r);
	cout << "radius=" << A.Get_Radius() << endl;
	cout << "girth=" << A.Get_Girth() << endl;
	cout << "area=" << A.Get_Area() << endl;
    return 0;
}

