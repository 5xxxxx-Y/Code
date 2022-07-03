#include <iostream>
#include <string>
#include<string.h>
#include <iomanip>
using namespace std;
class Library;
class book;
int ct = 1;

//书本类
class book
{
private: 
    //书的基本属性
    string bookname; 
    string author;
    double bookprice;
    int booknum;
public:
    book();
    book(string name, string author, double bookprice, int booknum);
    //get
    string get_name()
    {
        return bookname;
    }
    string get_author()
    {
        return author;
    }
    double get_price()
    {
        return bookprice;
    }
    int get_num()
    {
        return booknum;
    }
    //set
    void set_name(string bookname);
    void set_author(string author);
    void set_price(double bookprice);
    void set_num(int booknum);
};

book::book()
{
    bookname = "  ";
    booknum = 0;
    author = "  ";
    bookprice = 0;
}

book::book(string bookname,string author,double bookprice,int booknum)
{
    this->bookname = bookname;
    this->author = author;
    this->bookprice = bookprice;
    this->booknum = booknum;
}

void book::set_name(string bookname)
{
    this->bookname = bookname;
}

void book::set_author(string author)
{
    this->author = author;
}

void book::set_price(double price)
{
    this->bookprice = bookprice;
}

void book::set_num(int booknum)
{
    this->booknum = booknum;
}


//书库类
class Library
{
private:
    book book1[1000];
    int allnum = 0;
public:
    Library();
    void Show_Book();
    void Search_Book();
    void Borrow_Bookd();
    void Return_Book();
    void Add_Book();
    int out_book();
};

Library::Library()
{
    book1[0] = { "C++ Prime","Stanley",60,10 };
    book1[1] = { "习近平谈治国理政(1-3卷)","习近平",192,99 };
    book1[2] = { "倚天屠龙记","金庸",40,9 };
    book1[3] = { "百年孤独","马尔加西亚",40,8 };
    allnum = 4;
}

void Library::Show_Book()
{
    cout << "                        │======================================│==============│======│======│" << endl;
    cout << "                        │                      书名            │     作者     │ 价格 │ 库存 │" << endl;
    cout << "                        │──────────────────────────────────────│──────────────│──────│──────│" << endl;
    for (int i = 0; i < allnum; i++)
    {
        cout << "                        |" << setw(33) << book1[i].get_name() << setw(7) << "│" << setw(11) << book1[i].get_author() << setw(5) << "│" << setw(6) << book1[i].get_price() << setw(2) << "│" << setw(6) << book1[i].get_num() << setw(2) << "│" << endl;
        cout << "                        │──────────────────────────────────────│──────────────│──────│──────│" << endl;
    }
}

void Library::Add_Book() 
{
    int booknum, bookprice;
    string bookname,author;
    cout<<"请输入书本的名称：";
    getline(cin, bookname);
    cout << endl;
    cout << "请输入书的作者：";
    getline(cin, author);
    cout << endl;
    cout << "请输入添加此书本的数量：";
    cin >> booknum; cin.ignore();
    cout << endl;
    cout << "请输入书的价格：";
    cin >> bookprice; cin.ignore();
    cout << endl;
    book b(bookname, author, bookprice, booknum);
    this->book1[allnum] = b;
    allnum++;
    cout << "恭喜您完成书本的添加" << endl;
}

void Library::Search_Book()
{
    int len = -1;
    int ct = 0;
    cout << "请输入书名：";
    string nnn;
    getline(cin, nnn);
    cout << endl;
    for (int i = 0; i < allnum; i++)
    {
        len = -1;
        if (len = book1[i].get_name().find(nnn, len + 1) != string::npos)
        {
            ct = 1;
        }
    }
    if (ct)
    {   
        cout << "                                                      查询到的图书" << endl;
        cout << "                        │======================================│==============│======│======│" << endl;
        cout << "                        │                      书名            │     作者     │ 价格 │ 库存 │" << endl;
        cout << "                        │──────────────────────────────────────│──────────────│──────│──────│" << endl;
    }
    for (int i = 0; i < allnum; i++)
    {
        len = -1;
        if (len= book1[i].get_name().find(nnn,len+1)!= string::npos)
        {
            cout << "                        │" << setw(33) << book1[i].get_name() << setw(7) << "│" << setw(11) << book1[i].get_author() << setw(5) << "│" << setw(6) << book1[i].get_price() << setw(2) << "│" << setw(6) << book1[i].get_num() << setw(2) << "│" << endl;
            cout << "                        │──────────────────────────────────────│──────────────│──────│──────│" << endl;
            ct = 1;
        }
    }
    if (ct==0)
    {
        cout << "                        │──────────────────────────────────────────────────────────────│" << endl;
        cout << "                        │                           未查询到书籍                       │" << endl;
        cout << "                        │──────────────────────────────────────────────────────────────│" << endl;
    }
}

