#include <bits/stdc++.h>
using namespace std;


class Solution {
    bool heapify(int arr[], int n, int i) {
        int largest = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;
        
        if(left < n && arr[left] > arr[i]) largest = left;
        if(right < n && arr[right] > arr[i]) largest = right;
        
        if(largest != i) {
            // swap(arr[i], arr[largest])
            // heapify(arr, n, largest);
            return false;
        }
        return true;
    }
  public:
    bool isMaxHeap(int arr[], int n) {
        
        for(int i = n/2-1; i >=0; i--) {
            if(heapify(arr, n, i) == false) {
                return false;
            }
        }
        return true;
    }
};