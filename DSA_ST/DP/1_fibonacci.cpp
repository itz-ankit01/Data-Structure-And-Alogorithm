#include <bits/stdc++.h>
using namespace std;

/**
 * * TC -> O(N)
 * * SC -> O(N)
 * * MEMOIZATION
 */

int f(int n, vector<int> &dp) {
    if(n <= 1) {
        return n;
    }

    if(dp[n] != -1) return dp[n];

    return dp[n] = f(n-1, dp) + f(n-2, dp);
}




/**
 * * TC -> O(N)
 * * SC -> O(N)
 * * TABULATION
 */


int fibo(int n, vector<int> &dp) {
    dp[0] = 0, dp[1] = 1;

    for(int i=2; i <=n; i++) {
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}


int main() {
    int n;
    cin >> n;
    vector<int> dp(n+1, -1);
    // cout << fibo(n, dp);

    int prev = 0;
    int prev2 = 1;

    for(int i=2; i<=n; i++) {
        int curr = prev + prev2;
        prev2 = prev;
        prev = curr;
    }
    cout << prev << endl;
    return 0;
}
