#include<iostream>
using namespace std;
// PIVOT PROBLEM
/*
int getPivot(int arr[], int n){
    int s = 0, e = n-1;
    int mid = s + ( e - s)/2;
    while(s<e){
        if(arr[mid] >= arr[0] ){
            s = mid + 1;
        }
        else {
            e = mid;
        }
        mid = s + ( e - s)/2;
    }
    return s;
}
int main(){
    int arr[5] = { 8, 10, 17, 1, 3};
    cout << "Index of Pivot is " << getPivot(arr, 5) << endl;
    return 0;
}     */    





// SEARCH IN A ROTATED SORTED ARRAY
//  YOU HAVE GIVEN AN ARRAY OF N ELEMENTS . YOU ALSO GIVEN AN INTEGER K . NOW, ARRAY IS ROTATED AT SOME PIVOT POINT UNKNOWN TO YOU . FOR EXAMPLE ARR = [1, 3, 5, 7, 8]. THEN AFTER ROTATING ARRAY AT INDEX 3 , THE ARRAY WILL BE ARR = [7, 8, 1, 3, 5]

/*
5
12 15 18 2 4
2
Index of key value is 3             */

/*
        int getPivot(int arr[], int n){
            int s = 0; int e = n -1;
            int mid = s + (e - s)/2;
            while(s < e){
                if(arr[mid] >= arr[0] ){
                    s = mid + 1;
                }
                else {
                    e = mid;
                }
                mid = s + (e - s)/2;
            }
            return s;
        }
        // SEARCHING THE KEY
        int binarySearch(int arr[], int s, int e, int key ){
            int mid = s + (e - s)/2;
            while(s <= e){
                if(arr[mid] == key){
                    return mid;
                }
                else if(arr[mid] > key){
                    e = mid - 1;
                }
                else {
                    s = mid + 1;
                }
            }
            return -1;
        }
        int main(){
            int n;
            cin>>n;
            int arr[n];
            for(int i=0; i<n; i++){
                cin>>arr[i];
            }
            int key;
            cin>>key;
            int indx = getPivot(arr, n);
            int keyIdx = 0;
            // B.S. ON SECOND LINE
            if(arr[indx] <= key  && key <= arr[n-1]){
                keyIdx = binarySearch(arr, indx, n-1, key); 
            }
            // B.S. ON FIRST LINE
            else {
                keyIdx = binarySearch(arr, 0, indx - 1, key);
            }
            cout << "Index of key value is " << keyIdx <<endl;
            return 0;
        }                        */


// FIND SQUARE ROOT USING BINARY SEARCH


        int root(int n){
            long long int s = 0, e = n;
            long long int mid = s + (e - s)/2;
            long long int ans = -1;
            while(s <= e){
            long long int square = mid * mid;
            if(square == n){
                ans = mid;
                break;  // return ans directly when square is found
            }
            else if(square < n){
                ans = mid;
                s = mid + 1; 
            }
            else {
                e = mid - 1;
            }
            mid = s + (e - s)/2;
            }
            return ans;  // return ans after the loop ends
             }

        double morePrecision(int n, int precision, int sqRoot){
            double factor = 1;
            double ans = sqRoot;
            for(int i=0; i<precision; i++){
                    factor = factor/10;
                    for(double j = ans; j*j < n; j=j+factor ){
                        ans = j;
                    }
            }
            return ans;
        }
        int main(){
            long long int n;
            cout<<"Enter the number " <<endl;
            cin >> n;
            int sqRoot = root(n);
            cout << "Square Root of " << n << " is " << morePrecision(n, 3, sqRoot) << endl;
            return 0;
        }                             



