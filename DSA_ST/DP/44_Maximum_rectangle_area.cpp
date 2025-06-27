#include <bits/stdc++.h>
using namespace std;

class Solution {
    int maxArea(vector<int> &nums) {
        int n = nums.size();
        stack<pair<int, int>> st;
        int pi = -1;
        vector<int> left;
        // NSL
        for(int i=0; i<n; i++) {
            if(st.size() == 0) {
                left.push_back(pi);
            }
            else if(st.size() > 0 && st.top().first < nums[i]) {
                left.push_back(st.top().second);
            }
            else if(st.size() > 0 && st.top().first >= nums[i]) {
                while(st.size() > 0 && st.top().first >= nums[i]) {
                    st.pop();
                }
                if(st.size() == 0) {
                    left.push_back(pi);
                }
                else left.push_back(st.top().second);
            }
            st.push({nums[i], i});
        }

        // NSR
        stack<pair<int, int>> st2;
        pi = nums.size();
        vector<int> right;
        for(int i=n-1; i>=0; i--) {
            if(st2.size() == 0) {
                right.push_back(pi);
            }
            else if(st2.size() > 0 && st2.top().first < nums[i]) {
                right.push_back(st2.top().second);
            }
            else if(st2.size() > 0 && st2.top().first >= nums[i]) {
                while(st2.size() > 0 && st2.top().first >= nums[i]) {
                    st2.pop();
                }
                if(st2.size() == 0) {
                    right.push_back(pi);
                }
                else right.push_back(st2.top().second);
            }
            st2.push({nums[i], i});
        }

         reverse(right.begin(), right.end());

        int maxA = 0;
        for(int i=0; i<n; i++) {
            maxA = max(maxA, (right[i]-left[i]-1)*nums[i]);
        }
        return maxA;
    }
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n = matrix[0].size();
        int m = matrix.size();
        vector<int> tmp(n, 0);

        int maxA = 0;

        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                if(matrix[i][j] == '1') {
                    tmp[j] += 1;
                }
                else tmp[j] = 0;
            }
            maxA = max(maxA, maxArea(tmp));
            

        }
        return maxA;

    }
};