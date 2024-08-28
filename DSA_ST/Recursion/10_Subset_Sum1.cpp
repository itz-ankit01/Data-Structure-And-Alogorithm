#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void SubsetSum(int *arr, int ind, int n, int sum, vector<int>&ans){
    //Base Case
    if(ind == n){
        ans.push_back(sum);
        return;
    }

    // Pick Condition
    SubsetSum(arr, ind+1, n, sum+arr[ind], ans);
    //Not Pick Condition
    SubsetSum(arr, ind+1, n, sum, ans);
    return;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int sum = 0;
    vector<int>ans;
    SubsetSum(arr, 0, n, sum , ans);
    sort(ans.begin(), ans.end());

    for(auto it: ans){
        cout << it << " ";
    }
    return 0;
}