#include<bits/stdc++.h>
using namespace std;

class Solution {

    void fun(vector<int> &arr, vector<int> &dp1) {
        int n = arr.size();
        for(int i=0; i<n; i++) {
            for(int j=0; j<i; j++) {
                if(arr[i] > arr[j] && dp1[i] < 1 + dp1[j]) {
                    dp1[i] = 1 + dp1[j];
                }
            }
        }
    }

    public:
      int LongestBitonicSequence(vector<int> arr) {
          vector<int> nums = arr;
          reverse(nums.begin(), nums.end());
          int n = nums.size();

          vector<int> dp1(n, 1), dp2(n, 1);

          fun(arr, dp1);
          fun(nums, dp2);

          reverse(dp2.begin(), dp2.end());
          
          int mx = 0;
          for(int i=0; i<n; i++) {
            mx = max(mx, dp1[i]+dp2[i]-1);
          }
          return mx;
      }
  };
  