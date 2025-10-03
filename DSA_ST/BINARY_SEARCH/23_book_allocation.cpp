#include <bits/stdc++.h>
using namespace std;

class Solution {
    
    bool isPossible(vector<int>& arr, int k, int val) {
        int n = arr.size();
        int students = 1;           // we use at least one student
        long long curr = 0;         // current student's accumulated pages
    
        for (int i = 0; i < n; ++i) {
            if (arr[i] > val) return false; // a single book exceeds val -> impossible
    
            if (curr + arr[i] <= val) {
                curr += arr[i];
            } else {
                students++;
                curr = arr[i];
            }
        }
    
        return students <= k; // true if we can allocate using at most k students
    }
    
      public:
        int findPages(vector<int> &arr, int k) {
            
            int n = arr.size();
            
            int ans = 0;
            int sum = 0;
            for(auto it: arr) sum += it;
            
            if(n < k) return -1;
            
            int low = *max_element(arr.begin(), arr.end());
            int high = sum;
            
            while(low <= high) {
                int mid = low + (high-low)/2;
                
                if(isPossible(arr, k, mid) == true) {
                    ans = mid;
                    high = mid - 1;
                }
                else low = mid + 1;
            }
            return ans;
        }
    };
    
    /*
    order does not matter -> sort
    
    low = max element
    high = sum of array (allocating all book to 1 student)
    
    we will have the mid ??
    
    for the mid we will check can be allocate this,
    
        if yes, then to minimise -> 
            high = mid - 1;
        if no
            low = mid + 1;
    */