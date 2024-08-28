#include<iostream>
#include<climits>

using namespace std;

/*
// FIND THE SECOND LARGEST ELEMENT OF ARRAY
int secondLargest(int arr[], int n){
    int largest = arr[0];
    int slargest = -1;
    for(int i=1; i<n; i++){
        if( arr[i] > largest){
            slargest = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > slargest){
            slargest = arr[i];
        }
    }
    return slargest;
}

int secondSmallest(int arr[], int n){
    int smallest = arr[0];
    int ssmallest = INT_MAX;
    for(int i=1; i<n; i++){
        if(arr[i] < smallest){
            ssmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] != smallest && arr[i] < ssmallest){
            ssmallest = arr[i];
        }
    }
    return ssmallest;
}
int main(){
    int n;
    cout << "Enter the size of array " << endl;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout << "Second Largest -> " << secondLargest(arr, n) << " Second Smallest -> " << secondSmallest(arr, n) << endl;

    return 0;
}         */

// CHECK IF THE ARRAY IS SORTED
/*
bool sorted (int arr[], int n){
    for(int i=1; i<n; i++){
        if(arr[i] < arr[i-1]) return false;
    }
    return true;
}
int main(){
    int n;
    cout << "Enter the size of array " << endl;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    if(sorted(arr, n)) cout <<"YES"<<endl;
    else cout << "NO" << endl;

    return 0;
}      
*/

// REMOVE DUPLICATE IN PLACE FROM SORTED ARRAY

int main(){
    int n;
    cout << "Enter the size of array " << endl;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    int i=0; 
    for(int j=1; j<n; j++){
        if(arr[j] != arr[i]){
            arr[i+1] = arr[j];
            i++;
        }
    } 
    cout << "No of Unique Element is " << i+1 << endl;
    return 0;
} 