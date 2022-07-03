#include <iostream>
using namespace std;

int main()
{

    class AB
    {
    public:
        AB()
        {
            cout << "xxx" << endl;
        }
        AB(int a)
        {
            cout << "xxx" << endl;
        }
    };
    AB a(4), b[3], * p;

}
