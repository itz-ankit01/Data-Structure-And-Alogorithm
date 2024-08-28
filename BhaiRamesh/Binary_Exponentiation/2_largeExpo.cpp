#include<bits/stdc++.h>
using namespace std;
const int M = 1e9+7;
// a <= 10^9, b <= 10^9, M <= 10^9

// a <= 10^18, 2 ^ 1024
// Iterative Way

long long bitMultiply(long long a, long long b){
    long long ans = 0;
    while(b){
        if(b&1){
            ans = (ans + a) % M;
        }
        a = (a + a) % M;
        b >>= 1;
    }
    return ans;
}

int  binExpIter(long long a, long long b){
    long long ans = 1;
    while(b){
        if(b&1){
            ans = bitMultiply(ans,  a) ;
        }
        a = bitMultiply(a, a) ;
        b >>= 1;
    }
    return ans;
}


// log^2(N)

int main(){
    int a, b;
    cin >> a >> b;
    
    cout << binExpIter(a, b) << endl;
    return 0;
}