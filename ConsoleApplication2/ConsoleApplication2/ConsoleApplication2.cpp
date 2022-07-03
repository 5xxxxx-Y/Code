#include <iostream>
using namespace std;
void ZH();

class Box 
{
public:
    double length, width, height;
    Box()
    {
        length = 0;
        width = 0;
        height = 0;
        cout << "长宽高为：" << length << "," << width << "," << height << endl;
    }
    void setBox(double len, double wide, double hei)
    {
        length = len;
        width = wide;
        height = hei;
        cout<<"当前长宽高为" << length << "," << width << "," << height << endl;
    }
    double volume()
    {
        double v;
        v = length * width * height;
        return v;
    }
};

int main()
{
    /*1.定义一个Box(盒子)类，在该类定义中包括以下数据成员和成员函数。
        数据成员:length(长)、width(宽)和height(高)。
        成员函数 :
            构造函数Box，设置盒子的长、宽和高三个初始数据:
            成员函数setBox对数据成员置值 :
            成员函数volume计算盒子的体积。
        在main 函数中，要求创建 Box对象，输入长、宽、高，输出盒子的体积。
       2.以二进制形式输入double型变量 */
    int choice = 0;
    cout << "1-->类，2-->以二进制输出浮点数："; cin >> choice; cout << endl;
    if (choice == 1)
    {
        double len, wide, hei;
        Box box1;
        cout << "请输入长宽高，用空格隔开："; cin >> len >> wide >> hei; cout << endl;
        box1.setBox(len, wide, hei);
        cout << "此长方体的体积为：" << box1.volume() << endl;
    }
    if (choice==2)
    {
        ZH();
    }


}

void ZH() 
{
    double num;
    int* ct_1, * ct_2;
    cout << "输入一个数字作为double型变量："; cin >> num; cout << endl;
    ct_1 = (int*)&num;
    ct_2 = ct_1+1;
    unsigned bitMask = 1 << 31;
    for (int i = 1; i < 32; i++)
    {
        cout << (*ct_2 & bitMask ? '1' : '0');	//输出value的最高位
        bitMask >>= 1;			//value左移1位
        if (i % 8 == 0)   cout << ' ';
    }
    for (int i = 1; i < 32; i++)
    {
        cout << (*ct_1 & bitMask ? '1' : '0');	//输出value的最高位
        bitMask >>= 1;			//value左移1位
        if (i % 8 == 0)   cout << ' ';
    }
    
    cout << endl;
}

