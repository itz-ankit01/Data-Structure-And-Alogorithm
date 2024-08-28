#include<iostream>
#include<vector>
using namespace std;
/*
input
4
2 3 4 7
7
output

2 2 3
3 4
7  */void printS(int *arr, int index, int n, int target, vector<int>&ans){
    // Base Case
    if(index == n){
    return;
    }
    if(target == 0){
        for(auto it : ans){
            cout << it << " ";
        }
        cout << endl;
        return;
    }

    // Take condition
   if(arr[index] <= target){
        ans.push_back(arr[index]);
        printS(arr, index, n, target-arr[index], ans);
        ans.pop_back();
   }
    printS(arr, index+1, n, target, ans);
    return;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    vector <int> ans;
    int target;
    cin >> target;
    printS(arr, 0, n, target, ans);
    return 0;
}