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
    cout << setw(18) << "Undergraduate  " << setw(8) << "ID£º" << this->ID << setw(12) << "name£º" <<setw(4)<< this->name << setw(12) << "gender£º" << this->gender << setw(12) << "major£º" <<setw(8)<< this->major << setw(12) << "grade£º" << this->grade << setw(12) << "english£º" << this->english << setw(12) << "math£º" << this->math << setw(12) << "PE£º" << this->PE;
}
void Undergraduate::in()
{
    cout << "ID£º" << manage::AllPeople << endl;
    cout << "name£º"; cin >> this->name; cout << endl;
    cout << "gender£º"; cin >> this->gender; cout << endl;
    cout << "major£º"; cin >> this->major; cout << endl;
    cout << "grade£º"; cin >> this->grade; cout << endl;
    cout << "english£º"; cin >> this->english; cout << endl;
    cout << "math£º"; cin >> this->math; cout << endl;
    cout << "PE£º"; cin >> this->PE; cout << endl;
}