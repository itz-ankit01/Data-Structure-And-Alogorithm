#include <bits/stdc++.h>
using namespace std;
const int N = 1e+5;
int main()
{
    cout << INT_MAX << endl;
    cout << INT_MIN << endl;
    int a = (1LL << 32) - 1;   // overflow condition
    cout << "a " << a << endl; // overflow due to signed int
    int b = (1LL << 31) - 1;
    cout << b << endl;

    unsigned int c = (1LL << 31) - 1;
    cout << "c -> " << c << endl;

    unsigned int d = (1LL << 32) - 1;
    cout << "d -> " << d << endl;
    return 0;
}