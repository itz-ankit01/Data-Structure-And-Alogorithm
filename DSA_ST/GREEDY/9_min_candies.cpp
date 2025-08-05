#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int candy(vector<int>& ratings) {
            
            int n = ratings.size();
    
            vector<int> nums(n, 1);
    
            // left to right
            for(int i=1; i<n; i++) {
                if(ratings[i] > ratings[i-1]) {
                    nums[i] = nums[i-1] + 1;
                }
            }
    
            // right to left but update when greater candies
            for(int i = n-2; i>=0; i--) {
                if(ratings[i] > ratings[i+1]) {
                    nums[i] = max(nums[i], nums[i+1]+1);
                }
            }
    
            int candies = 0;
            for(int i=0; i<n; i++) candies += nums[i];
    
            return candies;
        }
    };