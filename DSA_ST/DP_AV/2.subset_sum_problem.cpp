#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
typedef vector<int> vi;

/**
 * arr [] = {2, 3, 7, 8, 10} , sum = 11
 * ans = {3, 8} -> true
 */

bool subsetSum(vector<int> &v, int sum) {
    int n = v.size();

    bool dp[n + 1 ][sum + 1];

    for(int i = 0; i < n + 1; i++) {
        for(int j = 0; j < sum + 1; j++ ) {
            if(i == 0) dp[i][j] = false;
            if(j == 0) dp[i][j] = true;
        }
    }

    for(int i = 1; i < n + 1; i++) {
        for(int j = 1; j < sum + 1; j++) {
            if(v[i - 1] <= j) {
                dp[i][j] = dp[i - 1][j - v[i - 1]] || dp[i - 1][j];
            }
            else if(v[i-1] > j) {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    return dp[n][sum];
}