class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        int i = 0, j = 0;
        int n = nums.size();
        long long ans = 0;

        while(j < n) {
            if(nums[j] == 0) j++;
            else {
                long long k = j - i;
                ans += ((k * (k+1))/2);
                j++;
                i = j;
            }
        }
        if(i!=j) {
            long long k = j - i;
            ans += ((k * (k+1))/2);
        }
        return ans;
    }
};