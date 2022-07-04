#include"people.h"
#include"student.h"
#include"Undergraduate.h"
#include"manage.h"
#include<iomanip>


Undergraduate::Undergraduate(int id, string name, string gender, string major, string grade, double english, double math, double PE)
{
    this->ID = id;
    this->name = name;
    this->gender = gender;
    this->major = major;
    this->grade = grade;
    this->english = english;
    this->math = math;
    this->PE = PE;
}
void Undergraduate::out()
{
    cout << setw(18) << "Undergraduate  " << setw(8) << "ID��" << this->ID << setw(12) << "name��" <<setw(4)<< this->name << setw(12) << "gender��" << this->gender << setw(12) << "major��" <<setw(8)<< this->major << setw(12) << "grade��" << this->grade << setw(12) << "english��" << this->english << setw(12) << "math��" << this->math << setw(12) << "PE��" << this->PE;
}
void Undergraduate::in()
{
    cout << "ID��" << manage::AllPeople << endl;
    cout << "name��"; cin >> this->name; cout << endl;
    cout << "gender��"; cin >> this->gender; cout << endl;
    cout << "major��"; cin >> this->major; cout << endl;
    cout << "grade��"; cin >> this->grade; cout << endl;
    cout << "english��"; cin >> this->english; cout << endl;
    cout << "math��"; cin >> this->math; cout << endl;
    cout << "PE��"; cin >> this->PE; cout << endl;
}