#include"manage.h"
#include <iostream>


int manage::AllPeople = 0;
manage::manage()
{
    AllPeople = 5;
    Teacher* T = new Teacher(1, "云1", "女", "教授", 9.9);
    Teacher* P1 = new PartTimePhD(2, "云2", "男", "兼职博士", 9.9, "二进制安全");
    Undergraduate* U = new Undergraduate(3, "龙", "男", "网安", "大一", 100, 100, 100);
    GraduateStudent* G = new GraduateStudent(4, "机", "男", "网安", "大一", "web安全");
    PhDStudent* P2 = new PhDStudent(5, "曦", "男", "网安", "大一", "web安全");
    manage::p[0] = T;
    manage::p[1] = P1;
    manage::p[2] = U;
    manage::p[3] = G;
    manage::p[4] = P2;
}
void manage::showMenu()
{
    cout << endl << endl;
    cout << "┌──────────────────────────────────────────────────────────────────────────────────────────────────────────────┐" << endl;
    cout << "│ ★★★★★★★                                       欢迎进入人员管理系统                                   ★★★★★★★ │ " << endl;
    cout << "└──────────────────────────────────────────────────────────────────────────────────────────────────────────────┘" << endl;
    cout << endl;
    cout << "                                            *******0-退出管理程序*********" << endl;
    cout << "                                            *******1-增加人员信息*********" << endl;
    cout << "                                            *******2-显示人员信息*********" << endl;
    cout << "                                            *******3-删除人员信息*********" << endl;
    cout << "                                            *******4-修改人员信息*********" << endl;
    cout << "                                            *******5-查找人员信息*********" << endl;
    cout << endl << "────────────────────────────────────────────────────────────────────────────────────────────────────────────────" << endl;
}

ostream& operator<<(ostream& out, People& p)
{
    p.out();
    return out;
}
istream& operator>>(istream& in, People& p)
{
    p.in();
    return in;
}

void manage::Add()
{
    manage::AllPeople += 1;
    int choice1 = 0;
    cout << "which：1->GraduateStudent  2->PartTimePhD  3->PhDStudent  4->Undergraduate  5->Teacher"; cin >> choice1; cout << endl;
    if (choice1==1)
    {
        GraduateStudent* G = new GraduateStudent();
        
        p[manage::AllPeople - 1] = G;
        cin >> *p[manage::AllPeople - 1];
    }
        
    if (choice1 == 2)
    {
        PartTimePhD* P1 = new PartTimePhD();
        
        p[manage::AllPeople - 1] = P1;
        cin >> *p[manage::AllPeople - 1];
    }
    if (choice1 == 3)
    {
        PhDStudent* P2 = new PhDStudent();
        p[manage::AllPeople - 1] = P2;
        cin >> *p[manage::AllPeople - 1];
    }
    if (choice1 == 4)
    {
        Undergraduate* U = new Undergraduate();
        p[manage::AllPeople - 1] = U;
        cin >> *p[manage::AllPeople - 1];
    }
    if (choice1 == 5)
    {
        Teacher* T = new Teacher();
        p[manage::AllPeople - 1] = T;
        cin >> *p[manage::AllPeople - 1];
    }
}
void manage::Delete()
{
    int choice2 = 0;
    cout << "please input the id："; cin >> choice2; cout << endl;
    for (int i = choice2; i < manage::AllPeople-1; i++)
    {
        (*p[i + 1]).ID -= 1;
        p[i] = p[i + 1];
    }
    manage::AllPeople -= 1;
    cout << "Finish!" << endl;
}
void manage::Show()
{
    for (int i = 0; i < manage::AllPeople; i++)
    {
        cout << *p[i] << endl;
    }
}
void manage::Modify()
{
    int choice3 = 0;
    cout << "please input the id："; cin >> choice3; cout << endl;
    (*p[choice3 - 1]).in();
    cout << "Finish!" << endl;
}
void manage::Search()
{
    int choice3;
    cout << "please input the id："; cin >> choice3; cout << endl;
    cout << *p[choice3 - 1] << endl;
}