#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
      vector<int> minPartition(int N) {
          vector<int> coins = {2000, 500, 200, 100, 50, 20, 10, 5, 2, 1}; 
          vector<int> result;
  
          for (int coin : coins) {
              while (N >= coin) {
                  N -= coin;
                  result.push_back(coin);
              }
          }
          return result;
      }
  };
  