#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> maxSlidingWindow(vector<int> &nums, int k){
        vector<int> ans;
        deque<int> q;
        for (int i = 0, j = 0; i < nums.size(); i++){
            if (q.empty()){
                q.push_back(nums[i]);
            }
            else if (q.back() >= nums[i]){
                q.push_back(nums[i]);
            }
            else{
                while (q.back() < nums[i]){
                    q.pop_back();
                    if (q.empty())
                        break;
                }
                q.push_back(nums[i]);
            }

            if (i - j + 1 == k){
                ans.push_back(q.front());
                if (nums[j] == q.front()){
                    q.pop_front();
                }
                j++;
            }
        }
        
        return ans;
    }
};