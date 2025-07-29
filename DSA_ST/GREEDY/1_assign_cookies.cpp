#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int findContentChildren(vector<int>& g, vector<int>& s) {
            sort(g.begin(), g.end());
            sort(s.begin(), s.end());
    
            int n = g.size();
            int m = s.size();
            int cnt = 0;
            while(m > 0 && n > 0) {
                if(s[m-1] >= g[n-1]) {
                    cnt++;
                    m--; n--;
                }
                else {
                    n--;
                }
            }
            return cnt;
        }
    };