#include<iostream>
#include<vector>
using namespace std;

void permute(vector<int>&arr, int index, vector<vector<int> >&ans, int n){
    // Base Case
    if(index == n){
        ans.push_back(arr);
    }

    for(int i = index; i<n; i++){
        swap(arr[i], arr[index]);
        permute(arr, index+1, ans , n);
        swap(arr[i], arr[index]);
    }
    return;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0 ; i<n; i++){
        int val;
        cin >> val;
        arr[i] = val;
    }

    vector<vector<int> > ans;
    permute(arr, 0, ans , n);
    
    for(int i=0; i < ans.size(); i++){
        cout << "[";
        for(int j = 0; j<ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout <<"]";
        cout << endl;
    }
    return 0;
}