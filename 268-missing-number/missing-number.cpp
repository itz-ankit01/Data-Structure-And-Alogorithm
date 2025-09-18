class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();

        int k = (n * (n+1)) / 2;
        int s = 0;
        for(int i: nums) s+=i;

        return k-s;



    }
};