#include <bits/stdc++.h>
using namespace std;

/**
 * Input: nums = [0,0,1,1,1,2,2,3,3,4]
 * Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]
 */

class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
            int n = nums.size();
            int i = 0, j = 1;
    
            while(j < n) {
                while(j< n && nums[i] == nums[j])j++;
                if(j < n) {
                    swap(nums[i+1], nums[j]);
                    i++;
                    j++;
                }
                
            }
            return i+1;
        }
    };