#include <iostream>
#include <iomanip>
using namespace std;
class date;

class date
{
private:int day, month, year;
public:
    date();
    date(const date &a);
    void setdate(int d, int m, int y);
    void printdate();
};

date::date() 
{
    day = 21;
    month = 6;
    year = 2021;
    cout << "调用构造函数,初始值为：" << setfill('0') << setw(2) << day << "/" << setfill('0') << setw(2) << month << "/" << year << endl;
}

date::date(const date& predate)
{
    cout << "调用的拷贝构造函数" << endl;
    day = predate.day;
    month = predate.month;
    year = predate.year;
}

void date::setdate(int d, int m, int y)
{
    day = d;
    month = m;
    year = y;
}

void date::printdate()
{
    cout << "当前日期为：";
    cout << setfill('0') << setw(2) << day << "/" << setfill('0') << setw(2) << month << "/" << year << endl;
}



int main()
{/*
    int d, m, y;
    date date1;
    cout << "输入day，month，year:"; cin >> d >> m >> y; cout << endl;
    date1.setdate(d, m, y);
    date1.printdate();
    date date2 = date1;
    date2.printdate();*/
    int i = 1, j = 2;
    cout<<i++ + j;

}


