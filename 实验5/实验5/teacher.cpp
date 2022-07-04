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
    cout << setw(18) << "Teacher  " << setw(8) << "ID��" << this->ID << setw(12) << "name��" <<setw(5)<< this->name << setw(12) << "gender��" << this->gender << setw(12) << "degree��" << setw(8)<<this->degree << setw(12) << "salary��" << this->salary;
}
void Teacher::in()
{
    this->ID = manage::AllPeople;
    cout << "ID��" << this->ID << endl;
    cout << "name��"; cin >> this->name; cout << endl;
    cout << "gender��"; cin >> this->gender; cout << endl;
    cout << "degree��"; cin >> this->degree; cout << endl;
    cout << "salary��"; cin >> this->salary; cout << endl;
}