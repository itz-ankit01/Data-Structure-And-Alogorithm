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
        int temp = arr[i]; 
        int j = i - 1;
        for(; j >= 0; j--){
            if(temp < arr[j]){
                arr[j+1] = arr[j];
            }
            else {
                break;
            }
        }
        arr[j+1] = temp;
        }

        for(int i = 0; i < n; i++){
        cout << arr[i] << " " ;
    }
        return 0;
    }