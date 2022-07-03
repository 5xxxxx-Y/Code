#include <iostream>
#include <ctime>
#include <iomanip>
#define random(a,b) (rand()%(b-a)+a)
using namespace std;
void CJD();
void ZFC();
void SZ();
void Print(int* p, int k);


int main()
{   

    srand((unsigned)time(0));
    SZ();
}

void SZ()
{
    int n,temp,m,ct=0;
    cout << "生成一个n维数组，n为："; cin >> n; cout << endl;
    int *array = new int[n];
    for (int i = 0; i < n; i++)
    {
        array[i] = random(10, 10000);
    }
    cout << "排序前：" << endl;
    Print(array, n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if (array[j]>array[j+1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    cout << "排序后：" << endl;
    Print(array, n);
    cout << "请插入一个整数："; cin >> m; cout << endl;
    int* array2 = new int[n+1];
    for (int i = 0; i < n; i++)
    {
        if (ct==1)
        {
            array2[i + 1] = array[i];
        }
        else
        {
            array2[i] = array[i];
        }
        if (i != n - 1 && m > array[i] && m < array[i + 1])
        {
            array2[i + 1] = m;
            ct = 1;
        }
    }
    cout << "插入后：" << endl;
    Print(array2, n+1);
    delete[] array;
    delete[] array2;

}

void Print(int* p, int k)
{
    for (int i = 0; i < k; i++)
    {
        cout << *(p + i) << " ";
    }
    cout << endl;
}

//void ZFC()
//{
//    char a1[10], a2[10], a3[20];
//    cout << "请输入字符a1：";
//    cin >> a1;
//    cout << endl;
//    cout << "请输入字符a2：";
//    cin >> a2;
//    cout << endl;
//    char* p, * q;
//    q = a3;
//    p = a1;
//    while (*p != '\0')
//        *q++ = *p++;
//    p = a2;
//    while (*p != '\0')
//        *q++ = *p++;
//    *q = '\0';
//    cout <<"拼接后的字符为：" << a3;
//}

//void CJD()
//{
//    int sum,ct=0;
//    srand((int)time(0));
//    float CJD[31][6] = { 1,2,3,4,5,6,6 },temp[6]={0},num=0;
//    cout << "1：学号；2： MT ；3： EN ；4： PH ；5：总分；6：平均分" << endl;
//    for (int i = 1; i < 31; i++)
//    {
//        CJD[i][0] =i;
//        for (int j = 1; j < 4; j++)
//        {
//            CJD[i][j] = random(0, 100);
//        }
//    }
//    for (int i = 1; i < 31; i++)
//    {
//        CJD[i][4] = CJD[i][1] + CJD[i][2] + CJD[i][3];
//        CJD[i][5] = (CJD[i][4] / 3.00);
//    }
//    cout << "按学生编号排序的成绩单为：" << endl;
//    for (int i = 0; i < 31; i++)
//    {
//        cout << "|-----------------------------------------------------|" << endl;
//        
//        cout << "|";
//        for (int j = 0; j < 6; j++)
//        {
//            if (i!=0 && j==5)
//            {
//                cout << fixed << setprecision(1);
//            }
//            if (j<5)
//            {
//                cout << fixed << setprecision(0);
//            }
//            cout <<setw(5) << CJD[i][j]<<setw(4) << "|";
//        }
//        cout << endl;
//    }
//    //排序
//    cout << "输入1，按成绩高低进行排序："; cin >> ct; cout << endl;
//    if (ct!=1)
//    {
//        return;
//    }
//    for (int i = 0; i < 30; i++)
//    {
//        for (int j = 1; j < 31; j++)
//        {
//            if (CJD[j][4] < CJD[j + 1][4])
//            {
//                //memcpy(p, v.p, size * sizeof(int));
//                memcpy(temp, CJD[j], sizeof(CJD[j])); //temp = CJD[j][4];
//                memcpy(CJD[j], CJD[j + 1], sizeof(CJD[j]));//CJD[j][4] = CJD[j + 1][4];
//                memcpy(CJD[j + 1], temp, sizeof(CJD[j]));// CJD[j + 1][4] = temp;
//            }
//        }
//    }
//    cout << "按成绩高低排序的成绩单为：" << endl;
//    cout << "1：学号；2： MT ；3： EN ；4： PH ；5：总分；6：平均分" << endl;
//    for (int i = 0; i < 31; i++)
//    {
//        cout << "|-----------------------------------------------------|" << endl;
//
//        cout << "|";
//        for (int j = 0; j < 6; j++)
//        {
//            if (i != 0 && j == 5)
//            {
//                cout << fixed << setprecision(1);
//            }
//            if (j < 5)
//            {
//                cout << fixed << setprecision(0);
//            }
//            cout << setw(5) << CJD[i][j] << setw(4) << "|";
//        }
//        cout << endl;
//    }
//
//    cout << "输入你想查询的学号："; cin >> num; cout << endl;
//    for (int i = 1; i < 31; i++)
//    {
//        if (CJD[i][0]==num)
//        {
//            cout << "1：学号；2： MT ；3： EN ；4： PH ；5：总分；6：平均分" << endl;
//            cout << "|-----------------------------------------------------|" << endl;
//
//            cout << "|";
//            for (int j = 0; j < 6; j++)
//            {
//                if (j != 5)
//                {
//                    cout << fixed << setprecision(0);
//                }
//                if (j == 5)
//                {
//                    cout << fixed << setprecision(1);
//                }
//                cout << setw(5) << CJD[i][j] << setw(4) << "|";
//            }
//            cout << endl << "|-----------------------------------------------------|" << endl;
//            cout << "在班内排名第" << i;
//        }
//    }
//}
