#include <bits/stdc++.h>
using namespace std;

/*
Input: nums = [2,5,6,0,0,1,2], target = 0
Output: true

In the algorithm, we first check if arr[mid] is the target before identifying the sorted half.

If arr[mid] is not our target, we encounter this edge case. In this scenario, since arr[mid] = arr[low] = arr[high],

 it means that neither arr[low] nor arr[high] can be the target. 
 
 we simply remove arr[low] and arr[high] from our search space,
*/

class Solution {
    public:
        bool search(vector<int>& nums, int target) {
            int n = nums.size();
            int low = 0;
            int high = n-1;
    
            while(low <= high) {
                int mid = low + (high-low)/2;
                if(nums[mid] == target) return true;
                if(nums[mid] == nums[low]  && nums[mid] == nums[high]) {
                    low++;
                    high--;
                    continue;
                }
                if(nums[low] <= nums[mid]) {
                    if(nums[low] <= target && target <= nums[mid]) {
                        high = mid - 1;
                    }
                    else {
                        low = mid + 1;
                    }
                }
                else {
                    if(nums[mid] <= target && target <= nums[high]) {
                        low = mid + 1;
                    }
                    else {
                        high = mid - 1;
                    }
                }
            }
            return false;
        }
    };