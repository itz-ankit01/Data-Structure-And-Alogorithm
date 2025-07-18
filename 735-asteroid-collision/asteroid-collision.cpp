class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<pair<int, int>> st;
        int n = asteroids.size();

        st.push({asteroids[n - 1], asteroids[n - 1] / abs(asteroids[n - 1])});

        for (int i = n - 2; i >= 0; i--) {
            int z = asteroids[i];
            int dir = z / abs(z);  // direction: +1 or -1

            while (!st.empty() && st.top().second == -1 && dir == 1 && z > abs(st.top().first)) {
                st.pop();
            }

            if (!st.empty() && st.top().second == -1 && dir == 1) {
                // Possible collision
                int topVal = abs(st.top().first);
                if (topVal == z) {
                    st.pop(); // both destroy
                } else if (topVal > z) {
                    // top survives, do nothing
                } else {
                    // current survives
                    st.pop(); // remove top
                    st.push({z, dir});
                }
            } else {
                // No collision, safe to push
                st.push({z, dir});
            }
        }

        vector<int> ans;
        while (!st.empty()) {
            ans.push_back(st.top().first);
            st.pop();
        }
        
        return ans;
    }
};
