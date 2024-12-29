#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
typedef vector<int> vi;

/**
 * arr[] = {1, 5, 11, 5};
 * {1, 5, 5} == {11}  --> true
 */

bool EqualSumPartition(vector<int> &v, int sum) {
    int n = v.size();
    int dp[n+1][sum+1];
    for(int i = 0; i < n+1; i++) {
        for(int j = 0; j < sum + 1; j++) {
            if(i == 0) dp[i][j] = false;
            if(j == 0) dp[i][j] = true;
        }
    }

    for(int i = 1; i < n+1; i++) {
        for(int j = 1; j < sum+1; j++) {
            if(v[i-1] <= j) {
                dp[i][j] = dp[i-1][j - v[i-1]] || dp[i-1][j];
            } else {
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    return dp[n][sum];
}

bool canPartition(vector<int>&v) {
    int sum = 0;
    for(int i = 0; i < v.size(); i++){
        sum += v[i];
    }
    if(sum % 2) return false;
    else return EqualSumPartition(v, sum/2);
}

