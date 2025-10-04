#include <bits/stdc++.h>
using namespace std;

/**
Input: s = "(()())(())"
Output: "()()()"
 */

class Solution {
    string fun(string &s, int i, int j) {
        string ans = "";
        for(int k=i; k<=j; k++){
            ans += s[k];
        }
        return ans;
    }
public:
    string removeOuterParentheses(string s) {
        int n = s.size();
        int cnt = 0;
        int i = 0, j = 0;
        string ans = "";
        while(j < n) {
            if(s[j]=='(')cnt++;
            else cnt--;

            if(cnt == 0) {
                ans += fun(s, i+1, j-1);
                i = j+1;
            }
            j++;
        }
        return ans;
    }
};