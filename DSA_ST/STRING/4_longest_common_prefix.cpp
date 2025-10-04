#include <bits/stdc++.h>
using namespace std;

/*
Input: strs = ["flower","flow","flight"]
Output: "fl"
*/

class Solution {
    public:
        string longestCommonPrefix(vector<string>& strs) {
            string ans = strs[0];
            for(auto s: strs) {
                string temp = "";
                for(int i=0; i<min(s.size(), ans.size()); i++) {
                    if(s[i] == ans[i]) {
                        temp += s[i];
                    }
                    else break;
                }
                ans = temp;
                temp = "";
            }
            return ans;
        }
    };