#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int jump(vector<int>& nums) {
            int cnt = 0;
            int n = nums.size();
            int front = 0;
            int curr_end = 0;
            for(int i = 0; i < n-1; i++) {
                front = max(front, i+nums[i]);
    
                if(i == curr_end) {
                    cnt++;
                    curr_end = front;
                }
                if(curr_end >= n-1) break;
            }
            return cnt;
        }
    };