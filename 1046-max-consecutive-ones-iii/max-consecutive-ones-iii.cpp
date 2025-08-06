class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int j=0, i=0;
        int cnt = 0;
        int ans = 0;
        int n = nums.size();
        if(k == 0) {
            int c=0, ans = 0;
            for(int i=0; i<n; i++) {
                if(nums[i] == 1) c++;
                else {
                    ans = max(ans, c);
                    c=0;
                }
            }
            return max(ans, c);
        }
        while(j < n) {
            if(nums[j] == 1) {
                j++;
            }
            else if(nums[j] == 0 && k > 0) {
                j++;
                k--;
            }
            else {
                while(k == 0 && i < j) {
                    if(nums[i] == 1) {
                        i++;
                    }
                    else {
                        k++;
                        i++;
                    }
                }
            }
            ans = max(ans, j-i);
        }

        return ans;
    }
};