#include <bits/stdc++.h>
using namespace std;

/// dp[x] = min number of steps to get number x

const int INF = 1e9 + 5;

// int main() {
//     int n;
//     cin >> n;    

//     vector<int> dp(n+1, INF);
//     dp[n] = 0;

//     for(int x = n; x >= 1; x--) {
//         for(char c: to_string(x)) {
//             int digit = c - '0';
//             if(digit > 0) {
//                 dp[x-digit] = min( dp[x-digit], 1 + dp[x]);
//             }
//         }
//     }

//     cout << dp[0] << endl;
//     return 0;
// }

// forward DP approach
// dp[i] = min number of steps to get number x

int main() {
    int n;
    cin >> n;
    vector<int> dp(n+1, INF);
    dp[0] = 0;

    for(int x = 1; x <= n; x++) {
        for(char c: to_string(x)) {
            int digit = c - '0';
            if(digit > 0) {
                dp[x] = min(dp[x], 1 + dp[x-digit]);
            }
        }
    }

    cout << dp[n] << endl;
    return 0;
}