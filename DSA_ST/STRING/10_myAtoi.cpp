#include <bits/stdc++.h>
using namespace std;

/*
Input: s = " -042"

Output: -42

Explanation:

Step 1: "   -042" (leading whitespace is read and ignored)
            ^
Step 2: "   -042" ('-' is read, so the result should be negative)
             ^
Step 3: "   -042" ("042" is read in, leading zeros ignored in the result)
*/

class Solution {
    public:
        int myAtoi(string s) {
            int n = s.size();
            int sign = 1;
            long ans = 0;
            int i = 0;
            while(i<n && s[i] == ' ')i++;
    
            if(i<n && (s[i] == '+' || s[i] == '-')) {
                if(s[i] == '-') sign = -1;
                i++;
            }
    
            while(i<n && isdigit(s[i])) {
                ans = ans * 10 + (s[i]-'0');
    
                if(sign == 1 && ans > INT_MAX) {
                    return INT_MAX;
                }
                else if(sign == -1 && -ans < INT_MIN) {
                    return INT_MIN;
                }
                i++;
            }
    
            return (int)(ans*sign);
        }
    };