void Library::Borrow_Bookd()
{
    int len = -1;
    string name;
    int tt = 0;
    int cc = 0;
    cout << "请输入书名："; getline(cin, name); cout << endl;
    for (int i = 0; i < allnum; i++)
    {
        len = -1;
        if (name == book1[i].get_name())
        {
            book1[i].set_num(book1[i].get_num() - 1);
            cout << "借阅成功，该书剩余库存：" << book1[i].get_num() << endl;
            cc = 1;
            break;
        }
        else if (len = book1[i].get_name().find(name, len + 1) != string::npos)
        {
            cout << "你想要借阅的是否是这本书：" << book1[i].get_name() << "  (1/yes;0/no)：";
            cin >> tt; cin.ignore();
            cout << endl;
            if (tt)
            {
                book1[i].set_num(book1[i].get_num() - 1);
                cout << "借阅成功，该书剩余库存：" << book1[i].get_num() << endl;
                cc = 1;
                break;
            }
            tt = 0;
        }
    }
    if (cc == 0)
    {
        cout << "藏经阁中没有与你输入名字相符的书籍" << endl;
    }
}

void Library::Return_Book()
{
    int len = -1;
    string name;
    int tt = 0;
    int cc = 0;
    cout << "请输入书名："; getline(cin, name); cout << endl;
    for (int i = 0; i < allnum; i++)
    {
        len = -1;
        if (name == book1[i].get_name())
        {
            book1[i].set_num(book1[i].get_num() + 1);
            cout << "归还成功，该书剩余库存：" << book1[i].get_num() << endl;
            cc = 1;
            break;
        }
        else if (len = book1[i].get_name().find(name, len + 1) != string::npos)
        {
            cout << "你想要归还的是否是这本书：" << book1[i].get_name() << "  (1/yes;0/no)："; cin >> tt; cin.ignore(); cout << endl;
            if (tt)
            {
                book1[i].set_num(book1[i].get_num() + 1);
                cout << "归还成功，该书剩余库存：" << book1[i].get_num() << endl;
                cc = 1;
                break;
            }
            tt = 0;
        }
    }
    if (cc==0)
    {
        cout << "藏经阁中没有与你输入名字相符的书籍" << endl;
    }
}

int Library::out_book()
{
    cout << "欢迎下次光临,再见！" << endl;
    return ct=0;
}


int main()
{
    Library library1;
    int choice;
    while (ct)
    {
        cout << endl << endl << endl;
        cout << "┌──────────────────────────────────────────────────────────────────────────────────────────────────────────────┐" << endl;      
        cout << "│ ★★★★★★★                                      欢迎进入藏经阁管理系统                                  ★★★★★★★ │ " << endl;
        cout << "└──────────────────────────────────────────────────────────────────────────────────────────────────────────────┘" << endl;
        cout << endl;
        cout << "操作说明：0-退出系统；1-显示库存；2-查询图书；3-借阅图书；4-归还图书；5-增加图书" << endl;
        cout << "请输入操作:";
        cin >> choice; cin.ignore(); cout << endl;
        switch (choice)
        {
        case 0:library1.out_book(); break;
        case 1:library1.Show_Book(); break;
        case 2:library1.Search_Book(); break;
        case 3:library1.Borrow_Bookd(); break;
        case 4:library1.Return_Book(); break;
        case 5:library1.Add_Book(); break;
        default:
            break;
        }
    }
}



