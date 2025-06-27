#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        vector<int> largestDivisibleSubset(vector<int>& nums) {
            int n = nums.size();
            vector<int> dp(n,1), hash(n);
            sort(nums.begin(), nums.end());
    
            int mx = 0;
            int lastIndex = 0;
    
            for(int i=0; i<n; i++) {
                hash[i] = i;
                for(int j=0; j<i; j++) {
                    if(nums[i] % nums[j] == 0 && dp[i] < 1 + dp[j]) {
                        dp[i] = 1 + dp[j];
                        hash[i] = j;
                    }
                }
                if(mx < dp[i]) {
                    mx = dp[i];
                    lastIndex = i;
                }
            }
            vector<int> tmp;
                tmp.push_back(nums[lastIndex]);
    
                while(hash[lastIndex] != lastIndex) {
                    lastIndex = hash[lastIndex];
                    tmp.push_back(nums[lastIndex]);
                }
                return tmp;
        }
    };