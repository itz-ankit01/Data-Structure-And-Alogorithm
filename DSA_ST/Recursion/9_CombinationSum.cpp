
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

/*
void printS(int *arr, int index, int n, int target, vector<int>&ans){
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
        printS(arr, index+1, n, target-arr[index], ans);
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

*/
/*

void printS(int *arr, int index, int n, int target, vector<int> &ans) {
    if (index == n) {
        if (target == 0) {
            for (auto it : ans) {
                cout << it << " ";
            }
            cout << endl;
        }
        return;
    }

    // Count the number of duplicate elements
    int count = 0;
    while (index + count < n && arr[index + count] == arr[index]) {
        count++;
    }

    // Exclude duplicates
    printS(arr, index + count, n, target, ans);

    // Include duplicates
    for (int i = 1; i <= count; i++) {
        if (arr[index] * i <= target) {
            for (int j = 0; j < i; j++) {
                ans.push_back(arr[index]);
            }
            printS(arr, index + count, n, target - arr[index] * i, ans);
            for (int j = 0; j < i; j++) {
                ans.pop_back();
            }
        }
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<int> ans;
    int target;
    cin >> target;
    sort(arr, arr + n); // Sort the array to handle duplicates
    printS(arr, 0, n, target, ans);
    return 0;
}

*/
void printS(int *arr, int index, int n, int target, vector<int>&ans){
    //Base Case
    if(target == 0){
        for(auto it : ans){
            cout << it << " ";
            cout << endl;
            return;
        }
    }


    for(int i = index; i<n; i++){
        if(i>index && arr[i] == arr[i-1]) continue;
        if(arr[i] > target) break;
        ans.push_back(arr[i]);
        printS(arr, index+1, n, target-arr[i], ans);
        ans.pop_back();
    }
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
         cin >> arr[i];
    }
    int target;
    cin >> target;
    vector<int> ans;
    printS(arr, 0, n, target, ans);
    return 0;
}