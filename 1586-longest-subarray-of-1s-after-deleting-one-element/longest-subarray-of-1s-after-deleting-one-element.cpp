class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int countZero = 0, mx = 0;
        for(int j = 0; j < n; j++) {
            if(nums[j] == 0) countZero++;

            while(countZero > 1) {
                if(nums[i] == 0) countZero--;
                i++;
            }

            mx = max(mx, j-i);
        }
        return mx;
    }
};