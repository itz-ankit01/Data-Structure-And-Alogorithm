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


// INVERSE THE ARRAY USING RECURSIION 
/*
void reverseArray(int *arr, int s, int e, int n){
    if(s > e) return;

    else {     
        int temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        reverseArray(arr, s+1, e-1, n);
    }
    print(arr, n );
}
int main(){
    
    int n;
    cin >> n;
    int *arr = new int[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    reverseArray(arr, 0, n-1, n);
   
    return 0;
}  */



// ANOTHER METHOD USING ONE VARIABLE ARGUMRNTS 
/*
void reverseArr(int *arr, int i, int n){
    if(i >= n/2) return;

    else {
        int temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;

        reverseArr(arr, i+1,  n);
    }
   
}
int main(){
    int n;
    cin >> n;
    int *arr = new int[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    reverseArr(arr, 0, n); 
    print(arr, n);
    return 0;
}
*/


// CHECK PALINDROME USING RECURSION 
/*
bool checkPalindrome(string str, int s, int e, int n){
    if(s > e) return true;

    if(str[s] != str[e]) return false;
    else {     
        checkPalindrome(str, s+1, e-1, n);
    } 
}
int main(){
    
    string str;
    cin >> str;

    int n = str.size();
    bool flag =  checkPalindrome(str, 0, n-1, n);
   
    if(flag) cout <<"Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
*/

