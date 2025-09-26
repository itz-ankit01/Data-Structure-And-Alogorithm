#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, cap;
    cin >> n >> cap;
    vector<int> price(n), pages(n);
    
    for (int i = 0; i < n; i++) cin >> price[i];
    for (int i = 0; i < n; i++) cin >> pages[i];

    vector<vector<int>> dp(n+1, vector<int>(cap+1, 0));

    for (int i = 1; i <= n; i++) {
        for (int w = 0; w <= cap; w++) {
            dp[i][w] = dp[i-1][w]; // skip current book
            if (price[i-1] <= w) {
                dp[i][w] = max(dp[i][w], pages[i-1] + dp[i-1][w - price[i-1]]);
            }
        }
    }

    cout << dp[n][cap] << endl;
    return 0;
}
