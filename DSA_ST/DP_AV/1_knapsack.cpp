#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
typedef vector<int> vi;

// 1st method Recursive method

int knapsack(vector<int> wt, vector<int> val, int W, int n) {
    // base case
    if(n == 0 || W == 0) {
        return 0;
    }

    // Choice diagram
    if(wt[n-1] <= W) {
        return max ((val[n-1] + knapsack(wt, val, W - wt[n-1], n-1)), knapsack(wt, val, W, n-1));
    }
    else if(wt[n-1] > W){
        return knapsack(wt, val, W, n-1);
    }
}

// 2nd method 0/1 knapsack memoization

int static dp[100][1000];

int knapsackMemoization(vector<int> wt, vector<int> val, int W, int n) {
    // base case
    if(n == 0 || W == 0) {
        return 0;
    }
    if(dp[n][W] != -1) return dp[n][W];

    // Choice diagram
    if(wt[n-1] <= W) {
        return dp[n][W] =  max ((val[n-1] + knapsackMemoization(wt, val, W - wt[n-1], n-1)), knapsackMemoization(wt, val, W, n-1));
    }
    else if(wt[n-1] > W){
        return dp[n][W] =  knapsackMemoization(wt, val, W, n-1);
    }

    return dp[n][W];
}

// 3rd method top down method

int knapsack(vector<int> wt, vector<int> val, int W, int n) {
    // Initialize dp table
    int dp[n + 1][W + 1];
    for (int i = 0; i < n + 1; i++) {
        for (int j = 0; j < W + 1; j++) {
            if (i == 0 || j == 0) {
                dp[i][j] = 0;
            }
        }
    }

    // Fill dp table
    for (int i = 1; i < n + 1; i++) {
        for (int j = 1; j < W + 1; j++) {
            if (wt[i - 1] <= j) {
                dp[i][j] = max(val[i - 1] + dp[i - 1][j - wt[i - 1]], dp[i - 1][j]);
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    return dp[n][W];
}



int main() {
    int n = 4;
    vi wt = {1, 3, 4, 5};
    vi val = {1, 4, 5, 7};
    int W = 7;

    memset(dp, -1, sizeof(dp));

    cout << knapsack(wt, val, W, n);

    return 0;
}