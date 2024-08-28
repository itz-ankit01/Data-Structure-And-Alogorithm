#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef long long ll;
/*
int dp[10010];

int func(int amount, vi &coins){
    if (amount == 0) return 0;
    if(dp[amount] != -1) return dp[amount];

    int ans = INT_MAX;
    for(int coin : coins){
        if(amount - coin >= 0)
        ans = min(ans + 0LL, func(amount-coin, coins) + 1LL);
    }
    return dp[amount] =  ans;
}

int coinChange(vi &coins, int amount){
    int ans = func(amount, coins);
    return ans == INT_MAX ? -1 : ans;
}
int main(){
    memset(dp, -1, sizeof(dp));
    vi coins = {1,2,5};
    cout << coinChange(coins, 11) << endl;
    return 0;
}
*/


// --------------------------------------------------------------<<

int dp[10010];

int func(int amount, vi &coins){
    if (amount == 0) return 1;
    if(dp[amount] != -1) return dp[amount];

    int ways = 0;
    for(int coin : coins){
        if(amount - coin >= 0)
        ways = min(ways + 0LL, func(amount-coin, coins) + 1LL);
    }
    return dp[amount] =  ways;
}

int coinChange(vi &coins, int amount){
    int ways = func(amount, coins);
    return ways == 0 ? 0 : ways;
}
int main(){
    memset(dp, -1, sizeof(dp));
    vi coins = {1,2,5};
    cout << coinChange(coins, 11) << endl;
    return 0;
}