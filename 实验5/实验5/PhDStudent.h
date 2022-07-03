#pragma once
#include"student.h"

class PhDStudent :public Stuent
{
public:
    PhDStudent(){};
    PhDStudent(int id, string name, string gender, string major, string grade, string researchField);
    virtual void out();
    virtual void in();
    string researchField;
};