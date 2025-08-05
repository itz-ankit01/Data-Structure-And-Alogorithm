#include <bits/stdc++.h>
using namespace std;

// -----------------------



class Solution {
    public:
      // Function to find the minimum number of platforms required at the
      // railway station such that no train waits.
      int findPlatform(vector<int>& arr, vector<int>& dep) {
          
          vector<pair<int, char>> vp;
          int n = arr.size();
          for(int i = 0; i < n; i++) {
              vp.push_back({arr[i], 'a'});
          }
          
          for(int i = 0; i < n; i++) {
              vp.push_back({dep[i], 'd'});
          }
          
          int ans = 0;
          sort(vp.begin(), vp.end());
          int platform = 0;
          for(int i = 0; i < vp.size(); i++) {
              
              if(vp[i].second == 'a') ans++;
              else ans--;
              
              platform = max(platform, ans);
          }
          return platform;
          
      }
  };
  