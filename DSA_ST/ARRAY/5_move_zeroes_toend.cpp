#include <bits/stdc++.h>
using namespace std;

/**
 * Input: nums = [0,1,0,3,12]
   Output: [1,3,12,0,0]
 */

class Solution {
    public:
        void moveZeroes(vector<int>& nums) {
            int n = nums.size();
            int k = 0;
            for(int i = 0; i < n; i++) {
                if(nums[i] != 0) {
                    nums[k++] = nums[i];
                }
            }
    
            for(int i = k; i < n; i++) nums[i] = 0;
     
        }
    };