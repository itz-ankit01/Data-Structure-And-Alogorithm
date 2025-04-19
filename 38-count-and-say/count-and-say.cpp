class Solution {
    string fun(string s) {
        string ans = "";
        char ch = s[0];
        int cnt = 1;  
        for(int i = 1; i < s.size(); i++) {
            if(s[i] == ch) {
                cnt++;
            }
            else {
                ans += to_string(cnt);  
                ans += ch;              
                ch = s[i];            
                cnt = 1;               
            }
        }
        ans += to_string(cnt);  
        ans += ch;             
        return ans;
    }

public:
    string countAndSay(int n) {
        string ans = "1";
        for(int i = 2; i <= n; i++) {
            ans = fun(ans);
        }
        return ans;
    }
};
