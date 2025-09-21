class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        set<vector<int>> st; 

        for(int i = 0; i < n; i++) {
            for(int j = i+1; j < n; j++) {
                set<long long> hashset;
                for(int k = j+1; k < n; k++) {
                    long long sum = 1LL * target - nums[i] - nums[j] - nums[k];

                    if(hashset.find(sum) != hashset.end()) {
                        vector<int> v = {nums[i], nums[j], nums[k], (int)sum};
                        sort(v.begin(), v.end());  
                        st.insert(v);             
                    }
                    hashset.insert(nums[k]); 
                }
            }
        }

     
        vector<vector<int>> ans(st.begin(), st.end());
        return ans;
    }
};
