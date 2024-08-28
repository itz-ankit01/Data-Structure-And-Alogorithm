#include<iostream>
using namespace std;

//  SORT AN ARRAY OF 0'S 1 & 2
// MOST OPTIMAL SOLUTION
int main(){
        int n;
        cout << "Enter the size of the array " ;
        cin >> n;
        
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int low = 0, mid = 0, high = n-1;
        while(mid <= high){
            if (arr[mid] == 0){
                swap(arr[low], arr[mid]);
                low++;
                mid++;
            }
            else if(arr[mid] == 1){
                mid++;
            }
            else {
                swap(arr[mid], arr[high]);
                high--;
            }
        }
        for(int i=0; i<n; i++){
            cout << arr[i] << " ";
        }
    return 0;
} 