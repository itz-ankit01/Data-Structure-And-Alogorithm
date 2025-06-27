#include <bits/stdc++.h>
using namespace std;


class Solution {
    bool isPalindrome(int i, int j, string & tmp) {
        while(i < j) {
            if(tmp[i] != tmp[j]) return false;
            i++;
            j--;
        }
        return true;
    }
    int fun(int i, string &s, vector<int> &dp) {
        if(i == s.size()) return 0;
        if(dp[i] != -1) return dp[i];
      
        int mini = 1e9;
        for(int j = i; j < s.size(); j++) {
           
             if(isPalindrome(i, j, s)) {
                int cost = 1 + fun(j+1, s, dp);
                mini = min(mini, cost);
             }
            
        }
        return dp[i] = mini;
    }
public:
    int minCut(string s) {
        int n = s.size();
        vector<int> dp(n+1, -1);
        return fun(0, s, dp)-1;
    }
};