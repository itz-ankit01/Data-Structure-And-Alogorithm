#include<iostream>
#include<vector>
using namespace std;
/*
3
1 2 3
[1 2 3 ]
[1 3 2 ]
[2 1 3 ]
[2 3 1 ]
[3 1 2 ]
[3 2 1 ]
*/
void Permutation(int *arr, vector< vector<int> > &ans, vector<int>&ds, int *freq, int n){
    // Base Case
    if(ds.size() == n){
        ans.push_back(ds);
        return;
    }

    for(int i=0; i<n; i++){
        if(freq[i] == 0){
            ds.push_back(arr[i]);
            freq[i] = 1;
            Permutation(arr, ans, ds, freq, n );
            freq[i] = 0;
            ds.pop_back();
        }
    }
    return;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    vector<int>ds;
    int freq[n] = {0};
    vector< vector<int> > ans;

    Permutation(arr, ans, ds, freq, n );

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