#include <bits/stdc++.h>
using namespace std;

// User function Template for C++

class Solution {
    void heapify(vector<int> &arr, int N, int i) {
        int largest = i;
        int left = 2*i+1;
        int right = 2*i+2;
        
        if(left < N && arr[left] > arr[largest]) largest = left;
        if(right < N && arr[right] > arr[largest]) largest = right;
        
        if(largest != i) {
            swap(arr[i], arr[largest]);
            heapify(arr, N, largest);
        }
    }
  public:
    void convertMinToMaxHeap(vector<int> &arr, int N) {
        for(int i = N/2-1; i>=0; i--) {
            heapify(arr, N, i);
        }
        
    }
};
