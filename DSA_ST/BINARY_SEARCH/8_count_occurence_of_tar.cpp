#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
      int countFreq(vector<int>& arr, int target) {
          // code here
          int l = lower_bound(arr.begin(), arr.end(), target) - arr.begin();
          int r = upper_bound(arr.begin(), arr.end(), target) - arr.begin();
          
          if(arr[l] == target) return r-l;
          else return 0;
      }
  };
  