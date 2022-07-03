#include <iostream>
using namespace std;

class date
{
private:int day, month, year;
public:
    date();
    void setdate(int d, int m, int y)
    {
        day = d;
        month = m;
        year = y;
    }
    void printdate(int day, int month, int year)
    {
        cout << day << "/" << month << "/" << year << endl;
    }
};

int main()
{
    date date1;
    date1.setdate(5, 5, 2022);

}

