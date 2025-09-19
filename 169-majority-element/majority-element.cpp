class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // moore voting algo 
        int cnt = 0, curEl = 0;
        int n = nums.size();

        for(int i = 0; i < n; i++){
            if(cnt == 0) {
                cnt = 1;
                curEl = nums[i];
            }
            else if(curEl == nums[i])cnt++;
            else cnt--;
        }

        return curEl;
    }
};