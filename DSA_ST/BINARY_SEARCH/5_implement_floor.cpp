#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
      int findFloor(vector<int>& arr, int x) {
          // code here
          int ans = -1;
          
          int n = arr.size();
          int low = 0;
          int high = n-1;
          
          while(low <= high) {
              int mid = low + (high-low)/2;
              
              if(arr[mid] > x) {
                   high = mid-1;
              }
              else if(arr[mid] <= x) {
                  ans = mid;
                  low = mid + 1;
              }
          }
          return ans;
      }
  };
  