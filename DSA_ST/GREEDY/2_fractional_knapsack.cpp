#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
      double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
          int n = val.size();
          
          // pair = {value per weight ratio, index}
          vector<pair<double, int>> v;
          for(int i = 0; i < n; i++) {
              double ratio = (double)val[i] / wt[i];
              v.push_back({ratio, i});
          }
          
          // Sort in descending order of ratio
          sort(v.begin(), v.end(), [](pair<double,int> &a, pair<double,int> &b){
              return a.first > b.first;
          });
          
          double ans = 0.0;
          for(auto &it : v) {
              int idx = it.second;
              if(capacity >= wt[idx]) {
                  ans += val[idx];
                  capacity -= wt[idx];
              } else {
                  ans += val[idx] * ((double)capacity / wt[idx]);
                  break;
              }
          }
          return ans;
      }
  };
  