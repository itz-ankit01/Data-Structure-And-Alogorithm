#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}


// FIBONACCI SERIES USING RECURSION

int fib(int n){
    if(n<=1) return n;
    return fib(n-1) + fib(n-2);
}

int main(){
    int n;
    cin >> n;
    cout << fib(n) << endl;
}  

