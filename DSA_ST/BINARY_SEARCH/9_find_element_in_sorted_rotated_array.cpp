#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int search(vector<int>& nums, int target) {
            int n = nums.size();
            int low = 0;
            int high = n-1;
    
            int ans = -1;
            while(low <= high) {
                int mid = low + (high-low)/2;
                
                if(nums[mid] == target) {
                    ans = mid;
                    return ans;
                }
    
                if(nums[low] <= nums[mid]) {
                    if(nums[low] <= target && target <= nums[mid]) {
                        high = mid-1;
                    }
                    else {
                        low = mid + 1;
                    }
                }
                else if(nums[mid] <= nums[high]) {
                    if(nums[mid] <= target && target <= nums[high]) {
                        low = mid + 1;
                    }
                    else {
                        high = mid - 1;
                    }
                }
            }
    
            return ans;
        }
    };

    //  Though the array is rotated, we can clearly notice that for every index, one of the 2 halves will always be sorted. 