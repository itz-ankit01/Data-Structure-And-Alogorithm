#include <bits/stdc++.h>
using namespace std;
class Solution {
    
    
    bool canBePlaced(vector<int>&stalls, int k, int diff) {
        int n = stalls.size();
        int cnt = 1;
        int el = stalls[0];
        for(int i=1; i<n; i++) {
            if(stalls[i] - el >= diff) {
                cnt++;
                el = stalls[i];
            }
            
            if(cnt >= k) return true;
        }
        return false;
    }
    
  public:
    int aggressiveCows(vector<int> &stalls, int k) {

        int n = stalls.size();
        
        // order does not matter
        sort(stalls.begin(), stalls.end());
        
        int low = 1;
        int high = stalls[n-1] - stalls[0];
        
        int ans = 0;
        
        while(low <= high) {
            int mid = low + (high-low)/2;
            if(canBePlaced(stalls, k, mid) == true) {
                ans = mid;
                low = mid + 1;
            }
            else high = mid - 1;
        }
        return ans;
    }
};

/**
 * we have stalls -> position 
 * k -> no of cows
 * distnace should be min
 * 
 * array would be sorted as order does not matter
 * low = 1 
 * high = diff of (max -min) , that would be the largest gap
 * 
 * now for mid = (low + high) / 2;
 * we will check if is possible to maintain minimum distance as mis
 * 
 * if yes -> it can be ans, but look for higher value (remove left half)
 * if No -> remove the right half
 * 
 * check fun -> greedily check -> array already sorted -> fix one cow at 0th index can can be possible to fix k cows
 * 
 */