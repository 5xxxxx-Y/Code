#include"people.h"
#include"student.h"
#include"GraduateStudent.h"
#include"manage.h"
#include<iomanip>

GraduateStudent::GraduateStudent(int id, string name, string gender, string major, string grade, string researchField)
{
    this->ID = id;
    this->name = name;
    this->gender = gender;
    this->major = major;
    this->grade = grade;
    this->researchField = researchField;
}
void GraduateStudent::out()
{
    cout <<setw(18) << "GraduateStudent  " << setw(8) << "ID£º" << this->ID << setw(12) << "name£º" <<setw(4)<< this->name << setw(12) << "gender£º" << this->gender << setw(12) << "major£º" <<setw(8)<< this->major << setw(12) << "grade£º" << this->grade << setw(18) << "researchField£º" << this->researchField;
}
void GraduateStudent::in()
{
    cout << "ID£º" << manage::AllPeople << endl;
    cout << "name£º"; cin >> this->name; cout << endl;
    cout << "gender£º"; cin >> this->gender; cout << endl;
    cout << "major£º"; cin >> this->major; cout << endl;
    cout << "grade£º"; cin >> this->grade; cout << endl;
    cout << "researchField£º"; cin >> this->researchField; cout << endl;
}