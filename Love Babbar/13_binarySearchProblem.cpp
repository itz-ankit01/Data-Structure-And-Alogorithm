#include<iostream>
#include<algorithm>
using namespace std;

// FIRST AND LAST POSITION OF AN ELEMENT IN SORTED ARRAY
// YOU HAVE GIVEN AN SORTED ARRAY CONSISTING OF N ELEMENTS. YOU ARE ALSO GIVEN AN INTEGER K. YOUR TASK IS TO FIND THE FIRST AND LAST OCCURENCE OF K IN ARR
/*
11
3
1 2 3 3 3 3 3 3 3 3 5
 First Occurence of 3 is at index 2
 Last Occurence of 3 is at index 9              */
/*
int firstOccur(int arr[], int n, int key){
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start)/2;
    int ans = -1;
    while( start <= end){
        if(arr[mid] == key){
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] > key ){
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int lastOccur(int arr[], int n, int key){
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start)/2;
    int ans = -1;
    while( start <= end){
        if(arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid] > key ){
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}
int main(){
    int n;
    cin>>n; 
    int arr[n];
    int key;
    cin>>key;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    int index = firstOccur(arr, n, key);
    cout<< " First Occurence of " <<key <<  " is at index " << index << endl;
    int index1 = lastOccur(arr, n, key);
    cout<< " Last Occurence of " <<key <<  " is at index " << index1 << endl;
    return 0;
}                 */


// PEAK INDEX IN A MOUNTAIN ARRAY
// value will be given in increasing order from 0 to i and i+1 to n-1 in decreasing order


   
    int main(){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int s = 0, e = n-1;
        int mid = s + (e - s)/2;
        while(s < e){
            if(arr[mid] < arr[mid + 1]){
                s = mid + 1;
            }
            else {
                e = mid;
            }
            mid = s + (e - s)/2;
        }
        cout << "Index of Maximum value is " << s << endl;

        return 0;
    }