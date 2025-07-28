class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        map<int, int> mpp;
        for(auto it: nums) {
            mpp[it]++;
        }
        if(nums.size() % k != 0) return false;
        
        while(!mpp.empty()) {
            int start = mpp.begin() -> first;
            for(int i = 0; i < k; i++) {
                int z = start + i;
                if(mpp[z] == 0) return false;
                mpp[z]--;
                if(mpp[z] == 0) {
                    mpp.erase(z);
                }
            }
        }
        return true;
    }
};