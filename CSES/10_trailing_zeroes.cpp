#include<iostream>
#include<cmath>
using namespace std;
int main(){
    long int n;
    cin >> n;
    int t=-1;
    int cnt =0;
    int a = 5;
    while(t!=0){
        t = floor(n/a);
        cnt += t;
        a = a*5;
    }
    cout << cnt << endl;
    return 0;
}