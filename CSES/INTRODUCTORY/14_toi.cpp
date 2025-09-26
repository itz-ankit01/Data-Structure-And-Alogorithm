#include<iostream>
#include<vector>
using namespace std;

int solve(int n, int s, int h, int d, vector<int>&ans) {
    // Base case
    if (n == 1) {
        ans.push_back(s);
        ans.push_back(d);
        return 1;    
    }

    int moves = 0;
    moves += solve(n - 1, s, d, h, ans);
    ans.push_back(s);
    ans.push_back(d);
    moves++;
    moves += solve(n - 1, h, s, d, ans);
    return moves;
}

int main() {
    int n;
    cin >> n;
    vector<int> ans;
    int totalMoves = solve(n, 1, 2, 3, ans);
    cout << totalMoves << endl;

    for(int i=0; i< ans.size(); i+=2){
        cout << ans[i] << " " << ans[i+1] << endl;
    }
    

    return 0;
}
