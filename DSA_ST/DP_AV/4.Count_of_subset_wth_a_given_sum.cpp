#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
typedef vector<int> vi;

/**
 * arr[] = {2, 3, 5, 6, 8, 10}
 * sum = 10
 * {2, 8}, {2, 3, 5}, {10}
 */

int perfectSum(vector<int>& arr, int target) {
    int n = arr.size();
    int dp[n+1][target+1];

    for(int i = 0; i < n+1; i++) {
        for(int j = 0; j < target+1; j++) {
            if(i == 0) dp[i][j] = 0;
            if(j == 0) dp[i][j] = 1;
        }
    }

    for(int i = 1; i < n+1; i++) {
        for(int j = 1; j < target+1; j++) {
            if(arr[i-1] <= j) {
                dp[i][j] = dp[i-1][j] + dp[i-1][j - arr[i-1]];
            } else {
                dp[i][j] = dp[i-1][j];
            }
        }
    }    
    return dp[n][target];
}