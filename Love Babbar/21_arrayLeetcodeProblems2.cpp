#include<iostream>
using namespace std;

// GIVEN AN ARRAY , ROTATE TO THE RIGHT BY K STEPS, WHR K IS A NON NEGATIVE
/*
void rotate (int arr[], int n, int k){
    int temp[];
    for(int i=0; i<n; i++){
        temp[(i+k)%n] = arr[i];
    }
    arr = temp;
    delete[] temp;
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
    int k;
    cin >> k;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    rotate (arr, n, k);
    print(arr, n);
    return 0;
}        */

// ANOTHER METHOD
/*
    void reverse (int arr[], int n, int s, int e){
       
    while(s < e){
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
    }

    void rotate(int arr[], int n, int k){
        reverse(arr, n, 0, k-1);
        reverse(arr, n, k, n-1);
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
        int k;
        cin >> k;
        int arr[n];

        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        reverse(arr, n, 0, n-1);
        rotate(arr, n, k);
        print(arr, n);
        return 0;
    }     */  

// CHECK IF THE ARRAY IS SORTED AND ROTATED
// given an array nums , return true if the array was originally sorted in non decreasing order, then rotated some number of position (including zero) , otherwise return false
/*
    int main(){
        int count = 0;
        int n;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        for(int i=1; i<n; i++){
            if(arr[i-1] > arr[i]){
                count++;
            }
        }
        if(arr[0] < arr[n-1]){
                count++;
            }
        if(count <= 1) cout <<"Array is sorted and rotated" << endl;    // < 1 when 1 1 1 it is sorted and rotated
        else cout << "Array is not sorted and rotated" << endl;
        return 0;
    }            */

// SUM OF TWO ARRAY

#include<vector>
    int main(){

        int m;
        cin>>m;
        vector<int>arr1(m);

        for(int i = 0; i<m; i++){
            cin >> arr1[i];
        }

        int n;
        cin>>n;
        vector<int>arr2(n);
        for(int i = 0; i<n; i++){
            cin >> arr2[i];
        }

        vector<int>ans(m > n ? m : n);

        int i = n-1;
        int j = m-1;
        int carry = 0;
        while(i>=0 && j>=0){
            int val1 = arr1[i];
            int val2 = arr2[j];
            int sum = val1 + val2 + carry;
            carry = sum/10;
            sum = sum % 10;
            ans.push_back(sum);
            i--;
            j--;
        }

        while(i>=0){
            int sum = arr1[i] + carry;
            carry = sum/10;
            sum = sum % 10;
            ans.push_back(sum);
            i--;
        }

        while(j>=0){
            int sum = arr2[j] + carry;
            carry = sum/10;
            sum = sum % 10;
            ans.push_back(sum);
            j--;
        }

        while(carry != 0){
            
            ans.push_back(carry);
            
        }      
        
        for(int i = 0; i<ans.size(); i++){
            cout << ans[i]<<" ";
        }
        return 0;
    }  
/*
        #include <iostream>
#include <vector>

using namespace std;

int main() {

    // Input size and elements of first array
    int m;
    cin >> m;
    vector<int> arr1(m);
    for (int i = 0; i < m; i++) {
        cin >> arr1[i];
    }

    // Input size and elements of second array
    int n;
    cin >> n;
    vector<int> arr2(n);
    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
    }

    // Calculate sum of arrays
    vector<int> sum(m > n ? m : n); // Initialize sum vector with max size
    int carry = 0;
    int i = m - 1;
    int j = n - 1;
    int k = sum.size() - 1;

    while (k >= 0) {
        int digitSum = carry;
        if (i >= 0) {
            digitSum += arr1[i];
            i--;
        }
        if (j >= 0) {
            digitSum += arr2[j];
            j--;
        }
        carry = digitSum / 10;
        digitSum = digitSum % 10;
        sum[k] = digitSum;
        k--;
    }

    // Print sum array
    for (int i = 0; i < sum.size(); i++) {
        cout << sum[i] << " ";
    }
    cout << endl;

    return 0;
}           */














