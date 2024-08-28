#include<bits/stdc++.h>
using namespace std;

void printBinary(int num){
    for(int i = 10; i >= 0; --i){
        cout << ((num >> i) & 1) ;
    }
    cout << endl;
}
int main(){
    // printBinary(10);
    int n;
    cin >> n;
    cout << "n: ";
    printBinary(n);

    int i;
    cin >> i;
    

    // -------------------------- set ith bit

    // cout << "ith set bit";
    // printBinary( (1 << i) | n );

    // ---------------------- check ith bit is set or not

    // if( n & (1 << i)) cout << "Set bit "<< endl;
    // else cout << "Not set bit" << endl;

    // ------------------------ bit unset karni hai

    // int a = (n & ~(1 << i));
    // cout << "Unset Bit ";
    // printBinary(a);

    // ---------------------- Bit ko toggle krna h 1 -> 0 or 0 -> 1

    // cout << "After Flip of ith bit ";
    // printBinary(n ^ (1 << i));

// ---------------- count set bit
    int ct = 0;
    for(int i=31; i>=0; --i){
        if(n & (1<<i)) ct++;
    }
    cout << "No of set bit " << ct << endl;
    cout << __builtin_popcount(n) << endl; 
    cout << __builtin_popcountll((1LL<<35)-1) << endl; 




    return 0;
}