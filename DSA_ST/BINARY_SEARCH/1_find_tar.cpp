#include <bits/stdc++.h>
using namespace std;

class Solution {
    int bs(vector<int> &v, int low, int high, int tar) {
        int ans = -1;
        while(low <= high) {
            int mid = low + (high-low)/2;
            if(v[mid] > tar) {
                high = mid - 1;
            }
            else if(v[mid] < tar) {
                low = mid+1;
            }
            else {
                ans = mid;
                return ans;
            }
        }
        return ans;
    }
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        return bs(nums, 0, n-1, target);
    }
};