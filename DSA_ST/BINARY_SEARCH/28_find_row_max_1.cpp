#include <bits/stdc++.h>
using namespace std;

// User function template for C++
class Solution {
    
    public:
      int rowWithMax1s(vector<vector<int>> &arr) {
          // code here
          int ans = INT_MAX;
          int n = arr.size();
          int res = -1;
          for(int i=0; i < n; i++) {
              auto it = upper_bound(arr[i].begin(), arr[i].end(), 0) - arr[i].begin();
              
              if(it < ans && it != arr[i].size()) {
                  ans = it;
                  res = i;
              }
          }
          return res;
      }
  };