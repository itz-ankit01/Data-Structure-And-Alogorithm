#include <bits/stdc++.h>
using namespace std;

int MOD = 1e9 + 7;

int main() {
    int n;
    cin >> n;
    vector<long long> dp(n+1, 0);
    dp[0] = 1;
    
    for(int s = 0; s <= n; s++) {
        for(int i=1; i<=6; i++) {
            if(s-i >= 0) {
                dp[s] = (dp[s] + dp[s-i]) % MOD;
            }
        }
    }

    cout << dp[n] << endl;

    return 0;
}