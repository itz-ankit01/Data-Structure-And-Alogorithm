class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;
        int n = num.size();
        for(int i = 0; i < n; i++) {
            while(!st.empty() && (st.top()-'0') > (num[i] - '0') && k > 0) {
                st.pop();
                k--;
            }
            st.push(num[i]);
        }

        if(k == n || st.empty()) return "0";

        while(k > 0) {
            st.pop();
            k--;
        }

        string ans;
        while(!st.empty()) {
            ans += st.top();
            st.pop();
        }

        reverse(ans.begin(), ans.end());

        while(ans.size() > 0 && ans[0] == '0') {
            ans.erase(ans.begin());
        }

        if(ans.size() == 0) return "0";
        return ans;
    }
};