#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

/*
void ratPath(int i, int j, int n, vector< vector<string>> &ans, string move, vector<vector<int>>&arr, vector<vector<int>> &vis){
    // base Case
    if(arr[0][0] == 0) return;
    if(i == n-1 && j == n-1){
        ans.push_back({move});
        return;
    }

    //Down
    if(i+1 < n && vis[i+1][j] == 0 && arr[i+1][j] == 1){
        vis[i+1][j] = 1;
        move.push_back('D');
         ratPath(i+1, j, n, ans, move , arr, vis);
        vis[i+1][j] = 0;
        move.pop_back();
    }

    //Left
    if(j-1>=0 && vis[i][j-1] == 0 && arr[i][j-1] == 1){
        vis[i][j-1] = 1;
        move.push_back('L');
         ratPath(i, j-1, n, ans, move, arr, vis);
        vis[i][j-1] = 0;
        move.pop_back();
    }

    //Rigth
    if(j+1 < n && vis[i][j+1] == 0 && arr[i][j+1] == 1){
        vis[i][j+1] = 1;
        move.push_back('R');
         ratPath(i, j+1, n, ans, move, arr, vis);
        vis[i][j+1] = 0;
        move.pop_back();
    }

    //Up
    if(i-1>=0 && vis[i-1][j] == 0 && arr[i-1][j] == 1){
        vis[i-1][j] = 1;
        move.push_back('U');
         ratPath(i-1, j, n, ans, move, arr, vis);
        vis[i-1][j] = 0;
        move.pop_back();
    }
}
int main(){
    int n;
    cin >> n;
    vector< vector<string> > ans;
    string move = "";

    //input
    vector<vector<int>> arr(n, vector<int>(n, 0));
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int value;
            cin >> value;
            arr[i][j] = value;
        }
    }

    vector<vector<int>> vis(n, vector<int>(n, 0));
    ratPath(0, 0, n, ans, move, arr, vis);

    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout << ans[i][j];
        }
        cout << endl;
    }
    return 0;
}

*/

void ratPath(int i, int j, int n, vector<string> &ans, string move, vector<vector<int>>&arr, vector<vector<int>> &vis, int *di, int *dj){
    // Base Case
    if(i == n-1 && j == n-1){
        ans.push_back({move});
        return;
    }

    string dir = "DLRU";
    for(int ind = 0; ind < 4; ind++){
        int nexti = i + di[ind];
        int nextj = j + dj[ind];
        if(nexti >=0 && nexti < n && nextj >=0 && nextj < n && !vis[nexti][nextj] && arr[nexti][nextj] == 1){
            vis[nexti][nextj] = 1;
            move.push_back(dir[ind]);
            ratPath(nexti, nextj, n, ans, move, arr, vis, di, dj);
            vis[nexti][nextj] = 0;
            move.pop_back();
        }
    }
    }

int main(){
    int n;
    cin >> n;
    vector<string>  ans;
    string move = "";

    //input
    vector<vector<int>> arr(n, vector<int>(n, 0));
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int value;
            cin >> value;
            arr[i][j] = value;
        }
    }

    vector<vector<int>> vis(n, vector<int>(n, 0));
    int di[] = {1, 0, 0, -1};
    int dj[] = {0, -1, 1, 0};
    ratPath(0, 0, n, ans, move, arr, vis, di, dj);

    for(int i = 0; i < ans.size(); i++) {
    cout << ans[i] << endl;
    }
    return 0;
}
