class Solution {
public:
    bool canJump(vector<int>& nums) {
        priority_queue<int, vector<int>, greater<int> > minh;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != 0) {
                minh.push(i + nums[i]);
            }
            else {
                while(!minh.empty() && minh.top() <= i) {
                    minh.pop();
                }
            }
            if(minh.size() == 0 && i!= nums.size()-1) return false;
        }
        return true;
    }
};