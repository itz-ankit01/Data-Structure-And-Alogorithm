#include<iostream>
#include<vector>
using namespace std;

// Merge
void merge(int* arr, int low, int mid, int high){
    vector <int> temp;
    int left = low;
    int right = mid+1;

    while(left <= mid && right <= high){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }

    // remaining left
    while(left <= mid){
        temp.push_back(arr[left]);
        left++;
    }

    // remaining rigth
    while(right <= high){
        temp.push_back(arr[right]);
        right++;
    }

    // copy to arr
    for(int i = low; i<= high; i++){
        arr[i] = temp[i - low];
    }
}
    

// MergeSORT 
void mergeSort(int *arr, int low, int high){
    // Base Case
    if(low >= high) return;

    int mid = (low + high)/2;

    mergeSort(arr, low, mid);

    mergeSort(arr, mid+1, high);

    merge(arr, low, mid, high);
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n ; i++){
        cin >> arr[i];
    }

    mergeSort(arr, 0, n-1);

    // Print
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}