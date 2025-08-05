#include <bits/stdc++.h>
using namespace std;

// User function Template for C++

//Back-end complete function Template for C++

class Solution {
    public:
      long long solve(vector<int>& bt) {
          // code here
          int ans = 0;
          int n = bt.size();
          
          sort(bt.begin(), bt.end());
          ans = bt[0];
          int prev = ans;
          for(int i=1; i<n-1; i++) {
              int curr = prev + bt[i];
              ans += curr;
              prev = curr;
          }
          
          return ans / n;
      }
  };