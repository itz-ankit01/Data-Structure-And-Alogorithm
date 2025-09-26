class Solution {
    int mex(vector<int>&nums) {
        unordered_set<int>s(nums.begin(), nums.end());
        int k=0;
        while(s.count(k))k++;
        return k;
    }
public:
    int missingNumber(vector<int>& nums) {
       return mex(nums);

    }
};