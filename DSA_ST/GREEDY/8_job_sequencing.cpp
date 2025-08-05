#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
      vector<int> jobSequencing(vector<int> &deadline, vector<int> &profit) {
          vector<pair<int, int>> v;
          int n = deadline.size();
          int mx = 0;
          for(int i=0; i<n; i++ ) {
              v.push_back({profit[i], deadline[i]});
              mx = max(mx, deadline[i]);
          }
          
          vector<int> nums(mx, 0);
          sort(v.begin(), v.end(), greater<pair<int,int>>());
          for(int i=0; i < v.size(); i++) {
              int dx = v[i].second;
              int pf = v[i].first;
              int j = dx-1;
              while(j>=0) {
                  if(nums[j] == 0) {
                      nums[j] = pf;
                      break;
                  }
                  j--;
              }
          }
          
          vector<int> ans;
          int tf = 0;
          int cnt = 0;
          for(int i = 0; i < nums.size(); i++) {
              if(nums[i] != 0) {
                  cnt++;
                  tf += nums[i];
              }
          }
          ans.push_back(cnt);
          ans.push_back(tf);
          
          return ans;
      }
  };


/// ------------------ Using Priority Queue ------------------ ///

class Solution {
    public:
      vector<int> jobSequencing(vector<int> &deadline, vector<int> &profit) {
          
          vector<pair<int, int>> v;
          int n = deadline.size();
          
          for(int i=0; i<n; i++ ) {
              v.push_back({deadline[i], profit[i]});
          }
          
          sort(v.begin(), v.end());
          
          priority_queue<int, vector<int>, greater<int>> pq;
          
          for(int i=0; i < n; i++) {
              if(pq.size() < v[i].first) {
                  pq.push(v[i].second);
              }
              
              else if(!pq.empty() && pq.top() < v[i].second) {
                  pq.pop();
                  pq.push(v[i].second);
              }
          }
          
          vector<int> ans(2);
          ans[0] = pq.size();
          
          while(!pq.empty()) {
              ans[1] += pq.top();
              pq.pop();
          }
          
          return ans;
      }
  };