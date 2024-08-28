#include<iostream>
using namespace std;

// GIVEN AN ARRAY OF INTEGER AND A POSITION M , YOU HAVE TO REVERSE THE ARRAY AFTER THAT POSITION
/*
void reverse (int arr[], int n, int m){
    int s = m + 1;
    int e = n - 1;
    while(s < e){
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}
void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    
    int n;
    cout << "Enter the size of the array " ;
    cin >> n;
    int m;
    cin >> m;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    reverse(arr, n, m);
    print(arr, n);
    return 0;
}         */

// YOU ARE GIVEN TWO INTEGERS ARRAY NUMS1 NUMS2, SORTED IN ASCENDING ORDER, AND TWO INTEGER M AND N, REPRESENTING THE NUMBER OF ELEMENT IN NUMS1 AND NUMS2 RESPECTIVELY, MERGE THE NUMS1 & NUMS2 IN A SINGLE ARRAY IN ASCENDING ORDER
/*

#include<algorithm>

void merge(int arr1[], int n, int arr2[], int m, int arr3[], int x){

        int i=0, j=0, k=0;
        while(i < n && j<m){
            if(arr1[i] <= arr2[j]){
                arr3[k++] = arr1[i++]; 
            }
            else {
                arr3[k++] = arr2[j++];
            }
        }
        // copy first array k element ko
        while(i < n){
            arr3[k++] = arr1[i++];
        }
        // copy second array k element ko
        while(j < m){
            arr3[k++] = arr2[j++];
        }
}

void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    
    int n;
    cout << "Enter the size of the array " ;
    cin >> n;
    int m;
    cin >> m;
    int nums1[n], nums2[m];

    for(int i=0; i<n; i++){
        cin >> nums1[i];
    }

    for(int i=0; i<m; i++){
        cin >> nums2[i];
    }
    int nums3[m+n];
    sort(nums1, nums1+n);
    sort(nums2, nums2+m);

    merge(nums1, n, nums2, m, nums3, m+n);

    print(nums3, n+m);
    return 0;
}    */

// GIVEN AN ARRAY ARR, MOVE ALL THE 0'S TO THE END OF IT WHILE MAINTAINING THE RELATIVE ORDER OF THE NON ZERO ELEMENTS

void moveZeroes(int arr[], int n){
    int i=0;
    for(int j=0; j<n; j++){
        if(arr[j]!=0){
            swap(arr[i], arr[j]);
            i++;
        }
    }
}   
void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    
    int n;
    cout << "Enter the size of the array " ;
    cin >> n;
   
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    moveZeroes(arr, n);
    print(arr, n);
    return 0;
}    