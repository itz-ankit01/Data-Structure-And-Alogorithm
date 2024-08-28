#include<iostream>
#include<vector>
#include<cstring>

using namespace std;

// GIVEN AN UNIQUE ARRAY NUMS OF UNIQUE ELEMENTS , RETURN ALL POSSIBLE SUBSETS (POWER SETS)
/*
void subset (int *arr, int index, int n, vector<vector<int>> &ans, vector<int> output){
    // Base Case
    if(index >= n){
        ans.push_back(output);
        return;
    }

    // Exclude
    subset(arr, index+1, n, ans, output );

    // include
    int element = arr[index];
    output.push_back(element);
    subset(arr, index+1, n, ans, output);

    return ;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    vector<vector<int>> ans;
    vector<int> output;
    subset(arr, 0, n, ans, output);

    for(int i =0; i<ans.size(); ++i){
        for(int j=0; j<ans[i].size(); ++j){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
} */

// SUBSEQUENCE OF A STRING


void subset (string str, int index, int n, vector<vector<char>> &ans, vector<char> output){
    // Base Case
    if(index >= n){
        ans.push_back(output);
        return;
    }

    // Exclude
    subset(str, index+1, n, ans, output );

    // include
    char element = str[index];
    output.push_back(element);
    subset(str, index+1, n, ans, output);

    return ;
}
int main(){
    int n;
    
    string str;
    cin >>str;
    n = str.length();
   
    vector<vector<char>> ans;
    vector<char> output;
    subset(str, 0, n, ans, output);

    for(int i =0; i<ans.size(); ++i){
        for(int j=0; j<ans[i].size(); ++j){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}