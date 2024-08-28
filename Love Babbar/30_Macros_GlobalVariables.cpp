#include<iostream>
using namespace std;
/*
// Macros
#define PI 3.14

int main(){
    int r = 5;

    // double PI = 3.14;

    double area = PI * r * r;
    cout << "Area is " << area << endl;
    return 0;
}
*/

// GLOBAL VARIABLES
/*
int score = 15;
void a (int i){
    cout << i << " in a " << endl;
    cout << score << " in a " << endl;
    score++;      // ye change har jagah reflect hoga
}
void b (int i){
    cout << i << " in b " << endl;
    cout << score << " in b " << endl;   
}
int main(){

    int i = 5;
    cout << i << endl;
    cout << score << " in main" << endl;
    a(i);
    b(i);
    return 0;
}   */


// INLINE FUNCTION

inline int getMax(int& a, int& b){
    return (a > b) ? a : b;
}

int main(){

    int a = 1, b = 2;
    int ans = 0;

    ans = getMax(a,b);
    cout << ans << endl;

    a = a + 3;
    b = b + 1;

    ans = getMax(a,b);
    cout << ans << endl;

    return 0;
}  

// DEFAULT ARGUMENT
// default argument hmesha right most me hota h nhi to error dega
/*
void print(int arr[], int n, int start = 0){
    for(int i=start; i<n; i++){
        cout << arr[i] << endl;
    }
}

int main(){

    int arr[5] = {1, 4, 7, 8, 9};
    int n = 5;
    //print(arr+2, n-2);

    print(arr, n);
    cout << endl;
    print(arr, n, 2);

    return 0;
}
*/