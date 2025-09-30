#include <bits/stdc++.h>
using namespace std;

/*'
logic : find the pos of min element, it's given that element is distinct
*/

class Solution {
    public:
      int findKRotation(vector<int> &arr) {
          // Code Here
          int n = arr.size();
          int ans = INT_MAX;
          int idx = -1;
          int low = 0;
          int high = n-1;
          
          while(low <= high) {
              int mid = low + (high-low)/2;
              if(arr[low] <= arr[mid]) {
                  if(ans > arr[low]) {
                      ans = arr[low];
                      idx = low;
                  }
                  low = mid + 1;
              }
              else {
                  if(ans > arr[mid]) {
                      ans = arr[mid];
                      idx = mid;
                  }
                  high = mid - 1;
              }
          }
          
          return idx;
      }
  };
  