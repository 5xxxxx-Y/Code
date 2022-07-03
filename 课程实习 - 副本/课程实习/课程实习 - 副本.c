#include <iostream>
#include <fstream>
#include<cstdlib>
#include <sstream>
#include <string>
#include <list>
#include "string.h"
using namespace std;
int LeastCommonMultiple(int a, int b);
int NumberOfCombinations(int a, int b);
int Factorial(int a);
int GreatestCommonDivisor(int a, int b);
int date(int year, int month, int day);
double Salary(double hour, double money);

struct result  //定义结构体 
{
    string right;  //存放数据字符串 
    struct result* next_re;  //指向下一个结点 
};

struct result* Create_re()   //新建结点并初始化 
{
    struct result* ct = new struct result;
    ct->right = " ";
    return ct;
}

//存字典
class strrrr
{
public:
    string dic;
    string input;
};



int main()
{
    int len;
    string first;
    cout << "请输入字典所在的文件名："; cin >> first; cout << endl;
    ifstream xxx1(first);//读字典
    const int LINE_LENGTH = 1000;
    char dict[LINE_LENGTH];
    while (xxx1.getline(dict, LINE_LENGTH))
    {
        if (dict[0]=='#')
        {   
            len = dict[2]-'0';
            break;
        }
        break;
    }
    int dic_len = 0;
    string str;
    strrrr* dic = new strrrr[100];

    //存字典
    while (xxx1>>str)
    {
        //cout << str;

        dic[dic_len].dic = str;
        dic_len++;
    }

    //输出字典
    //for (int k = 0; k < dic_len; k++)
    //{
    //    cout << dic[k].dic << endl;
    //}
    

    //读字符
    string second;
    cout << "请输入原始字符串所在的文件名："; cin >> second; cout << endl;
    
    char s;
    string input111,input222;
    int k = 0;
    int input_len = 0;
    strrrr* input = new strrrr[1000];
    //input = NULL;

    //将字符串以符号分割开来
    ifstream xxx2(second);
    ifstream xxx3(second);
    char ys[LINE_LENGTH];
    //while (xxx3.getline(ys, LINE_LENGTH))
    //{
    //    if (ys == NULL)
    //    {
    //        break;
    //    }
    //    cout << "原始数据：" << endl;
    //    cout << ys << endl;
    //}
    cout << "原始数据：" << endl;
    while (xxx3 >> input222)
    {   
        cout << input222 << " ";
    }
    
    while (xxx2>>input111)
    {
        if (input111[0] == '(' || input111[0] == '[' || input111[0] == '<' || input111[0] == '{')
        {
            input[input_len].input = input111[0];
            input_len++;
            for (int i = 1; i < input111.length(); i++)
            {
                
                if (input111[i] == ','|| input111[i] == '/')
                {
                    input[input_len].input = input111[i];
                    input_len++;
                    continue;
                }
                if (input111[i] == ')'|| input111[i] == ']' || input111[i] == '>' || input111[i] == '}')
                {
                    input[input_len].input = input111[i];
                    input_len++;
                    continue;
                }
                input[input_len].input += input111[i];
                if (input111[i+1] == ',' || input111[i+1] == '/' || input111[i+1] == ')' || input111[i+1] == ']' || input111[i+1] == '>' || input111[i+1] == '}')
                {
                    input_len++;
                }
            }
        }
        else
        {
            input[input_len].input = input111;
            input_len++;
        }
    }
    //for (int i = 0; i < input_len; i++)
    //{
    //    cout << input[i].input<<" ";
    //}
    
    //while (xxx2.getline(input111, LINE_LENGTH))
    //{
    //    for (int i = 0; i < 100; i++)
    //    {
    //        ok[i] = input111[i];
    //    }
    //    //cout << input;
    //    for (int i = 0; i < 100; i++)
    //    {
    //        if (ok[i]=='\0')
    //        {
    //            break;
    //        }
    //        input += ok[i];
    //    }
    //    //cout << input;
    //    
    //    break;
    //}
    
    //根据字典转化
    for (int n = 0; n < input_len; n++)
    {
        for (int x = 0, y = 1; y < dic_len; x += 2, y += 2)
        {
            if (n == 0)
            {
                //判断为单个字符,则转化
                if (input[n].input==dic[x].dic)
                {
                    input[n].input = dic[y].dic;
                    break;
                }
          
                /*for (int i = 0; i < input[n].input.length(); i++)
                {
                    if (input[n].input[i] == dic[x].dic && input[n + 1].input == ",")
                    {
                        input[n].input = dic[y].dic;
                        break;
                    }
                }*/
            }
            else if (n > 0)
            {
                //判断为单个字符
                if (input[n].input == dic[x].dic)
                {
                    input[n].input = dic[y].dic;
                    break;
                }
            }
        }
    }
    cout << endl;
    cout << "根据字典转换后：" << endl;
    for (int i = 0; i < input_len; i++)
    {
        cout << input[i].input<<" ";
    }
    
    //把转换好的数组存进链表
    struct result* head = NULL, * ct = NULL;
    int iii = 0;
    while (1)
    {
        if (iii==input_len)
        {
            break;
        }
        //转化为数字
        //if (ok[iii]>=48&&ok[iii]<=57)
        //{
        //    ok[iii] = ok[iii] - '0';
        //}
        struct result* new_node;
        new_node = Create_re();                     //新建结点
        //if (ok[iii] >= 48 && ok[iii] <= 57&&ok[iii+1]>=48&&ok[iii+1]<=57)
        //{
        //    
        //    new_node->right = (ok[iii]-'0')*10+ok[iii+1];
        //    //ct->next = new_node;               //把上一个结点的next指向新建结点 
        //    //ct = ct->next;
        //    iii++;
        //}
        //else
        //{
        //    new_node->right = ok[iii];//把用户输入的字符串存储入新结点中
        //}
        new_node->right = input[iii].input;
        if (head == NULL)                        //如果头结点为空,则把当前新结点当成头结点 
        {
            head = new_node;
            ct = head;                         //当前指向为头结点 
        }
        else                                   //如果头结点不为空 
        {
            ct->next_re = new_node;               //把上一个结点的next指向新建结点 
            ct = ct->next_re;                     //当前指向为新结点 
        }
        iii++;
    }
    
    ct = head;


    //将转换后的将结果写入文件ok.txt
    ofstream out1;
    out1.open("ok.txt", ios::trunc);
    for (int i = 0; i < input_len; i++)
    {
        //cout << ct->right;                       //输出数据字符串 
        out1 << ct->right;
        if (ct->next_re == NULL)
        {
            break;                              //如果当前结点没有指向下一个结点,则退出 
        }              
        ct = ct->next_re;                //当前指向下一个结点 
    }
    ct = head;
    cout << endl;



    //将转换后排好序的数据存入某个文件
    ofstream out2;
    string third;
    cout << endl << "请输入想要保存的文件名："; cin >> third;
    out2.open(third, ios::trunc);
    int l = 0, r = 0, rr = 0;
    double d_l = 0, d_r = 0;
    double finall[100];
    *finall = {};
    int fin_len = 0;
    cout << endl << "计算后：" << endl;
    for (int i = 0; i < input_len; i++)
    {
        l = 0;
        r = 0;
        rr = 0;
       /* if (ct->right>=48&& ct->right <= 57)
        {
            if ( ct->next->right == ',')
            {
                l = ct->right - '0';
                ct = ct->next;
                ct = ct->next;
                if (ct->right >= 48 && ct->right <= 57 && ct->next->right == ')')
                {
                    r = ct->right - '0';
                }
                else if (ct->right >= 48 && ct->right <= 57 && (ct->next->right >= 48 && ct->next->right <= 57))
                {
                    r = (ct->right - '0') * 10 + ct->next->right - '0';
                }
                else if (ct->right >= 48 && ct->right <= 57 && (ct->next->right >= 48 && ct->next->right <= 57) && (ct->next->next->right >= 48 && ct->next->next->right <= 57))
                {
                    r = (ct->right - '0') * 100 + (ct->next->right - '0') * 10 + (ct->next->next->right - '0');
                }
            }
            else if (ct->next->right >= 48 && ct->next->right <= 57)
            {
                l = (ct->right - '0') * 10 + ct->next->right - '0';
                ct = ct->next;
                ct = ct->next;
                ct = ct->next;
                if (ct->right >= 48 && ct->right <= 57 && ct->next->right == ')')
                {
                    r = ct->right - '0';
                }
                else if (ct->right >= 48 && ct->right <= 57 && (ct->next->right >= 48 && ct->next->right <= 57))
                {
                    r = (ct->right - '0') * 10 + ct->next->right - '0';
                }
                else if (ct->right >= 48 && ct->right <= 57 && (ct->next->right >= 48 && ct->next->right <= 57) && (ct->next->next->right >= 48 && ct->next->next->right <= 57))
                {
                    r = (ct->right - '0') * 100 + (ct->next->right - '0') * 10 + (ct->next->next->right - '0');
                }
            }*/
        
        /*if (ct->right=="(")
        {
            ct = ct->next_re;
            
            if (ct->right>=48&&ct->right<=57&&ct->next_re->right==',')
            {
                l = ct->right-'0';
                ct = ct->next_re;
                ct = ct->next_re;
                if (ct->right >= 48 && ct->right <= 57 && ct->next_re->right == ')')
                {
                    r = ct->right-'0';
                }
                else if (ct->right >= 48 && ct->right <= 57 && (ct->next_re->right >= 48 && ct->next_re->right<=57))
                {
                    r = (ct->right - '0') * 10 + ct->next_re->right-'0';
                }
                else if (ct->right >= 48 && ct->right <= 57 && (ct->next_re->right >= 48 && ct->next_re->right <= 57)&&(ct->next_re->next_re->right >= 48 && ct->next_re->next_re->right <= 57))
                {
                    r = (ct->right - '0') * 100 + (ct->next_re->right - '0') * 10 + (ct->next_re->next_re->right - '0');
                }
            }
            else if (ct->right >= 48 && ct->right <= 57 && (ct->next_re->right >= 48 && ct->next_re->right <= 57))
            {
                l = (ct->right - '0') * 10 + ct->next_re->right-'0';
                ct = ct->next_re;
                ct = ct->next_re;
                ct = ct->next_re;
                if (ct->right >= 48 && ct->right <= 57 && ct->next_re->right == ')')
                {
                    r = ct->right-'0';
                }
                else if (ct->right >= 48 && ct->right <= 57 && (ct->next_re->right >= 48 && ct->next_re->right <= 57))
                {
                    r = (ct->right - '0') * 10 + ct->next_re->right-'0';
                }
                else if (ct->right >= 48 && ct->right <= 57 && (ct->next_re->right >= 48 && ct->next_re->right <= 57) && (ct->next_re->next_re->right >= 48 && ct->next_re->next_re->right <= 57))
                {
                    r = (ct->right - '0') * 100 + (ct->next_re->right - '0') * 10 + (ct->next_re->next_re->right - '0');
                }
            }
            cout << LeastCommonMultiple(l, r)<< endl;
        }*/

        

        //if (!((ct->right >= ":" && ct->right <= "@") || (ct->right>="["&&ct->right<="]") || (ct->right >= " " && ct->right <= "/") || (ct->right >= "{" && ct->right <= "~")))
        //{
        //    cout << ct->right << " ";
        //    ct = ct->next_re;
        //    i++;
        //}

        
        if (ct->right == "(" && ct->next_re->next_re->right == ")")//判断阶乘
        {
            ct = ct->next_re;
            i++;
            l = atoi(ct->right.c_str());
            cout << Factorial(l) << " ";
            finall[fin_len] = Factorial(l);
            fin_len++;
        }
        else if (ct->right == "(" && ct->next_re->next_re->right == ",")//判断组合数
        {
            ct = ct->next_re;
            i++;
            l = atoi(ct->right.c_str());
            ct = ct->next_re->next_re;
            i += 2;
            r = atoi(ct->right.c_str());
            cout << NumberOfCombinations(l, r)<<" ";
            finall[fin_len] = NumberOfCombinations(l, r);
            fin_len++;
        }
        else if (ct->right == "[" && ct->next_re->next_re->right == ",")//判断最小公倍数
        {
            ct = ct->next_re;
            i++;
            l = atoi(ct->right.c_str());
            ct = ct->next_re->next_re;
            i += 2;
            r = atoi(ct->right.c_str());
            cout <<  LeastCommonMultiple(l, r)<<" ";
            finall[fin_len] = LeastCommonMultiple(l, r);
            fin_len++;
        }
        else if (ct->right == "{" && ct->next_re->next_re->right == ",")//判断最大公倍数
        {
            ct = ct->next_re;
            i++;
            l = atoi(ct->right.c_str());
            ct = ct->next_re->next_re;
            i += 2;
            r = atoi(ct->right.c_str());
            cout << GreatestCommonDivisor(l, r)<<" ";
            finall[fin_len] = GreatestCommonDivisor(l, r);
            fin_len++;
        }
        else if (ct->right == "(" && ct->next_re->next_re->right == "/")//星期数
        {
            ct = ct->next_re;
            i++;
            l = atoi(ct->right.c_str());
            ct = ct->next_re->next_re;
            i += 2;
            r = atoi(ct->right.c_str());
            ct = ct->next_re->next_re;
            i += 2;
            rr = atoi(ct->right.c_str());
            cout << date(l, r, rr) << " ";
            finall[fin_len] = date(l, r, rr);
            fin_len++;
        }
        else if (ct->right == "<" && ct->next_re->next_re->right == ",")//计算工资
        {
            ct = ct->next_re;
            i++;
            d_l = stod(ct->right.c_str());
            ct = ct->next_re->next_re;
            i += 2;
            d_r = stod(ct->right.c_str());
            cout << Salary(d_l, d_r) << " ";
            finall[fin_len] = Salary(d_l, d_r);
            fin_len++;
        }
        else if(ct->right!=")"&& ct->right != "}"&& ct->right != "]"&& ct->right != ">")
        {
            cout << ct->right << " ";
            finall[fin_len] = stoi(ct->right);
            fin_len++;
        }
        //if (ct->next_re == NULL)
        //{
        //    break;                              //如果当前结点没有指向下一个结点,则退出 
        //}
        ct = ct->next_re;                         //当前指向下一个结点 
    }


    for (int i = 0; i < fin_len; i++)
    {
        for (int j = 0; j < fin_len-1; j++)
        {
            if (finall[j]>finall[j+1])
            {
                double temp = finall[j];
                finall[j] = finall[j + 1];
                finall[j + 1] = temp;
            }
        }
    }
    cout << endl << endl << "排序后：" << endl;
    for (int i = 0; i < fin_len; i++)
    {
        cout << finall[i] << " ";
        out2 << finall[i] << " ";
    }
}

