#include<iostream>
using namespace std;

/*

void reachHome(int src, int dest){

    cout << "Source " << src << " Destination " << dest << endl;

    // Base Case
    if (src == dest) {
        cout << "Pahunch Gya" << endl;
        return;
    }

    // processing - ek step aage badh jaoo
    src++;

    // recursive call
    reachHome(src, dest);
}

int main(){
    int dest = 10;
    int src = 1;
    reachHome(src, dest);    
    return 0;
}
*/

// FIBONACCI SERIES
/*
int fibo (int n){
    // Base Case
    if(n==1) return 0;
    if(n==2) return 1;

    int ans = fibo(n-1) + fibo(n-2);
    return ans;
}

int main(){
    int n ;
    cin >> n;
    cout << fibo(n) << endl;
}   */

// STAIR CASE PROBLEM (1 0R 2 STEP AT A TIME)
/*

int noOfStairCase(long long n){
    if(n == 1) return 1;
    if(n == 2) return 2;

    return noOfStairCase(n-1) + noOfStairCase(n-2);
}
int main(){
    
    long long n;
    cout << "Enter the no. of staircase ";
    cin >> n;

    int ans = noOfStairCase(n);
    cout << "The no. of ways " << ans << endl;
    return 0;
}
*/

// SAY DIGIT PROBLEMS
#include <cstring>

void sayDigit(int n, string arr[]){
    if(n == 0) 
    return;

    // process
    int digit = n % 10;
    n = n / 10;
    sayDigit(n, arr);
    cout << arr[digit] << " ";
}
int main(){

int n;
cout << "Enter the digits ";
cin >> n;

string arr[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};

sayDigit(n, arr);
    return 0;
}
