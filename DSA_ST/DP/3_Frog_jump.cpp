#include <bits/stdc++.h>
using namespace std;

// RECURSIVE WAY

long long frogjump(long long ind, vector<long long> &v) {
    if (ind == 0) return 0;

    long long left = frogjump(ind - 1, v) + abs(v[ind] - v[ind - 1]);
    long long right = LLONG_MAX; 

    if (ind > 1) {
        right = frogjump(ind - 2, v) + abs(v[ind] - v[ind - 2]);
    }

    return min(left, right);
}

// MEMOIZATION

long long frogjump(long long ind, vector<long long> &v, vector<long long> &dp) {
        if (ind == 0) return 0;

        if (dp[ind] != -1) return dp[ind];

        long long left = frogjump(ind - 1, v, dp) + abs(v[ind] - v[ind - 1]);
        long long right = LLONG_MAX;

        if (ind > 1) {
            right = frogjump(ind - 2, v, dp) + abs(v[ind] - v[ind - 2]);
        }
        return dp[ind] = min(left, right);
}





// TABULATION
int minimumEnergy(vector<int>& height, int n) {
     
    vector<int> dp(n, 0);
    dp[0] = 0;
    
    for(int i=1; i<n; i++) {
        int left = dp[i-1] + abs(height[i] - height[i-1]);

        int right = INT_MAX;
        if(i > 1) {
            right = dp[i-2] + abs(height[i] - height[i-2]);
        }
        dp[i] = min(left, right);
    }
    return dp[n-1];
}    