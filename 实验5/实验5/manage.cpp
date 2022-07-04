#include"manage.h"
#include <iostream>


int manage::AllPeople = 0;
manage::manage()
{
    AllPeople = 5;
    Teacher* T = new Teacher(1, "��1", "Ů", "����", 9.9);
    Teacher* P1 = new PartTimePhD(2, "��2", "��", "��ְ��ʿ", 9.9, "�����ư�ȫ");
    Undergraduate* U = new Undergraduate(3, "��", "��", "����", "��һ", 100, 100, 100);
    GraduateStudent* G = new GraduateStudent(4, "��", "��", "����", "��һ", "web��ȫ");
    PhDStudent* P2 = new PhDStudent(5, "��", "��", "����", "��һ", "web��ȫ");
    manage::p[0] = T;
    manage::p[1] = P1;
    manage::p[2] = U;
    manage::p[3] = G;
    manage::p[4] = P2;
}
void manage::showMenu()
{
    cout << endl << endl;
    cout << "��������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������" << endl;
    cout << "�� ��������                                       ��ӭ������Ա����ϵͳ                                   �������� �� " << endl;
    cout << "��������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������" << endl;
    cout << endl;
    cout << "                                            *******0-�˳��������*********" << endl;
    cout << "                                            *******1-������Ա��Ϣ*********" << endl;
    cout << "                                            *******2-��ʾ��Ա��Ϣ*********" << endl;
    cout << "                                            *******3-ɾ����Ա��Ϣ*********" << endl;
    cout << "                                            *******4-�޸���Ա��Ϣ*********" << endl;
    cout << "                                            *******5-������Ա��Ϣ*********" << endl;
    cout << endl << "��������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������" << endl;
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
    cout << "which��1->GraduateStudent  2->PartTimePhD  3->PhDStudent  4->Undergraduate  5->Teacher"; cin >> choice1; cout << endl;
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
    cout << "please input the id��"; cin >> choice2; cout << endl;
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
    cout << "please input the id��"; cin >> choice3; cout << endl;
    (*p[choice3 - 1]).in();
    cout << "Finish!" << endl;
}
void manage::Search()
{
    int choice3;
    cout << "please input the id��"; cin >> choice3; cout << endl;
    cout << *p[choice3 - 1] << endl;
}