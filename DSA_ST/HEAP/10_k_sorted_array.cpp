#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
      string isKSortedArray(int arr[], int n, int k) {
          
          priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
          
          for(int i=0; i<n; i++) {
              pq.push({arr[i], i});
          }
          
          int cnt = 0;
          while(!pq.empty() ) {
              auto it = pq.top();
              pq.pop();
              if(abs(it.second - cnt) > k) {
                  return "No";
              }
              cnt++;
          }
          return "Yes";
      }
  };
  