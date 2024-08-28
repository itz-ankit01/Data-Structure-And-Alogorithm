#include<iostream>
using namespace std;

/*
// FACTORIAL USING RECURSION
int fact(int n){
    if(n==0)
    return 1;

    return n * fact(n-1);
}

int main(){
    int n;
    cin >> n;
    int ans = fact (n);
    cout << ans << endl;
    return 0;
}   */

// POWER
/*
int power(int n){
    if (n == 0) return 1;

    return 2 * power(n-1);
}

int main(){
    int n ;
    cin >> n;
    int ans = power(n);
    cout << ans << endl;
}   */

// COUNTING

void print (int n){
    // Base Case
    if(n==0) return;

    cout << n << " ";

    // Recursive Relation
    print(n-1);
}

int main(){
    int n;
    cin >> n;
    print(n);
}