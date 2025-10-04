#include <bits/stdc++.h>
using namespace std;

/*
Input: num = "35427"
Output: "35427"
*/

class Solution {
    public:
    string largestOddNumber(string num) {
        int n = num.size();
        string ans = "";
        string cur = "";
        for(char ch: num) {
            cur += ch;
            if((ch-'0') & 1) {
                ans += cur;
                cur = "";
            }
        }
        return ans;  
    }
};