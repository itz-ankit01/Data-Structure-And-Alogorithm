#include<iostream>
using namespace std;

int partition(int *arr, int s, int e){

    int pivot = arr[s];

    int cnt = 0;
    for(int i=s+1; i<=e; i++){
        if(arr[i] <= pivot) cnt++;
    }

    int pivotidx = s + cnt;

    swap(arr[s], arr[pivotidx]);

    int i = s; int j = e;


    while(i < pivotidx && j > pivotidx){

        while(arr[i] < pivot) i++;

        while(arr[j] > pivot) j--;

        if(i < pivotidx && j > pivotidx){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return pivotidx;
}
void quickSort(int *arr, int s, int e){
    //Basde Case
    if(s >= e) return;

    int p = partition(arr, s, e);

    // left part
    quickSort(arr, s, p-1);

    // rigght wala
    quickSort(arr, p+1, e);
}
// Quick Sort
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

// quick Sort
    quickSort(arr, 0, n-1);
   
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}