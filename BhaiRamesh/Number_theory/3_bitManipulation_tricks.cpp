#include<bits/stdc++.h>
using namespace std;

void printBinary(int num){
    for(int i = 10; i >= 0; --i){
        cout << ((num >> i) & 1) ;
    }
    cout << endl;
}

int main(){
    // for(int i = 0; i<8; ++i){
    //     printBinary(i);
    //     if(i & 1) cout << "Odd\n";
    //     else cout << "Even\n";
    // }

    int n = 5;
    // cout << (n>>1) << endl;   // divide
    // cout << (n<<1) << endl;   // multiply

    
// ------------- LETTER CONVERSION ------------

    // for(char c='A'; c<='E'; ++c){
    //     cout << c << endl;
    //     printBinary(int(c));
    // }
    // for(char c='a'; c<='e'; ++c){
    //     cout << c << endl;
    //     printBinary(int(c));
    // }

    // char A = 'A';
    // char a = A | (1<<5);
    // cout << a << endl;
    // cout << char(a & ~(1 << 5)) << endl;
    
    // // cout << char(1<<5) << endl; 
    // cout << char('C' | ' ') << endl;
    // cout << char('c' & '_') << endl;

// ----------------- Clear LSB bit ----------------------

    int i = 4;
    printBinary(59);
    int a = 59;
    printBinary(a & ~((1<<(i+1))-1));


/*
00000111011
11111100000
00000011111
00000100000 - 1
00000100000
*/


// ----------------------- clear Msb bit --------------------
/*
00000111011
00000001011  (ans)
00000001111
00000010000 - 1
00000100000
*/

    // printBinary(59);
    // int a = 59;
    // int i = 3;
    // printBinary(a & ((1<<(i+1)) - 1));


    // check power of 2
    
    // int a = 15;
    // if(! (a & (a-1))) cout << "Power of 2";
    // else cout <<"No" << endl;
    // return 0;
}