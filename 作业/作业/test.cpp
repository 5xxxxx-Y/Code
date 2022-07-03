#include <iostream>
using namespace std;

int main()
{
    int b = 1;
    int &a = b;
    cout << a << b << endl;
    return 0;
}