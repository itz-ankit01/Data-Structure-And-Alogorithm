#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        bool isAnagram(string s, string t) {
            vector<int> a(256,0);
            vector<int> b(256,0);
    
            if(s.size() != t.size()) return false;
    
            for(int i=0; i<s.size(); i++) {
                a[s[i]-'0']++;
                b[t[i]-'0']++;
            }
    
            return a==b;
        }
    };