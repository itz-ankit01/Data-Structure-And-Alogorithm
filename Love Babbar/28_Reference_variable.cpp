#include<iostream>
using namespace std;

/*
void update2(int& n){
    n++;
}

void update1(int n){
    n++;
}

int& func(int a) {
    int num = a;
    int& ans = a;
    return ans; 
}
int main(){

/*    
    int i = 5;
    // Create a reference Variable

    int& j= i;
    cout << i << endl;
    i++;
    cout << i << endl;
    j++;
    cout << i << endl;
    cout << j << endl;
    */

/*
    int  n = 5;
    cout << "Before -> " << n << endl;
    update2(n);
    cout << "After -> " << n << endl;

    // func(n);  // U will get the wrong value as the ans and num is the local variable outside the loop ans and num's memory get cleared;


    return 0;
}   */


// DYNAMIC MEMORY ALLOCATION IN AN ARRAY

int getSum(int *arr, int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){

    int n;
    cin >> n;

    // Variable size Array
    int *arr = new int [n];

    // Taking input in the array
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int ans = getSum(arr, n);

    cout << "Answer is " << ans << endl;
    return 0;
}