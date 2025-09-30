#include <bits/stdc++.h>
using namespace std;

/*
Input: nums = [1,1,2,3,3,4,4,8,8]
Output: 2
*/

class Solution {
    public:
        int singleNonDuplicate(vector<int>& nums) {
            int n = nums.size();
    
            int low = 0;
            int high = n-1;
    
            int ans = -1;
            while(low <= high) {
                int mid = low + (high-low)/2;
                // right half
                if(mid + 1 < n && nums[mid] == nums[mid+1]) {
                    int sz = high-mid+1;
                    // even size -> no unique element
                    if(sz%2 == 0) {
                        high = mid-1;
                    }
                    // unique is present, low = mid+1 -> wrong -> we hv to keep duplicate pair otherwise it will act as unique in new search box
                    else low = mid;
                }
                // left half
                else if(mid - 1 >= 0 && nums[mid] == nums[mid-1]) {
                    int sz = mid - low + 1;
                    if(sz % 2 == 0) low = mid + 1;
                    // unique is present, high = mid+1 -> wrong -> we hv to keep duplicate pair otherwise it will act as unique in new search box
                    else high = mid;
                }
                else return nums[mid];
            }
            return 1;
        }
    };