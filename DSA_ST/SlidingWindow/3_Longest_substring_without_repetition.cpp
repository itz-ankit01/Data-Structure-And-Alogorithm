#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int lengthOfLongestSubstring(string s) {
            vector<int> hash(256, 0);
            int i = 0, j = 0;
            int maxLen = 0;
    
            while (j < s.size()) {
                hash[s[j]]++;
    
                while (hash[s[j]] > 1) {
                    hash[s[i]]--;
                    i++;
                }
    
                maxLen = max(maxLen, j - i + 1);
                j++;
            }
    
            return maxLen;
        }
    };
    