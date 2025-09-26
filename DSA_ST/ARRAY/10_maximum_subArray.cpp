#include <bits/stdc++.h>
using namespace std;


class Solution {
    public:
        int maxSubArray(vector<int>& nums) {
            int n = nums.size();
            int sum = 0;
            int ans = INT_MIN;
    
            int start = 0, s = 0, e = 0;  // start = temp start, s,e = best indices
    
            for(int i = 0; i < n; i++) {
                sum += nums[i];
    
                if(sum > ans) {
                    ans = sum;
                    s = start;
                    e = i;
                }
    
                if(sum < 0) {
                    sum = 0;
                    start = i + 1;
                }
            }
    
            // If you want indices: (s, e) is the max subarray
            return ans;
        }
    };
    