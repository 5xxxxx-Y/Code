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
    cout <<setw(18) << "GraduateStudent  " << setw(8) << "ID��" << this->ID << setw(12) << "name��" <<setw(4)<< this->name << setw(12) << "gender��" << this->gender << setw(12) << "major��" <<setw(8)<< this->major << setw(12) << "grade��" << this->grade << setw(18) << "researchField��" << this->researchField;
}
void GraduateStudent::in()
{
    cout << "ID��" << manage::AllPeople << endl;
    cout << "name��"; cin >> this->name; cout << endl;
    cout << "gender��"; cin >> this->gender; cout << endl;
    cout << "major��"; cin >> this->major; cout << endl;
    cout << "grade��"; cin >> this->grade; cout << endl;
    cout << "researchField��"; cin >> this->researchField; cout << endl;
}