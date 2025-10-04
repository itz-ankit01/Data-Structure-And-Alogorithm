#include <bits/stdc++.h>
using namespace std;

/*
Input: s = "(1+(2*3)+((8)/4))+1"

Output: 3

Explanation:

Digit 8 is inside of 3 nested parentheses in the string.
*/

class Solution {
    public:
        int maxDepth(string s) {
            int cnt = 0;
            int ans = 0;
            for(char ch : s) {
                if(ch == '(')cnt++;
                else if(ch == ')') cnt--;
    
                ans = max(ans, cnt);
            }
            return ans;
        }
    };