class Solution {
    void NSR(vector<int> &arr, vector<int> &nsr) {
        int n = arr.size();
        nsr.resize(n);
        stack<pair<int, int>> st;
        for(int i = n - 1; i >= 0; i--) {
            while(!st.empty() && st.top().first >= arr[i]) st.pop();
            nsr[i] = st.empty() ? n : st.top().second;
            st.push({arr[i], i});
        }
    }

    void NSL(vector<int> &arr, vector<int> &nsl) {
        int n = arr.size();
        nsl.resize(n);
        stack<pair<int, int>> st;
        for(int i = 0; i < n; i++) {
            while(!st.empty() && st.top().first > arr[i]) st.pop();
            nsl[i] = st.empty() ? -1 : st.top().second;
            st.push({arr[i], i});
        }
    }

public:
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        vector<int> nsr, nsl;
        NSR(arr, nsr);
        NSL(arr, nsl);

        int mod = 1e9 + 7;
        long long ans = 0;

        for(int i = 0; i < n; i++) {
            long long left = i - nsl[i];
            long long right = nsr[i] - i;
            long long contrib = (left * right) % mod * arr[i] % mod;
            ans = (ans + contrib) % mod;
        }

        return ans;
    }
};
