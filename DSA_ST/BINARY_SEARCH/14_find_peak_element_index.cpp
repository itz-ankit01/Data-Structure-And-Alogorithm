#include <bits/stdc++.h>
using namespace std;

/**
 * 
 * the idea is we have many local maxima, we will find mid,
 * if nums[mid] > nums[mid-1] && nums[mid] > nums[mid+1] , it would be my answer
 * else if nums[mid] < num[mid+1], we can find answer in right half
 * else if nums[mid] < nums[mid-1], we can find the answer in the left half;
 */

class Solution {
    public:
        int findPeakElement(vector<int>& nums) {
            int n = nums.size();
            int low = 0;
            int high = n-1;
    
            if(n==1) return 0;
    
            int ans = -1;
            while(low <= high) {
                int mid = low + (high-low)/2;
                if(mid == 0 && nums[mid] > nums[mid+1]) return mid;
                if(mid == n-1 && nums[mid] > nums[mid-1]) return mid;
                if(mid-1 >= 0 && nums[mid-1] < nums[mid] && mid+1 < n &&  nums[mid] > nums[mid+1]) {
                    return mid;
                }
                
                // right half
                else if(mid + 1 < n && nums[mid] < nums[mid+1]) {
                    low = mid + 1;
                }
                // left half
                else {
                    high = mid - 1;
                }
            }
            return ans;
        }
    };