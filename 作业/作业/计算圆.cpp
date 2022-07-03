// 作业.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
#define PI 3.14159
#include <iostream>
using namespace std;

int main1()
{
    double r, girth, area;
    cout << "Please input radius:";
    cin >> r;
    girth = 2 * PI * r;
    area = PI * r * r;
    cout << "radius=" << r << endl;
    cout << "girth=" << girth << endl;
    cout << "area=" << area << endl;
    return 0;
}

