#pragma once
#include"student.h"

class GraduateStudent :public Stuent
{
public:
    GraduateStudent(){};
    GraduateStudent(int id, string name, string gender, string major, string grade, string researchField);
    virtual void out();
    virtual void in();
private:
    string researchField;
};