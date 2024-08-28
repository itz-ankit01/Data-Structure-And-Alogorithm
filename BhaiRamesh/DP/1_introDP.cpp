#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef long long ll;

// Fibonacci Series ------------------------------

int dp[100];   // TOP DOWN APPROACH
int func(int n){
    if (n == 0) return 0;
    if (n == 1) return 1;
    if(dp[n] != -1) return dp[n];
    // memoise
    return dp[n] = func(n-1) + func(n-2);
}


int main(){
    memset(dp, -1, sizeof(dp));  // fill dp array with only -1
    int n;
    cin >> n;
    
    // BOTTOM UP APPROACH

    dp[0] = 0;
    dp[1] = 1;
    for(int i=2; i<=n; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    
    cout << func(n);
    return 0;
}