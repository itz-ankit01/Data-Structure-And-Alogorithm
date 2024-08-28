#include<bits/stdc++.h>
using namespace std;
int main(){
    // swap
    int a = 4, b = 6;
    // properties
    // xor of same no is always 0
    // x ^ 0 = x, x ^ x = 0
    a = a ^ b;
    b = b ^ a;  // b = b ^ (a ^ b)
    a = a ^ b;  // a = (a ^ b) ^ a
    // cout << a << " " << b << endl;



    // properies
    // a ^ b = c
    // c ^ b = a
    // a ^ c = b


    
    return 0;
}