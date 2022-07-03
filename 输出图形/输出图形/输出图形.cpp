#include <iostream>
using namespace std;
void square()
{
    char a = ' ';
    int len,the_len=1;
    cout << "请输入正方形的长度:";
    cin >> len;
    while (the_len <= len)
    { 
        for (int i = 0; i < len; i++)
        {
            if (the_len == 1 || the_len == 5)
            {
                cout << '*' << a;
            }
            else
            {
                if (i==0 || i==len-1)
                {
                    cout << '*' << a;
                }
                else
                {
                    cout << a << a;
                }
            }
        }
        cout << endl;
        the_len++;

    }
}
void triangle()
{
    char a = ' ';
    int len, high, the_len, the_high, num = 0;
    cout << "请输入三角形的底边边长:";
    cin >> len;
    high = (len + 1) / 2;
    for (int the_high = 0; the_high < high; the_high++)
    {
        for (int the_len = 0; the_len < len; the_len++)
        {
            if (the_len < ((len - 1) / 2) - the_high)
            {
                cout << a;
            }
            else
            {
                for (int i = 0; i < (the_high + 1) * 2 - 1; i++)
                {
                    cout << '*';
                }
                break;
            }
        }
        cout << '\n';
    }
}
void encryption()
{
    char num[7],en_num[7];
    int dec,en_dec,choice;
    cout << "请输入六位整数的明码:";
    cin >> num;
    cout << endl;
    for (int i = 0; i < 6; i++)
    {
        dec = num[i] - '0';
        en_dec = (dec + 7) % 10;
        en_num[5 - i] = en_dec + '0';
    }
    for (int i = 0; i < 6; i++)
    {
        cout << en_num[i];
    }
}



int main()
{
    int choice;

    cout << "0-->正方形" << "1-->三角形" << "2-->加密程序:";
    cin >> choice;
    if (choice==0)
    {
        square();
    }
    if (choice==1)
    {
        triangle();
    }
    if (choice == 2)
    {
        encryption();
    }
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
