class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        for(auto it: asteroids) {
            while(!st.empty() && it < 0 && abs(it) > st.top() && st.top() > 0) {
                st.pop();
            }
            if(!st.empty() && st.top() > abs(it) && it < 0) continue;
            if(st.size() == 0) st.push(it);
            else if(st.top() == abs(it) && it < 0) {
                st.pop();
            }
            else st.push(it);
        }
        vector<int> ans;
        while(!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};