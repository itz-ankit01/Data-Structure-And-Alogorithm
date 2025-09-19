class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();

        int ans = 1; int cur = 1;
        int el = nums[0];
        for(int i=1; i<n; i++) {
            if(nums[i] == nums[i-1]) cur++;
            else if(ans < cur) {
                ans = cur;
                cur = 1;
                el = nums[i-1];
            }
        }

        if(ans < cur) {
            ans = cur;
            el = nums[n-1];
        }

        return el;
    }
};