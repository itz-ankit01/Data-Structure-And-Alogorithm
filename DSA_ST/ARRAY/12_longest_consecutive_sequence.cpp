#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
  
      // Function to return length of longest subsequence of consecutive integers.
      int longestConsecutive(vector<int>& arr) {
        
        int n = arr.size();
        int longest = INT_MIN;

        unordered_set<int> st;
        for(auto it: arr) st.insert(it);

        int ct = 0;
        for(auto it: st) {
            if(st.find(it-1) == st.end()) {
                ct = 1;
                int x = it;

                while(st.find(x+1) != st.end()) {
                    ct++;
                    x++;
                }
                longest = max(longest, ct);
            }
        }
        return longest;
          
      }
  };