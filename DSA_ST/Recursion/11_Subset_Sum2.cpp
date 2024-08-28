#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void subsetWithoutDup(vector<int>&arr, int idx, int n, vector<int>&ds, vector<vector<int> > &ans){
    ans.push_back(ds);

    for(int i = idx; i < n; i++){
        if(i > idx && arr[i] == arr[i-1]) continue;
        ds.push_back(arr[i]);
        subsetWithoutDup(arr, i+1, n, ds, ans);
        ds.pop_back();
    }
}
int main(){
    int n;
    cin >> n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        int value ;
        cin >> value;
        arr[i]  = value;
    }

    vector<int>ds;
    vector<vector<int> > ans;
    sort(arr.begin(), arr.end());

    subsetWithoutDup(arr, 0, n, ds, ans);

    for(int i = 0; i < ans.size(); i++ ){
        for(int j = 0; j < ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
