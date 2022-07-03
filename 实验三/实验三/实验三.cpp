#include <iostream>
#include <iomanip>
using namespace std;
int temp = 0;
//class Score
//{
//public:
//	Score();
//	void InputScore();
//	void ShowScore();
//
//private:
//	int mNum; 
//	double mMath, mEnglish, mProgramming,PJ;
//};
//
//Score::Score()
//{
//	mNum = 0;
//	mMath = 0;
//	mEnglish = 0;
//	mProgramming = 0;
//	PJ = 0;
//}
//void Score::InputScore()
//{
//	cout << "请输入该学生的学号："; cin >> mNum; cout << endl;
//	cout << "请输入该学生的高数成绩："; cin >> mMath; cout << endl;
//	cout << "请输入该学生的英语成绩："; cin >> mEnglish; cout << endl;
//	cout << "请输入该学生的程序设计成绩："; cin >> mProgramming; cout << endl;
//	PJ = (mMath + mEnglish + mProgramming) / 3;
//	cout << "平均成绩为：" << PJ << endl << endl;
//}
//void Score::ShowScore()
//{
//	cout << setw(10) << "学号：" << mNum << setw(13) << "高数成绩：" << mMath << setw(13) << "英语成绩：" << mEnglish << setw(16) << "程序设计成绩：" << mProgramming << setw(16) << "平均成绩：" << PJ << endl;
//}
//
//
//int main()
//{
//	int n, ct;
//	cout << "请输入班内有多少名学生："; cin >> n; cout << endl;
//	Score* s = new Score[n];
//	for (int i = 0; i < n; i++)
//	{
//		s[i].InputScore();
//	}
//	cout << endl << "输入1后输出成绩单:"; cin >> ct; cout << endl;
//	if (ct==1)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			s[i].ShowScore();
//		}
//	}
//
//}

/*建立一个复数类Complex，其私有数据成员mX和mY表示复数的实部和虚部，
构造函数Complex用于对复数的实部和虚部初始化，友员函数Add,Sub,Mul和Div分别用于进行复数的加、减、乘和除法运算，
函数Show用于显示运算结果。
在主函数中，实例化两个复数，并输入一个运算符，按运算符选择相应的友员函数进行复数运算，然后输出运算结果。*/

//class Complex
//{
//public:
//	Complex();
//	Complex(double mx, double my);
//	friend Complex Add(const Complex& c1, const Complex& c2);
//	friend Complex Sub(const Complex& c1, const Complex& c2);
//	friend Complex Mul(const Complex& c1, const Complex& c2);
//	friend Complex Div(const Complex& c1, const Complex& c2);
//	void show();
//private:
//	double mX, mY;
//};
//
//Complex::Complex()
//{
//	mX = 0;
//	mY = 0;
//}
//Complex::Complex(double mx, double my)
//{
//	this->mX = mx;
//	this->mY = my;
//}
//Complex Add(const Complex& c1, const Complex& c2)
//{
//	Complex c3;
//	c3.mX = c1.mX + c2.mX;
//	c3.mY = c1.mY + c2.mY;
//	return c3;
//}
//Complex Sub(const Complex& c1, const Complex& c2)
//{
//	Complex c3;
//	c3.mX = c1.mX - c2.mX;
//	c3.mY = c1.mY - c2.mY;
//	return c3;
//}
//Complex Mul(const Complex& c1, const Complex& c2)
//{
//	Complex c3;
//	c3.mX = (c1.mX * c2.mX)-(c1.mY * c2.mY);
//	c3.mY = (c1.mY * c2.mX) + (c1.mX * c2.mY);
//	return c3;
//}
//Complex Div(const Complex& c1, const Complex& c2)
//{
//	Complex c3;
//	c3.mX = ((c1.mX * c2.mX) + (c1.mY * c2.mY)) / (c2.mX * c2.mX + c2.mY * c2.mY);
//	c3.mY = (c1.mY * c2.mX - c1.mX * c2.mY) / (c2.mX * c2.mX + c2.mY * c2.mY);
//	return c3;
//}
//void Complex::show()
//{
//	cout << "该复数为：" << mX << "+" << "(" << mY << ")" << "i" << endl;
//}
//
//int main()
//{
//	char fh;
//	double mx1, my1, mx2, my2;
//	cout << "请输入第一个复数实部和虚部，用空格隔开："; cin >> mx1 >> my1; cout << endl;
//	Complex c1(mx1, my1);
//	cout << "请输入第二个复数实部和虚部，用空格隔开："; cin >> mx2 >> my2; cout << endl;
//	Complex c2(mx2, my2);
//	while (1)
//	{
//		cout << "请输入要进行的运算（加+,减-,乘*,除/）："; cin >> fh; cout << endl;
//		switch (fh)
//		{
//		case '+':Add(c1, c2).show(); break;
//		case '-':Sub(c1, c2).show(); break;
//		case '*':Mul(c1, c2).show(); break;
//		case '/':Div(c1, c2).show(); break;
//		default:
//			break;
//		}
//	}
//	
//}

class Matrix
{
public:
    int nnn[3][3]={};
    Matrix() {};
    Matrix(const Matrix& m0)
    {
        int (*m)[3] = new int[3][3];
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                m[i][j] = m0.nnn[i][j];
            }
            
        }
    }
    friend istream& operator>>(istream& in, Matrix& m);
    friend ostream& operator<<(ostream& ou, const Matrix& m);
    friend Matrix& operator+(const Matrix& m1, const Matrix& m2);
private:
    int m[3][3], size;
};
istream& operator>>(istream& in, Matrix& m)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            in >> m.nnn[i][j];
        }
    }
    return in;
}
ostream& operator<<(ostream& ou, const Matrix& m)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            ou << m.nnn[i][j] << " ";
        }
        ou << endl;
    }
    return ou;
}

Matrix& operator+(const Matrix& m1, const Matrix& m2)
{
    Matrix m3(m1);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            m3.nnn[i][j] = m1.nnn[i][j] + m2.nnn[i][j];
        }
    }
    return m3;
}

int main()
{
    Matrix a, b,c;
    cin >> a; cout << endl;
    cin >> b;
    c = a + b;
    cout << "m1:" << endl << a << endl << "m2:" << endl << b << endl;
    cout << "m3:" << endl << c;
}

