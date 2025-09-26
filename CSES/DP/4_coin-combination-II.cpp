#include <bits/stdc++.h>
using namespace std;

int MOD = 1e9 + 7;

int main() {
        
    int n, x;
    cin >> n >> x;
    vector<int> coins(n);
    for(int i=0; i<n; i++) {
        cin >> coins[i];
    }

    vector<int> dp(x+1, 0);
    dp[0] = 1;

    for(auto coin : coins) {
        for(int s=0; s<=x; s++) {
            if(s+coin <= x) {
                dp[s + coin] = (dp[s+coin] + dp[s]) % MOD;
            }
        }
    }

    cout << dp[x] << endl;

    return 0;
}