#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
      int inversionCount(vector<int> &arr) {
          // Code Here
          int n = arr.size();
          
          int cnt = 0;
          
          for(int i = 0; i < n; i++) {
              for(int j = i+1; j < n; j++) {
                  if(arr[i] > arr[j]) cnt++;
              }
          }
          
          return cnt;
      }
  };

// ----------------------- it will be done using mergeSort -------------------

class Solution {
    int cnt = 0;
    void merge(vector<int>&arr, int low, int mid, int high) {
        vector<int> temp;
        
        int left = low;
        int right = mid+1;
        
        while(left <= mid && right <= high) {
            if(arr[left] <= arr[right]) {
                temp.push_back(arr[left]);
                left++;
            }
            else {
                temp.push_back(arr[right]);
                cnt += (mid - left + 1);
                right++;
            }
        }
        
        while(left <= mid) {
            temp.push_back(arr[left]);
            left++;
        }
        
        while(right <= high) {
            temp.push_back(arr[right]);
            right++;
        }
        
        for(int i = low; i <= high; i++) {
            arr[i] = temp[i-low];
        }
    }
    
    void mergeSort(vector<int> &arr, int low, int high) {
        if(low >= high) return;
        int mid = (low + high) / 2;
        
        mergeSort(arr, low, mid);
        mergeSort(arr, mid+1, high);
        merge(arr, low, mid, high);
    }
  public:
    int inversionCount(vector<int> &arr) {
        
        int n = arr.size();
        mergeSort(arr, 0, n-1);
        
        return cnt;
    }
};

