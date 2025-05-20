class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int m = queries.size();
        int n = nums.size();

        vector<int> v(n, 0);
        for(int i=0; i<m; i++) {
            int l = queries[i][0];
            int r = queries[i][1];

            v[l] += 1;
            if(r+1 < n) v[r+1] -= 1;
        }
        for(int i=1; i<n; i++) {
            v[i] = v[i-1] + v[i];
        }

        
        for(int i=0;  i<n; i++) {
            if(nums[i] > v[i]) {
                return false;
            }
        }
        return true;
    }
};