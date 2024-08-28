#include<iostream>
#include<climits>
using namespace std;
// MAXIMUM SUBARRAY SUM USING KADANE'S ALGORITHM
/*

int main(){
    
        int n;
        cout << "Enter the size of the array " ;
        cin >> n;
        
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        int maxi = INT_MIN;
        int sum = 0;
        
        for(int i=0; i<n; i++){
            sum+=arr[i];
            if(sum > maxi){
                maxi = sum;
            }
            if(sum < 0){
                sum = 0;
            }
        }
        cout << "max -> " << maxi << endl;
    return 0;
}    */


// PRINT THE SUBARRAY WHICH CONSIST OF MAXIMUM SUM
/*
Enter the size of the array 8
-2 -3 4 -1 -2 1 5 -3
max -> 7
4 -1 -2 1 5           */

int main(){  
        int n;
        cout << "Enter the size of the array " ;
        cin >> n;
        
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        int maxi = INT_MIN;
        int sum = 0;
        int start = -1, end = -1;
        for(int i=0; i<n; i++){
            if(sum == 0){
                start = i;
            }
            sum+=arr[i];
            if(sum > maxi){
                maxi = sum;
                end = i;
            }
            if(sum < 0){
                sum = 0;
            }
            
        }
        cout << "max -> " << maxi << endl;
        for(int i= start; i <= end; i++){
            cout << arr[i] << " ";
        }
    return 0;
} 