#include <bits/stdc++.h>
using namespace std;

int f(int n, int x, vector<int> &v) {
    if(x <= 0) return 0;

    int c = INT_MAX;
    for(int i = 0; i < n; i++) {
        if(x-v[i] >= 0) {
            c = min(c, 1+ f(n, x-v[i], v));
        }
    }
    return c;
}

int main() {
    int n, x;
    cin >> n >> x;
    
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
    }

    // cout << f(n, x, v) << endl;


    vector<int> dp(x+1, INT_MAX);
    dp[0] = 0;

    for(int i = 0; i <= x; i++) {
        for(int idx = 0; idx < n; idx++) {
            if(i-v[idx] >=0 && dp[i-v[idx]] != INT_MAX) {
                dp[i] = min(dp[i], 1 + dp[i-v[idx]]);
            }
        }
    }

    if (dp[x] == INT_MAX)
    cout << -1 << endl; // no solution
    else
    cout << dp[x] << endl;

  

    return 0;
}