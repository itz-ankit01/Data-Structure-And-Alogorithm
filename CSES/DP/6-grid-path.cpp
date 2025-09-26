#include <bits/stdc++.h>
using namespace std;

int MOD = 1e9+7;

int main() {
    int n;
    cin >> n;
    vector<string> grid(n);
    for(int r=0; r<n; r++) {
        cin >> grid[r];
    }    

    vector<vector<int>> dp(n, vector<int>(n, 0));

    dp[0][0] = 1;

    if(grid[0][0] == '*') dp[0][0] = 0;

    for(int row = 0; row < n; row++) {
        for(int col=0; col<n; col++) {
            if(row+1 < n && grid[row+1][col] == '.') {
                dp[row+1][col] = (dp[row][col] + dp[row+1][col]) % MOD; 
            }
            if(col+1<n && grid[row][col+1] == '.') {
                dp[row][col+1] = (dp[row][col] + dp[row][col+1]) % MOD;
            }
        }
    }

    cout << dp[n-1][n-1] << endl;

    return 0;
}