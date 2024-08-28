#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef long long ll;
 
int func(int ind, int W, vi &wt, vi &val){
    if(ind == 0){
        if(wt[0] <= W) return val[0];
        return 0;
    }

    int notTake = 0 + func(ind - 1, W - wt[ind], wt, val);
    int take = INT_MIN;
    if(wt[ind] <= W){
        take = val[ind] + func(ind-1, W - wt[ind], wt, val);
    }
    return max(take, notTake);
}
int main(){
int n;
cin >> n;
vi wt(n);
vi val(n);
int maxWeight;
cin >> maxWeight;
for(int i=0; i<n; i++){
    cin >> wt[i];
}
for(int i=0; i<n; i++){
    cin >> val[i];
}

int k = func(n-1, maxWeight, wt, val);
cout << k << endl;
    return 0;
}




// ------------------------------------------------------

// #include<bits/stdc++.h>
// using namespace std;

// int knapsack(int W, vector<int>& wt, vector<int>& val, int n) {
//     vector<vector<int>> dp(n + 1, vector<int>(W + 1, 0));

//     for (int i = 1; i <= n; i++) {
//         for (int w = 1; w <= W; w++) {
//             if (wt[i - 1] <= w) {
//                 dp[i][w] = max(val[i - 1] + dp[i - 1][w - wt[i - 1]], dp[i - 1][w]);
//             } else {
//                 dp[i][w] = dp[i - 1][w];
//             }
//         }
//     }

//     return dp[n][W];
// }

// int main() {
//     int n;
//     cout << "Enter the number of items: ";
//     cin >> n;

//     vector<int> wt(n), val(n);

//     cout << "Enter the weights of items:\n";
//     for (int i = 0; i < n; i++) {
//         cin >> wt[i];
//     }

//     cout << "Enter the values of items:\n";
//     for (int i = 0; i < n; i++) {
//         cin >> val[i];
//     }

//     int maxWeight;
//     cout << "Enter the maximum weight capacity of the knapsack: ";
//     cin >> maxWeight;

//     int result = knapsack(maxWeight, wt, val, n);

//     cout << "The maximum value that can be obtained is: " << result << endl;

//     return 0;
// }
