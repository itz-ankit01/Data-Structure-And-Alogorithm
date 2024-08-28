#include<iostream>
using namespace std;
int main(){
    long int n;
    cin >> n;
    int t = -1;
    if(n % 4 == 0) t = n;
    else if(n % 4 == 1) t = 1;
    else if (n % 4 == 2) t = n+1;
    else t = 0;

    for(int i = 1; i<n; i++){
        int a;
        cin >> a;
        t = t ^ a;
        
    }
    cout << t << endl;

    return 0;
}