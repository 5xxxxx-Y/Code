#pragma once

class Teacher :public People
{
public:
    Teacher() {};
    Teacher(int id, string name, string gender, string degree, double salary);
    virtual void out();
    virtual void in();
    string degree;
    double salary;
};