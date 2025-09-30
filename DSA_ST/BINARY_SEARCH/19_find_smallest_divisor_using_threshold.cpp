#include <bits/stdc++.h>
using namespace std;

class Solution {
    int fun(vector<int>&nums, int div) {
        int ans = 0;
        for(int i=0; i < nums.size(); i++) {
            ans += (nums[i] + div - 1)/div;
        }
        return ans;
    }
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int low = 1;
        int high = *max_element(nums.begin(), nums.end());
        int ans = -1;
        while(low <= high) {
            int mid = low + (high-low)/2;
            int val = fun(nums, mid);

            if(val <= threshold) {
                ans = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        return ans;
    }
};

/*
low = 1;
high = maxEl;
mid = (low+high)/2
val = fun(nums, thres, mid);

if(val <= thre){
    ans = val;
    high = mid-1;
}
else low = mid+1;

*/