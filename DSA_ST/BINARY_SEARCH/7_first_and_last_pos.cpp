#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        vector<int> searchRange(vector<int>& nums, int target) {
            int l = -1, r = -1;
    
            int n = nums.size();
            int low = 0;
            int high = n-1;
            int ans = -1;
    
            while(low <= high) {
                int mid = low+(high-low)/2;
    
                if(nums[mid] > target) {
                    high = mid-1;
                }
                else if(nums[mid] < target){
                    low = mid+1;
                }
                else {
                    ans = mid;
                    break;
                }
            }
            if(ans == -1) return {-1, -1};
            l = ans, r = ans;
            while(l>0 && nums[l-1] == target)l--;
            while(r+1<n && nums[r+1] == target)r++;
    
            return {l,r};
        }
    };