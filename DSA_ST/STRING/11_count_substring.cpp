#include <bits/stdc++.h>
using namespace std;

/**
 * 
 * Logic is to calculate all the substring containing a,b,c ending at position i
 * Input:
 * abcabc
 * Output:
 * 10
 */

class Solution {
    public:
      int countSubstring(string s) {
          // Code here
          
          int n = s.size();
          int hash[3] = {-1, -1, -1};
          
          int ans = 0;
          
          for(int i=0; i<n; i++) {
              hash[s[i]-'a'] = i;
              if(hash[0] != -1 && hash[1] != -1 && hash[2] != -1) {
                  ans += 1 + min({hash[0], hash[1], hash[2]});
              }
          }
          return ans;
          
      }
  };
  
  