#include <iostream>
using namespace std;
int main()
{
    int a = 10, b = 5;
    {
        int c = a + b;
        // c is defined for only below braces , out of braces c is not defined but this initialisation if(int c=a+b; c>10){}is valid in c++ 17

        if (c > 10)
        {
            cout << c << endl;
        }
    } // outside this c is not defined

    return 0;
}