//最小公倍数
int LeastCommonMultiple(int a, int b)
{
    int max = 0;
    max = (a > b) ? a : b;

    do
    {
        if (max % a == 0 && max % b == 0)
        {
            return max;
        }
        else
        {
        ++max;
        }
    } while (true);
    return max;
}

//最大公倍数
int GreatestCommonDivisor(int n, int m)
{
    int a;
    while ((a = n % m) != 0)
    {
        n = m;
        m = a;
    }
    //cout << m << endl;
    return m;
}


//星期数
int date( int year,  int month,  int day)
{   
    int week = 0;
    int YE = 0, CCC = 0, Mon = 0, Da = 0;

    if (month == 1 || month == 2)
    {
        CCC = (year - 1) / 100;
        YE = (year - 1) % 100;
        Mon = month + 12;
        Da = day;
    }
    else
    {
        CCC = year / 100;
        YE = year % 100;
        Mon = month;
        Da = day;
    }

    week = YE + YE / 4 + CCC / 4 - 2 * CCC + 26 * (Mon + 1) / 10 + Da - 1; //蔡勒公式
    week = week >= 0 ? (week % 7) : (week % 7 + 7); //week为负时取模
    if (week == 0) //星期日不作为一周的第一天
    {
        week = 7;
    }

    return week;
}

int NumberOfCombinations(int a, int b)//组合数
{
    if (b == 0)
        return 1;
    if (b == a)
        return 1;
    int big = 1, small = 1;
    for (int i = 1; i <= b; i++)
        small = small * i;
    for (int i = a - b + 1; i <= a; i++)
        big *= i;
    return big / small;
}

double Salary(double hour, double money) //工资
{
    double salary = 0;
    if (hour < 0 || hour>168)
    {
        cout << "0" << endl;
    }
    else if (hour > 40 && hour < 60)
    {
        salary = 40 * money + (hour - 40) * money * 1.5;
    }
    else if (hour > 60)
    {
        salary = 40 * money + 20 * money * 1.5 + (hour - 60) * money * 3;
    }
    else
    {
        salary = hour * money;
    }
    return salary;
}

int Factorial(int a)//阶乘
{
    int sum = 1;
    for (int i = 1; i < a + 1; i++)
    {
        sum *= i;
    }
    return sum;
}