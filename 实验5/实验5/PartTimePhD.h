#pragma once
#include"teacher.h"

class PartTimePhD :public Teacher
{
public:
    PartTimePhD(){};
    PartTimePhD(int id, string name, string gender, string degree, double salary, string researchField);
    virtual void out();
    virtual void in();
    string researchField;
};