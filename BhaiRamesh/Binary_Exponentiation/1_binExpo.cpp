#include<bits/stdc++.h>
using namespace std;
const int M = 1e9+7;
// a <= 10^9, b <= 10^9, M <= 10^9

// Recursive Way
double binExpRecur(int a, int b){
    if(b == 0) return 1;
    long long res = binExpRecur(a, b/2);
    if(b&1){
        return (a * ((res * res) % M)) % M;
    }
    else {
        return (res * res) % M;
    }
}

// Iterative Way
int  binExpIter(int a, int b){
    long long ans = 1;
    while(b){
        if(b&1){
            ans = (ans * 1LL * a) % M;
        }
        a = (a * 1LL * a) % M;
        b >>= 1;
    }
    return ans;
}

int main(){
    int a, b;
    cin >> a >> b;
    cout << binExpRecur(a, b) << endl;
    cout << binExpIter(a, b) << endl;
    return 0;
}