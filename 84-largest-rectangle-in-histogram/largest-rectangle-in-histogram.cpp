class Solution {
    void NSL(vector<int>&heights, vector<int> &left, int n) {
        stack<pair<int, int>> st;
        int pidx = -1;
        for(int i = 0; i < n; i++) {
            while(!st.empty() && st.top().first >= heights[i]) {
                st.pop();
            }
            if(st.size() == 0) left.push_back(pidx);
            else left.push_back(st.top().second);

            st.push({heights[i], i});
        }
    }

    // NSR
    void NSR(vector<int> &heights, vector<int> &right, int n) {
        stack<pair<int, int>> st;
        int pidx = n;
        for(int i = n-1; i >= 0; i--) {
            while(!st.empty() && st.top().first >= heights[i]) {
                st.pop();
            }
            if(st.size() == 0) right.push_back(pidx);
            else right.push_back(st.top().second);

            st.push({heights[i], i});
        }
        reverse(right.begin(), right.end());
    }
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> left;
        vector<int> right;

        // NSL
        NSL(heights, left, n);
        // NSR
        NSR(heights, right, n);

        int ans = 0;
        for(int i = 0; i < n; i++) {
            int v = right[i] - left[i] - 1;
            ans = max( ans, v*heights[i]);
        }
        return ans;
    }
};