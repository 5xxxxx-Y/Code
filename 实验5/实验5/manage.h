#pragma once
#include"manage.h"
#include"people.h"
#include"GraduateStudent.h"
#include"PartTimePhD.h"
#include"PhDStudent.h"
#include"student.h"
#include"teacher.h"
#include"Undergraduate.h"

class manage
{
public:
    People* p[100];
    static int AllPeople;
    manage();
    void showMenu();
    void Search();
    void Show();
    void Add();
    void Delete();
    void Modify();
    friend ostream& operator<<(ostream& out, const People& p);
    friend istream& operator>>(istream& in, const People& p);
}; 