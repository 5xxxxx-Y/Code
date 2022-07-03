#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#define random(a,b) (rand()%(b-a)+a)
using namespace std;
static int** a, len;

void PrintArry(int** a)
{
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            cout << setw(4) << a[i][j] << " ";
        }
        cout << endl;
    }
}

int XZ(int **a)
{
    cout << "正在进行排序。。。" << endl;
    int min, min_index, temp;
    for (int k = 0; k < len; k++)
    {
        for (int i = 0; i < len; i++)
        {
            min = a[k][i];
            min_index = i;
            for (int j = i+1; j < len; j++)
            {
                if (a[k][j] < min)
                {
                    min = a[k][j];
                    min_index = j;
                }
            }
            temp = a[k][min_index];
            a[k][min_index] = a[k][i];
            a[k][i] = temp;
        }
    }
    cout << "已完成排序，以下为排序后的数组：" << endl;
    PrintArry(a);
    return 0;
}

int MP(int **a)
{
    int temp;
    for (int i = 0; i < len; i++)
    {
        for (int k = 0; k < 9; k++)
        {
            for (int j = 0; j < 9; j++)
            {
                if (a[i][j] > a[i][j + 1])
                {
                    temp = a[i][j + 1];
                    a[i][j + 1] = a[i][j];
                    a[i][j] = temp;
                }
            }
        }
    }
    PrintArry(a);
    return 0;
}
void PX()
{
    
    int choice = 0;
    srand((int)time(0));  // 产生随机种子  把0换成NULL也行
    cout << "请输入一个正整数作为生成的二维数组的长和宽：";   cin >> len; cout << endl;
    //生成随机的动态二维数组
    cout << "-----------------------------正在生成随机二维数组-------------------------------" << endl;
    int **a = new int*[len];
    for (int i = 0; i < len; i++)
    {
        a[i] = new int[len];
    }
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            a[i][j] = random(0, 10000);
            cout << setw(4) << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << "已生成随机二维数组,请选择一种排序算法对该数组进行排序" << endl;
    cout << "1-->选择算法；2-->冒泡算法：";
    cin >> choice;
    if (choice == 1)
    {
        XZ(a);
    }
    if (choice == 2)
    {
        MP(a);
    }
    //销毁动态数组
    for (int i = 0; i < len; i++)
    {
        delete[] a[i];
    }
    delete[] a;
}


void JZ()
{
    int jz_1[3][3]={}, jz_2[3][3]={}, jz_all[3][3]={}, num=0, result = 0;
    cout << "请按行输入第一个三行三列矩阵中的数字，用空格隔开：";
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> jz_1[i][j];
        }
    }
    cout << "请按行输入第二个三行三列矩阵中的数字，用空格隔开：";
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> jz_2[i][j];
        }
    }
    cout << "输入完成，进行矩阵相乘" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                result += jz_1[i][k] * jz_2[k][j];
            }
            jz_all[i][j] = result;
            result = 0;
        }
    }
    cout << endl << "已完成相乘，相乘后的矩阵为：" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << jz_all[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    
    int choice;
    cout << "1-->数组排序；2-->矩阵相乘：";
    cin >> choice;
    if (choice == 1)
    {
        PX();
    }
    if (choice == 2)
    {
        JZ();
    }
}