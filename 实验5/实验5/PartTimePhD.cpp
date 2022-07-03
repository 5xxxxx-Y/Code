#include"people.h"
#include"teacher.h"
#include"PartTimePhD.h"
#include"manage.h"
#include<iomanip>



PartTimePhD::PartTimePhD(int id, string name, string gender, string degree, double salary, string researchField)
{
    this->ID = id;
    this->name = name;
    this->gender = gender;
    this->degree = degree;
    this->salary = salary;
    this->researchField = researchField;
}
void PartTimePhD::out()
{
    cout << setw(18) << "PartTimePhD  " << setw(8) << "ID£º" << this->ID << setw(12) << "name£º" <<setw(5)<< this->name << setw(12) << "gender£º" << this->gender << setw(12) << "degree£º" << setw(8)<<this->degree << setw(12) << "salary£º" << this->salary << setw(18) << "researchField£º" << this->researchField;
}
void PartTimePhD::in()
{
    cout << "ID£º" << manage::AllPeople << endl;
    cout << "name£º"; cin >> this->name; cout << endl;
    cout << "gender£º"; cin >> this->gender; cout << endl;
    cout << "degree£º"; cin >> this->degree; cout << endl;
    cout << "salary£º"; cin >> this->salary; cout << endl;
    cout << "researchField£º"; cin >> this->researchField; cout << endl;
}