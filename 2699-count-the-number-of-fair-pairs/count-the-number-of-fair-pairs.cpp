class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        long long ans = 0;
        for(int i = 0; i < n; i++) {
            int l = lower - nums[i];
            int r = upper - nums[i];
            
            auto lb = lower_bound(nums.begin() + i + 1, nums.end(), l);
            auto ub = upper_bound(nums.begin() + i + 1, nums.end(), r);

            int left = lb-nums.begin();
            int right = ub-nums.begin();

            cout << nums[i] << " " << left << " " << right << endl;
            
            ans += (ub - lb);  
        }
        return ans;
    }
};
