#include <iostream>
#include <iomanip>
using namespace std;
int Num(int a);

int main()
{
    int n,num;
    cout << "请输入杨辉三角的行数：";  
    cin >> n;   
    cout << endl;
    int** a = new int* [n];
    for (int i = 0; i < n; i++)
    {
        a[i] = new int [n];
    }
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j <= i; j++) 
        {
            if (j == 0 || j == i) 
            {
                a[i][j] = 1;
            }
            else {
                a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
            }
        }
    }
    for (int i = 0; i < n; i++) {
        int width = (n - i) * 2;
        cout << setw(width) << a[i][0];

        for (int j = 1; j <= i; j++) {
            cout << setw(4) << a[i][j];
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        delete[] a[i];
    }
    delete[] a;    
}



