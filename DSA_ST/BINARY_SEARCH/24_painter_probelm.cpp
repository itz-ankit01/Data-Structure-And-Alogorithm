#include <bits/stdc++.h>
using namespace std;

class Solution {
    
    int fun(vector<int>&arr, int val) {
        int cnt = 1;
        int sum = 0;
        for(int i=0; i<arr.size(); i++) {
            if(sum + arr[i] <= val) {
                sum += arr[i];
            }
            else {
                cnt++;
                sum = arr[i];
            }
        }
        return cnt;
    }
  public:
    int minTime(vector<int>& arr, int k) {
        // code here
        
        int low = *max_element(arr.begin(), arr.end());
        int high = accumulate(arr.begin(), arr.end(), 0);
        int ans = INT_MAX;
        for(int i=low; i<=high; i++) {
            int val = fun(arr, i);
            if(val <= k) {
                ans = min(ans, i);
            }
        }
        return ans;
        
    }
};

// --------------------------BS ---------------------


class Solution {
    
    int fun(vector<int>&arr, int val) {
        int cnt = 1;
        int sum = 0;
        for(int i=0; i<arr.size(); i++) {
            if(sum + arr[i] <= val) {
                sum += arr[i];
            }
            else {
                cnt++;
                sum = arr[i];
            }
        }
        return cnt;
    }
  public:
    int minTime(vector<int>& arr, int k) {
        // code here
        
        int low = *max_element(arr.begin(), arr.end());
        int high = accumulate(arr.begin(), arr.end(), 0);
        int ans = INT_MAX;
        
        while(low <= high) {
            int mid = low + (high-low)/2;
            int val = fun(arr, mid);
            
            if(val <= k) {
                ans = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        return ans;
        
    }
};

/*
same problem like book allocation -> we have to partition
the subarray , so that it minimize the subarray sum for k


nums ->integers , int k -> split nums into k non empty subarray -> like book allocation
largest sum of the subarray will be minimized

same as book allocation problem

no sorting -> order matter
low = max element (largest sum would always be greater than equal to this)
high = sum of the array


we will find mid -> 
        and check if mid can be ans 
            if yes
                high = mid - 1 //look for smaller value
            else low = mid + 1; // look for larger value because it is making for than k parts


check fun: 
    we pass mid and check for all subarray that can form for <= mid

        it will return cnt -> of subarray

        if cnt <= k
            if cnt < val -> can be ans, because we can further, split the already created subarray, to balance the count
            if cnt == val -> this mid can be answer , look for minimum
        else 
            we are able to form more than k subarray with thid mid
            we have to increase mid -> low = mid + 1;
            
*/



