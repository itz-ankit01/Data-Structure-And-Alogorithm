class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 1;
        int n = nums.size();

        for(int i = 1; i < n; i++) {
            if(nums[i] != nums[i-1]) k++;
        }

        int i = 0, j = 1;

        while( j < n ) {
            while(j < n && nums[j-1] == nums[j]) j++;
            
            if(j < n) {
                nums[i+1] = nums[j];
                j++;
            }
          
            i++;
        } 

        return k;
    }
};