#pragma once

class Undergraduate :public Stuent
{
public:
    Undergraduate(){};
    Undergraduate(int id, string name, string gender, string major, string grade, double english, double math, double PE);
    virtual void out();
    virtual void in();
private:
    double english, math, PE;
};