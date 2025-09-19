class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> v;
        int i = 0, j = 0;
        bool f = true;
        for(int k =0; k<n; k++) {

            if(f) {
                while( j < n && nums[j] < 0)j++;
                if(j<n)v.push_back(nums[j]);
                j++;
                f = !f;
            }
           

           else {
             while( i < n && nums[i] > 0) i++;
            if(i<n)v.push_back(nums[i]);
            i++;
            f = !f;
           }
        }

        return v;
    }
};