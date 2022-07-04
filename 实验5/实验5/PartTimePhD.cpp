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
    cout << setw(18) << "PartTimePhD  " << setw(8) << "ID��" << this->ID << setw(12) << "name��" <<setw(5)<< this->name << setw(12) << "gender��" << this->gender << setw(12) << "degree��" << setw(8)<<this->degree << setw(12) << "salary��" << this->salary << setw(18) << "researchField��" << this->researchField;
}
void PartTimePhD::in()
{
    cout << "ID��" << manage::AllPeople << endl;
    cout << "name��"; cin >> this->name; cout << endl;
    cout << "gender��"; cin >> this->gender; cout << endl;
    cout << "degree��"; cin >> this->degree; cout << endl;
    cout << "salary��"; cin >> this->salary; cout << endl;
    cout << "researchField��"; cin >> this->researchField; cout << endl;
}