#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
      int kthElement(vector<int> &a, vector<int> &b, int k) {
          
          if(a.size() > b.size()) {
              return kthElement(b, a, k);
          }
          
          int n = a.size();
          int m = b.size();
          
          int low = max(0, k-m), high = min(k, n);
          
          while(low <= high) {
              int Px = low + (high-low)/2;
              int Py = k - Px;
              
              // left half
              int x1 = (Px == 0) ? INT_MIN : a[Px - 1];
              int x2 = (Py == 0) ? INT_MIN : b[Py - 1];
              
              // right half
              int x3 = (Px == n) ? INT_MAX : a[Px];
              int x4 = (Py == m) ? INT_MAX : b[Py];
              
              if(x1 <= x4 && x2 <= x3) {
                  return max(x1,x2);
              }
              else if(x1 > x4) {
                  high = Px - 1;
              }
              else {
                  low = Px + 1;
              }
          }
          return -1;
      }
  };
  
  /**
   * 
   * Always keep k elements in the left half
   * 
   * [1,5] [2,2,3,3,4,5]
   * 
   * 
   * we are implemneting BS on Array a
   * 
   * low = 0 (wrong)
   * a[5], b[6] -> total = 11 elements k = 7
   * 
   * if low = 0;
   * if we take all 5 ele from b then we will still need 2 el from a
   * low = max(0, k-m);
   * 
   * if k = 2;
   * high = n(wrong) we do not need that much element 
   * high = min(k,n);
   * 
   **/