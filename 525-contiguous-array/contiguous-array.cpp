class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> mp;
        int ans = 0;

        int n = nums.size();
        int sum = 0;
        for(int i = 0; i < n; i++) {
            if(nums[i] == 0) sum += -1;
            else sum += 1;

            if(sum  == 0) {
                ans = i+1;
            }

            if(mp.find(sum) != mp.end()) {
                int len = i - mp[sum];
                ans = max(ans, len);
            }

            else mp[sum] = i;
        }

        return ans;
    }
};