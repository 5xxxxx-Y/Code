#include <iostream>
#include <iomanip>
using namespace std;
#include<ctime>
#define random(a,b) (rand()%(b-a)+a)


/*
编写一个抽象图形类Graph，有两个纯虚函数：求面积Area和求周长Girth，
从Graph类派生圆类Circle、三角形类Triangle、长方形类Rectangle、多边形类Polygon，
从长方形类派生正方形类Square。
在main函数测试运行代码：（1）随机100个上述图形对象；（2）存储在同一个数组或线性表中；（3）显示每个图形的周长、面积及对象类别。
*/

class Graph
{
public:
    virtual string TX() = 0;
    virtual long double Area() = 0;
    virtual long double Girth() = 0;
};

//圆类Circle
class Circle :public Graph
{
private:
    long double r;
public:
    Circle(int r)
    {
        this->r = r;
    }
    virtual string TX()
    {
        return "Circle";
    }
    virtual long double Area()
    {
        return 3.14 * r * r;
    }
    virtual long double Girth()
    {
        return 2 * 3.14 * r;
    }
};

//三角形类Triangle
class Triangle :public Graph
{
private:
    long double a, b, c,p;
public:
    Triangle(int a, int b, int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
    virtual string TX()
    {
        return "Triangle";
    }
    virtual long double Area()
    {
        p = (a + b + c) / 2; //计算半周长
        return sqrt(p * (p - a) * (p - b) * (p - c));//套用海伦公式，计算面积
    }
    virtual long double Girth()
    {
        return a + b + c;
    }

};

//长方形类Rectangle
class Rectangle :public Graph
{
private:
    long double a, b;
public:
    Rectangle() {};
    Rectangle(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    virtual string TX()
    {
        return "Rectangle";
    }
    virtual long double Area()
    {
        return a * b;
    }
    virtual long double Girth()
    {
        return 2 * (a + b);
    }
};

class point
{
public:
    point()
    {
        x = random(1, 99);
        y = random(1, 99);
    };

    double x, y;
};
//多边形类Polygon
class Polygon :public Graph
{
public:
    Polygon(int len):len(len)
    {
        p = new point[len];
    }
    virtual string TX()
    {
        return "Polygon";
    }
    virtual long double Area()
    {
        int point_num = len;
        if (point_num < 3) 
        { 
            return 0.0; 
        }
        double s = this->p[0].y * (this->p[point_num - 1].x - this->p[1].x);
        for (int i = 1; i < point_num; ++i)
        {
            s += this->p[i].y * (this->p[i - 1].x - this->p[(i + 1) % point_num].x);
        }
        return fabs(s / 2.0);
    }
    virtual long double Girth()
    {
        double leng = 0;
        long npt = len;
        for (int i = 0; i < npt; i++)
        {
            leng += sqrt((p[i].x - p[(i + 1) % npt].x) * (p[i].x - p[(i + 1) % npt].x) + (p[i].y - p[(i + 1) % npt].y) * (p[i].y - p[(i + 1) % npt].y));
        }
        return leng;
    }
private:
    int len;
    point* p;
};

//正方形类Square
class Square :public Rectangle
{
private:
    long double a;
public:
    Square(int a)
    {
        this->a = a;
    }
    virtual string TX()
    {
        return "Square";
    }
    virtual long double Area()
    {
        return a * a;
    }
    virtual long double Girth()
    {
        return 2 * (a + a);
    }
};


int main()
{
    srand(int(time(0)));
    Graph* g[100];
    int choice = 0;
    for (int i = 0; i < 100; i++)
    {
        choice = random(0, 5);
        if (choice==0)
        {
            Circle* C = new Circle(random(1, 99));
            g[i] = C;
        }
        if (choice==1)
        {
            int a = 0, b = 0, c = 0, d = 0, e = 0;
            a = random(1, 99);
            b = random(1, 99);
            e = a + b;
            if (a>b)
            {
                d = a - b;
            }
            if (a < b)
            {
                d = b - a;
            }
            c = random(d, e);
            Triangle* T = new Triangle(a, b, c);
            g[i] = T;
        }
        if (choice==2)
        {
            Rectangle* R = new Rectangle(random(1, 99), random(1, 99));
            g[i] = R;
        }
        if (choice==3)
        {
            Square* S = new Square(random(1, 99));
            g[i] = S;
        }
        if (choice==4)
        {
            Polygon* P = new Polygon(random(1, 9));
            g[i] = P;
        }
    }
    cout << "100个图形已生成完毕" << endl << "输出：" << endl << "   类型          面积       周长" << endl;
    for (int i = 0; i < 100; i++)
    {
        cout << setw(10) << g[i]->TX() << setw(10) << g[i]->Area() << setw(10) << g[i]->Girth() << endl;
    }
    
}
