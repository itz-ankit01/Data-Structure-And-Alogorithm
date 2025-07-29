#include <bits/stdc++.h>
using namespace std;

// MaxHeap
class Heap {
public:
    vector<int> heap;
    int sz;

    Heap() {
        heap.push_back(-1); // index 0 is dummy
        sz = 0;
    }

    void insertion(int val) {
        sz++;
        if (heap.size() <= sz) heap.push_back(0); // resize if needed

        heap[sz] = val;
        int idx = sz;

        while (idx > 1) {
            int parent = idx / 2;
            if (heap[parent] < heap[idx]) {
                swap(heap[parent], heap[idx]);
                idx = parent;
            } else {
                break;
            }
        }
    }

    void printHeap() {
        for (int i = 1; i <= sz; i++) {
            cout << heap[i] << " ";
        }
        cout << endl;
    }

    void deletion() {
        if (sz == 0) {
            cout << "Heap is empty\n";
            return;
        }
    
        heap[1] = heap[sz];  // Replace root with last element
        sz--;                // Shrink heap
    
        int idx = 1;
        while (true) {
            int left = 2 * idx;
            int right = 2 * idx + 1;
            int largest = idx;
    
            if (left <= sz && heap[left] > heap[largest]) {
                largest = left;
            }
    
            if (right <= sz && heap[right] > heap[largest]) {
                largest = right;
            }
    
            if (largest != idx) {
                swap(heap[idx], heap[largest]);
                idx = largest;
            } else {
                break;
            }
        }
    }
};

void heapify(vector<int> &nums, int n, int i) {
    // for MaxHeap
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;

    if(left <= n && nums[largest] < nums[left]){
        largest = left;
    }
    if(right <= n && nums[largest] < nums[right]) {
        largest = right;
    }

    if(largest != i) {
        swap(nums[largest], nums[i]);
        heapify(nums, n, largest);
    }
}

void HeapSort(vector<int>& nums, int n) {
    // Step 1: Build max heap (from last non-leaf node)
    for (int i = n / 2; i >= 1; i--) {
        heapify(nums, n, i);
    }

    // Step 2: Swap root with last and heapify again
    for (int i = n; i > 1; i--) {
        swap(nums[1], nums[i]);     // Move current max to end
        heapify(nums, i - 1, 1);    // Heapify root again
    }
}

int main() {
    Heap h;
    h.insertion(10);
    h.insertion(20);
    h.insertion(5);
    h.insertion(30);
    h.printHeap();  // Should show: 30 20 5 10
    return 0;
}
