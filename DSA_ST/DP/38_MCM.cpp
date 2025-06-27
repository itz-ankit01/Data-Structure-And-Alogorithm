#include <bits/stdc++.h>
using namespace std;
int f(vector<int>& arr, int i, int j, vector<vector<int>>& dp){
    
    // base condition
    if(i == j)
        return 0;
        
    if(dp[i][j]!=-1)
        return dp[i][j];
    
    int mini = INT_MAX;
    
    // partioning loop
    for(int k = i; k<= j-1; k++){
        
        int ans = f(arr,i,k,dp) + f(arr, k+1,j,dp) + arr[i-1]*arr[k]*arr[j];
        
        mini = min(mini,ans);
        
    }
    
    return mini;
}


int matrixMultiplication(vector<int>& arr, int N){
    
    vector<vector<int>> dp(N+1,vector<int>(N+10,-1));
    
    int i =1;
    int j = N-1;
    
    
    return f(arr,i,j,dp);
    
    
}

int main() {
	
	vector<int> arr = {10, 20, 30, 40, 50};
	
	int n = arr.size();
	
	cout<<"The minimum number of operations is "<<matrixMultiplication(arr,n);
	
	return 0;
}

// ---------------------- Tabulation ---------------------

class Solution {
    int matrixMultiplication(vector<int>& nums, int n){
        vector<vector<int>> dp(n, vector<int> (n, 0));

        // BC
        for(int i=1; i<n; i++) dp[i][i] = 0;

        for(int i = n-1; i>=1; i--) {
            for(int j = i+1; j < n; j++) {
                int mn = 1e9;
                for(int k=i; k<j; k++) {
                    if(i == j) continue;
                    int steps = nums[i-1] * nums[k] * nums[j] + dp[i][k] + dp[k+1][j];
                    mn = min(mn, steps);
                }
                dp[i][j] = mn;
            }
        }
        return dp[1][n-1];
    }
};