#include <iostream>
using namespace std;
#include <ctime>
#define random(a,b) (rand()%(b-a)+a)

class Student
{
public:
	Student();
private:
	int Math, English;
};
Student::Student()
{
	Math = random(0, 100);
	English = random(0, 100);
}

class CSSSSStudent :public Student
{
public:
	void Input();
	void Show();
private:
	int Sfdesign;
	double XH;
};
void CSSSSStudent::Input()
{
	Sfdesign = random(0, 100);
	XH = 321061000 + random(1, 51);
}


class AIStudent :public Student
{
public:
	void Input();
	void Show();
private:
	int Deepstu;
	double XH;
};
void AIStudent::Input()
{
	Deepstu = random(0, 100);
	XH = 321062000 + random(1, 51);
}



class CSStudent :public Student
{
public:
	void Input();
	void Show();
private:
	int FG;
	double XH;
};
void CSStudent::Input()
{
	FG = random(0, 100);
	XH = 321064000 + random(1, 51);
}



class NEStudent :public Student
{
public:
	void Input();
	void Show();
private:
	int NEstu;
	double XH;
};
void NEStudent::Input()
{
	NEstu = random(0, 100);
	XH = 321063000 + random(1, 51);
}



class SEStudent :public Student
{
public:
	void Input();
	void Show();
private:
	int SEstu;
	double XH;
};
void SEStudent::Input()
{
	SEstu = random(0, 100);
	XH = 321065000 + random(1, 51);
}






int main()
{
	srand(time(0));
}

