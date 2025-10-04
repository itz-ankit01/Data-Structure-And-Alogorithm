#include <bits/stdc++.h>
using namespace std;

/*
Input: s = "abcde", goal = "cdeab"
Output: true
*/

class Solution {
    public:
        bool rotateString(string s, string goal) {
            int n = s.size();
            if (n != (int)goal.size()) return false;
            for (int k = 0; k < n; ++k) {
                // check rotation by k (or use substr)
                bool ok = true;
                for (int i = 0; i < n; ++i) {
                    if (s[i] != goal[(i + k) % n]) { ok = false; break; }
                }
                if (ok) return true;
            }
            return n == 0; // both empty => true
        }
    };
    