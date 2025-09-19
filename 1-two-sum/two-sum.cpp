class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int z=0,x=0;
        int n = nums.size();

        vector<int> ans;

        map<int, int> mp;
        for(int i=0; i<n; i++) {
            mp[nums[i]]++;
        }
        for(int i=0; i<n; i++) {
            int k = target-nums[i];
            if(mp.find(k) != mp.end()) {
                if(k!=nums[i]) {
                    ans.push_back(i);
                    for(int j = i+1; j<n; j++) {
                        if(nums[j] == k){
                            ans.push_back(j);
                            return ans;
                        }
                    }
                } else {
                    if(mp[k] > 1) {
                        ans.push_back(i);
                        for(int j = i+1; j<n; j++) {
                            if(nums[j] == k){
                                ans.push_back(j);
                                return ans;
                            }
                        }
                    }
                }
            }

        }
        return {};
    }
};