#include <bits/stdc++.h>
using namespace std;

class Solution {

    /*
    the idea is in roman, if smaller number comes before larger it means subtraction

    Input: s = "MCMXCIV"
    Output: 1994
    Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.
    */
    public:
        int romanToInt(string s) {
            unordered_map<char, int> mp;
            mp['I'] = 1;
            mp['V'] = 5;
            mp['X'] = 10;
            mp['L'] = 50;
            mp['C'] = 100;
            mp['D'] = 500;
            mp['M'] = 1000;
    
            int ans = 0;
            for(int i=0; i<s.size()-1; i++) {
                if(mp[s[i]] < mp[s[i+1]]) {
                    ans -= mp[s[i]];
                }
                else ans += mp[s[i]];
            }
    
            ans += mp[s.back()];
            return ans;
        }
    };