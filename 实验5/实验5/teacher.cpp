#include"people.h"
#include"teacher.h"
#include"manage.h"
#include<iomanip>

Teacher::Teacher(int id, string name, string gender, string degree, double salary)
{
    this->ID = id;
    this->name = name;
    this->gender = gender;
    this->degree = degree;
    this->salary = salary;
}
void Teacher::out()
{
    cout << setw(18) << "Teacher  " << setw(8) << "ID£º" << this->ID << setw(12) << "name£º" <<setw(5)<< this->name << setw(12) << "gender£º" << this->gender << setw(12) << "degree£º" << setw(8)<<this->degree << setw(12) << "salary£º" << this->salary;
}
void Teacher::in()
{
    this->ID = manage::AllPeople;
    cout << "ID£º" << this->ID << endl;
    cout << "name£º"; cin >> this->name; cout << endl;
    cout << "gender£º"; cin >> this->gender; cout << endl;
    cout << "degree£º"; cin >> this->degree; cout << endl;
    cout << "salary£º"; cin >> this->salary; cout << endl;
}