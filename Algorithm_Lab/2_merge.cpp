#include<iostream>
#include<cstdlib>
#include<ctime>
#include"1_merge_sort.cpp"
using namespace std;

int main(){
    srand(time(0));
    int n = 15;
    int lb = 10, ub = 100;
    int arr[n];
    for(int i=0; i<n; i++){
        int a = (rand() % (ub - lb + 1)) + lb;
        arr[i] = a;
    }

    mergeSort(arr, 0, n-1);

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}