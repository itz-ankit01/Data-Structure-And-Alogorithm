#include<iostream>
#include<vector>
using namespace std;

// Printing a Subsequence whose sum is equal to K

/*
void SumSubsequence(int *arr, int index, int n, int k, vector<int> &ans, int sum){
    // Base Case
    if(index >= n){
        if(sum == k){
            for(auto it: ans){
            cout << it << " ";                   
            }
             cout << endl; 
        } 
        return;
    }

    //Take condition 
    ans.push_back(arr[index]);
    SumSubsequence(arr, index+1, n, k, ans, sum+=arr[index]);
    //Not Take condition
    ans.pop_back();
    SumSubsequence(arr, index+1, n, k, ans, sum-=arr[index]);
    return;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int k;
    cin >> k;

    int sum = 0;
    vector<int> ans;

    SumSubsequence(arr, 0, n, k, ans, sum);
    return 0;
}
*/

// technique to print only one answer (Method 1)
/*
bool flag = false;
void SumSubsequence(int *arr, int index, int n, int k, vector<int> &ans, int sum){
    // Base Case
    if(index >= n){
        if(sum == k && flag == false){
            flag = true;
            for(auto it: ans){
            cout << it << " ";                   
            }
             cout << endl; 
        } 
        return;
    }

    //Take condition 
    ans.push_back(arr[index]);
    SumSubsequence(arr, index+1, n, k, ans, sum+=arr[index]);
    //Not Take condition
    ans.pop_back();
    SumSubsequence(arr, index+1, n, k, ans, sum-=arr[index]);
    return;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int k;
    cin >> k;

    int sum = 0;
    vector<int> ans;

    SumSubsequence(arr, 0, n, k, ans, sum);
    return 0;
}
*/


// technique to print only one answer (Method 2)
/*
bool SumSubsequence(int *arr, int index, int n, int k, vector<int> &ans, int sum){
    // Base Case
    if(index >= n){
        // condition satisfied
        if(sum == k){
            for(auto it: ans){
            cout << it << " ";                   
            }
             cout << endl; 
             return true;
        }
        // condition not satisfied 
        return false;
    }

    //Take condition 
    ans.push_back(arr[index]);
    if(SumSubsequence(arr, index+1, n, k, ans, sum+=arr[index]) == true) return true;
    //Not Take condition
    ans.pop_back();
    if(SumSubsequence(arr, index+1, n, k, ans, sum-=arr[index]) == true) return true;
    return false;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int k;
    cin >> k;

    int sum = 0;
    vector<int> ans;

    SumSubsequence(arr, 0, n, k, ans, sum);
    return 0;
}

*/

// Question ask for number of count of valid subsequences

int  SumSubsequence(int *arr, int index, int n, int k,  int sum){
    // Base Case
    if(index >= n){
        if(sum == k){
             return 1;
        } 
        return 0;
    }
    //Take condition 
    int l =  SumSubsequence(arr, index+1, n, k, sum+arr[index]);
    //Not Take condition
    int r = SumSubsequence(arr, index+1, n, k, sum);
    return l + r;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int k;
    cin >> k;
    int sum = 0;  
    SumSubsequence(arr, 0, n, k, sum);
    return 0;
}