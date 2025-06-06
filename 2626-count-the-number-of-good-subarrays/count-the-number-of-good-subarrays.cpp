class Solution {
public:
    long long countGood(vector<int>& nums, int k) {
        long long ans = 0;
        int i = 0, j = 0;
        long long pairs = 0;
        int n = nums.size();
        unordered_map<int, int> mp;
        while( j < n) {
            pairs += mp[nums[j]];
            mp[nums[j]]++;
            while(pairs >= k) {
                ans += (n-j);
                mp[nums[i]]--;
                pairs -= mp[nums[i]];
                i++;
            }
            j++;
        }
        return ans;
    }
};