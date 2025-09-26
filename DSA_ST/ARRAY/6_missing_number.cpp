#include <bits/stdc++.h>
using namespace std;

/*
Input: nums = [9,6,4,2,3,5,7,0,1]

Output: 8
*/

class Solution {
    int mex(vector<int>&nums) {
       unordered_map<int,int> mp(nums.begin(), nums.end());
       int k = 0;
       while(mp.count(k))k++;
       return k;
    }
public:
    int missingNumber(vector<int>& nums) {
       return mex(nums);

    }
};