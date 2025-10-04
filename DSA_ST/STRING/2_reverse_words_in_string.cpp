#include <bits/stdc++.h>
using namespace std;

/*
Input: s = "the sky is blue"
Output: "blue is sky the"
*/

class Solution {
    public:
        string reverseWords(string s) {
            int n = s.size();
            int j = n-1;
            string ans = "";
            string temp = "";
            while(j>=0){
                if(s[j] != ' ') temp += s[j];
                // cout << temp << endl;
                if((s[j] == ' '|| j==0) && temp.size()>0) {
                    if(ans.size() > 0) ans += " ";
                    reverse(temp.begin(), temp.end());
                    ans += temp;
                    temp = "";
                }
                j--;
            }
            return ans;
        }
    };

// ------------------------- using stack DS ---------------------------

class Solution {
    public:
        string reverseWords(string s) {
            int n = s.size();
            int j = n-1;
            string ans = "";
            stack<string> st;
            s += ' ';
            string str = "";
            for(int i=0; i<s.size(); i++) {
                if(s[i] == ' ' && str.size() > 0){
                    st.push(str);
                    str = "";
                }
                else if(s[i] != ' ') str += s[i];
            }
            while(st.size() != 1) {
                ans += st.top() + " ";
                st.pop();
            }
            ans += st.top();
            return ans;
        }
    };