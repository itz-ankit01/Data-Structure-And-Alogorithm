#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
      int median(vector<vector<int>> &mat) {
          // code here
          multiset<int> st;
          int n = mat.size();
          int m = mat[0].size();
          
          for(int i=0; i<n; i++) {
              for(int j=0; j<m; j++) {
                  st.insert(mat[i][j]);
              }
          }
          int k = (m*n + 1)/2;
          for(auto ut: st) {
              k--;
              if(k==0) {
                  return ut;
              }
          }
          return -1;
      }
  };

  
// -------------------- using BS -------------------------

class Solution {
    
    int countSmall(vector<vector<int>> &mat, int k) {
        int cnt = 0;
        for(int i=0; i<mat.size(); i++) {
            cnt += upper_bound(mat[i].begin(), mat[i].end(), k) - mat[i].begin();
        }
        return cnt;
    }
    
  public:
    int median(vector<vector<int>> &mat) {
        // code here
        multiset<int> st;
        int n = mat.size();
        int m = mat[0].size();
        
        int k = (n*m) / 2;
        int low = INT_MAX, high = INT_MIN;
        for(int i=0; i<n; i++) {
            low = min(low, mat[i][0]);
            high = max(high, mat[i][m-1]);
        }
        
        while(low <= high) {
            int mid = low + (high-low)/2;
            int cntSmall = countSmall(mat, mid);
            
            if(cntSmall <= k) {
                low = mid + 1;
            }
            else high = mid - 1;
        }
        return low;
    }
};
