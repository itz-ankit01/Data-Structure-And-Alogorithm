#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
      vector<int> findTwoElement(vector<int>& arr) {
          // code here
          int n = arr.size();
          
          sort(arr.begin(), arr.end());
          int dup = 0;
          int miss = 0;
          int prev = 0;
          
          for(int i = 0; i < n; i++) {
              if(i>0 && arr[i] == arr[i-1]) {
                  dup = arr[i];
              }
              if(arr[i] - prev == 2) {
                  miss = prev+1;
              }
              prev = arr[i];
              
          }
          
          if(miss == 0) miss = n;
          
          return {dup, miss};
      }
  };