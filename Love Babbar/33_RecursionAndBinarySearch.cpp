#include<iostream>
using namespace std;
// WHETHER ARRAY IS SORTED OR NOT

/*
bool isSorted(int *arr, int size){
    // Base Case
    if(size == 0 || size == 1) return true;

    if(arr[0] > arr[1]) return false;

    else {
        bool remainingPart = isSorted(arr+1, size-1);
        return remainingPart;
    }


}
int main(){
    
    int n;
    cout << "Enter the size of the array " ;
    cin >> n;

    int *arr = new int[n];
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }

    bool ans = isSorted(arr, n);

    if(ans) cout << "Array is Sorted "<< endl;
    else cout << "Array is not Sorted " << endl;
    return 0;
}
*/




// PRINT THE SUM OF ELEMENTS OF THE ARRAY USING RECURSION

/*
int sum(int *arr, int size){
    // Base Case
    if(size == 0) return 0;

    return arr[0] + sum(arr+1, size-1);

}
int main(){
    
    int n;
    cout << "Enter the size of the array " ;
    cin >> n;

    int *arr = new int[n];
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }

    int ans = sum(arr, n);

    cout << "The sum of the Array is " << ans << endl;
    return 0;
}  
*/



// LINEAR SEARCH USING RECURSION 
/*
bool linearSearch(int *arr, int n, int k){
    if(n == 0)
        return false;
    
    if(arr[0] == k) return true;

    return linearSearch(arr+1, n-1, k);
}

int main (){
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }

    int k;
    cin >> k;

    bool flag = linearSearch(arr, n, k);

    if(flag) cout << "Found " << endl;
    else cout << "Not Found " << endl;
}  */


// BINARY SEARCH USING RECURSION
// ARRAY MUST BE SORTED IN BINARY SEARCH


void print(int *arr, int s, int e){
    for (int i=s; i<=e; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
bool binarySearch(int *arr, int s, int e, int k){

    cout << endl;
    print(arr, s, e);
    cout << endl;
    // Base Case
    if(s>e){
        return false;
    }

    int mid = s + (e-s)/2;
    // When Element is Found
    if(arr[mid] == k) return true;

    if(arr[mid] > k){
        binarySearch(arr, s, mid-1, k);
    }
    else {
        binarySearch(arr, mid+1, e, k);
    }
}
int main(){

    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }

    int k;
    cin >> k;

    cout << "Present or Not ->  " << binarySearch(arr, 0, n-1, k) << endl;
    return 0;
}



