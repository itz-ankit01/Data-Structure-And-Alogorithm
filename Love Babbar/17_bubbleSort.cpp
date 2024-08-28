#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i= 0; i<n; i++){
        cin>>arr[i];
    }
    //sorting
    for(int i = 1; i < n; i++){
        // for round 1 to n - 1
        bool swapped = true;
        for(int j = 0; j < n - i ; j++){
            // process element till n - i th index
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = false;
            }
        }
        if(swapped == true){
            // already sorted
            break;
        }
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " " ;
    }
    return 0;
}