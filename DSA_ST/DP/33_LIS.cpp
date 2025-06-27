#include <bits/stdc++.h>
using namespace std;

int fun(vector<int> &nums, int n, int ind, int prev_ind, vector<vector<int>> &dp) {
    // BC
    if(ind == n) {
        return 0;
    }

    if(dp[ind][prev_ind+1] != -1) return dp[ind][prev_ind+1];

    int take = 0;
    if(prev_ind == -1 || nums[ind] > nums[prev_ind]) {
        take = 1 + fun(nums, n, ind+1, ind, dp);
    }

    int skip = 0 + fun(nums, n, ind+1, prev_ind, dp);

    // cout << "dp[" << ind << "][" << prev_ind+1 << "] = " << dp[ind][prev_ind+1] << endl;


    return dp[ind][prev_ind + 1] = max(take, skip);
}
int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i=0; i<n; i++) cin >> nums[i];
    vector<vector<int>> dp(n, vector<int>(n+1, -1));

    int len =  fun(nums, n, 0, -1, dp);

    for(int i=0; i<n; i++) {
        for(int j=0; j<=n; j++) {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    cout << "len " << len << endl;
    return 0;
}

// ------------------ TABULATION ---------------------

class Solution {
    bool isAllStars(string &s, int i) {
        for (int j = 0; j <= i; j++) {
            if (s[j] != '*') return false;
        }
        return true;
    }

    bool solve(string &s, string &p, int i, int j, vector<vector<int>> &dp) {
        if (i < 0 && j < 0) return true;
        if (i < 0 && j >= 0) return false;
        if (i >= 0 && j < 0) return isAllStars(p, i);

        if (dp[i][j] != -1) return dp[i][j];

        if (p[i] == s[j] || p[i] == '?') {
            return dp[i][j] = solve(s, p, i - 1, j - 1, dp);
        } else if (p[i] == '*') {
            return dp[i][j] = (solve(s, p, i - 1, j, dp) || solve(s, p, i, j - 1, dp));
        }

        return dp[i][j] = false;
    }

public:
    bool isMatch(string s, string p) {
        int m = s.size();
        int n = p.size();
        vector<vector<int>> dp(n, vector<int>(m, -1));
        return solve(s, p, n - 1, m - 1, dp);
    }
};


// -------------------------------- TABULATION ------------------------

class Solution {
        
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(n+1, vector<int>(n+1, 0));

        for(int ind = n-1; ind >=0 ; ind--){
            for(int prev_ind = ind-1; prev_ind >= -1; prev_ind--) {
                int skip = 0 + dp[ind+1][prev_ind+1];
                int take = 0;
                if(prev_ind == -1 || nums[ind] > nums[prev_ind+1]) {
                    take = 1 + dp[ind+1][ind+1];
                }
                dp[ind][prev_ind] = max(take, skip);
            }
        }
        return dp[0][-1+1];
    }
};


// ---------------------- Other Tabulation method --------------------

class Solution {
  
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        int maxi = 1;
        vector<int> t(n, 1);
        for(int i=0; i<n; i++) {
            for(int j=0; j<i; j++) {
                if(nums[i] > nums[j]) {
                    t[i] = max(t[i], t[j]+1);
                    maxi = max(maxi, t[i]);
                }
            }
        }
        return maxi;
        
    }
};




