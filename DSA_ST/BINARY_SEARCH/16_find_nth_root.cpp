#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
      int nthRoot(int n, int m) {
          // Code here
          int low = 1;
          int high = m;
          
          int ans = -1;
          while(low <= high) {
              int mid = low + (high-low)/2;
              if(pow(mid, n) == m) {
                  ans = mid;
                  return ans;
              }
              if(pow(mid, n) < m) {
                  low = mid + 1;
              }
              else {
                  high = mid - 1;
              }
          }
          return ans;
      }
  };