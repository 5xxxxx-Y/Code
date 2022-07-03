#pragma once
#include<iostream>
using namespace std;

class People
{
public:
    int ID;
    string name, gender;
    virtual void out() = 0;
    virtual void in() = 0;
};










