#include <iostream>
using namespace std;
#include <ctime>
#include <math.h>
#define random(a,b) (rand()%(b-a)+a)
void WD();
void ZL();
void SS();
void WNUM();
void JS();
void CSZ();
void SJ();
int PD(float a, float b, float c);
float MJ(float a, float b, float c);
void n();
int nn(int n);
void ns();
void zh(int, char);
void nmnm();
int SUM(int);

int main()
{
    int choice = 0;
    cout << "1-->温度转换2-->后四位置一3-->函数计算4-->计算数字5-->算1到100相加6-->猜数字7-->计算三角形面积8-->算n9-->分割10-->计算："; cin >> choice;  cout << endl;
    if (choice==1)
    {
        WD();
    }
    if (choice==2)
    {
        ZL();
    }
    if (choice==3)
    {
        SS();
    }
    if (choice==4)
    {
        WNUM();
    }
    if (choice == 5)
    {
        JS();
    }
    if (choice==6)
    {
        CSZ();
    }
    if (choice==7)
    {
        SJ();
    }
    if (choice==8)
    {
        n();
    }
    if (choice==9)
    {
        ns();
    }
    if (choice==10)
    {
        nmnm();
    }
}

void WD()
{
    //编程输出华氏温度
    int TempStr, F;
    cout << "请输入一摄氏温度:";
    cin >> TempStr;
    F = 1.8 * TempStr + 32;
    cout << "转换成的华氏温度是:" << F << " F";
}

void ZL()
{
    int num = 0;
    cout << "输入一个大于1000的整型数：";
    cin >> num; cout << endl;
    num = (num / 10000) * 10000 + 1111;
    cout << num;
}

void SS()
{
    while (true)
    {
        float x, y;
        cout << "输入x的值，将计算出y的值";
        cin >> x;
        cout << endl;
        if (x <= 0)
        {
            y = x;
            cout << "y=" << y << endl;
        }
        else if (x >= 1 && x < 10)
        {
            y = 5 * x - 10;
            cout << "y=" << y << endl;
        }
        else if (x >= 10)
        {
            y = 10 * x - 20;
            cout << "y=" << y << endl;
        }
    }
}

void WNUM()
{
    while (true)
    {
        int num, ct = 0, temp, str[5], n;
        cout << "输入一个不大于五位的整数：";
        cin >> num;
        cout << endl;
        while (num != 0)
        {
            temp = num;
            num /= 10;
            cout << "第" << ct + 1 << "位数字：" << (n = temp % 10) << endl;
            str[ct] = n;
            ++ct;
        }
        cout << "一共有" << ct << "位数" << endl;
        cout << "逆序输出：";
        for (int i = 0; i < ct; i++)
        {
            cout << str[i];
        }
        cout << endl;
    }
}

void JS()
{
    int num=1,sum=0;
    cout << "用while" << endl;
    while (num<=100)
    {
        sum += num;
        ++num;
    }
    cout << "计算得" << sum << endl;
    num = 1, sum = 0;
    cout << "用dowhile" << endl;
    do
    {
        sum += num;
        ++num;
    } while (num<=100);
    cout << "计算得" << sum << endl;
    num = 1, sum = 0;
    cout << "用for" << endl;
    for (int num = 0; num <= 100; num++)
    {
        sum += num;
    }
    cout<< "计算得" << sum << endl;
}

void CSZ()
{
    int tz = 1;
    while (tz!=0)
    {
        int num=0, your_num, ct = 1, result = false;
        srand((int)time(0));
        num = random(1, 2000);
        cout << "已生成1到2000的随机数" << endl;
        while (result == false )
        {
            cout << "第" << ct << "次猜测：";
            cin >> your_num;
            cout << endl;
            ++ct;
            if (your_num == num)
            {
                cout << "恭喜你猜对了" << endl;
                result = true;
                break;
            }
            else if (ct > 10)
            {
                ct = 1;
                cout << "你猜测的次数大于10次，你失败了，如果要进行下一轮猜测，请输入1，否则输入0：" << endl;
                cin >> tz;
            }
            else if (your_num > num)
            {
                cout << "你猜测的数字比较大,请重新输入" << endl;
            }
            else
            {
                cout << "你猜测的数字比较小,请重新输入" << endl;
            }
            
        }
        if (result==true)
        {
            ct = 1;
            cout << "如果要进行下一轮猜测，请输入1，否则输入0：" << endl;
            cin >> tz;
        }
    }
}

void SJ()
{
    float a, b, c;
    cout << "请输入三角形的三边abc的长度，用空格隔开：";
    cin >> a >> b >> c;
    cout << endl;
    if (PD(a, b, c))
    {
        cout << "三角形的面积为：" << MJ(a, b, c);
    }
    else
    {
        cout << "错误：不能构成三角形!" << endl;
    }
}

int PD(float a, float b, float c)
{
    if (a+b>c && a+c>b && b+c>a)
    {
        return true;
    }
    else
    {
        return false;
    }
}

float MJ(float a, float b, float c)
{
    float s, area;
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    return area;
}

void n()
{
    int n = 2;
    cout << "当n=2时，结果为：" << nn(n) << endl;
    cout << "当n=1时，结果为：" << nn(n=1) << endl;
    cout << "当n=3时，结果为：" << nn(n=3) << endl;
}

int nn(int n)
{
    int sum=0;
    for (int i = 0; i < 10; i++)
    {
        sum += pow(n, i);
    }
    return sum;
}

void ns()
{
    int num;
    char n;
    cout << "请输入一个整数，和一个用来分割的字符：";
    cin >> num >> n;
    cout << endl;
    zh(num, n);
}

void zh(int num, char n)
{
    if (num > 10) {
        zh(num / 10,n);
        cout << n << num % 10;
    }
    else 
        cout << num;    
}

void nmnm()
{
    while (true)
    {
        int n, m, result;
        cout << "输入n,m：";
        cin >> n >> m;
        cout << endl;
        if (n < m)
        {
            cout << "输入错误" << endl;
        }
        result = SUM(n) / (SUM((n - m)) * SUM(m));
        cout << "结果为：" << result << endl;

    }
}

int SUM(int n)
{
    int sum = 1;
    for (int i = n; i > 1; i--)
    {
        sum *= i;
    }
    return sum;
}