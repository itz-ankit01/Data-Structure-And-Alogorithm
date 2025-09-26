class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left=0, right=0;
        int zero = 0;
        int n = nums.size();
        int maxLength = 0;

        while(right < n) {
            if(nums[right] == 0) zero++;
            
            if(zero > k) {
                if(nums[left] == 0) zero--;
                left++;
            }
            if(zero <= k) {
                maxLength = max(maxLength, right-left+1);
            }
            right++;
            
        }
        return maxLength;
    }
};