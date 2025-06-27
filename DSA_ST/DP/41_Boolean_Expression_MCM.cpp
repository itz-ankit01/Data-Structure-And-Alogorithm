#include <bits/stdc++.h>
using namespace std;

int fun(int i, int j, string &s, int isTrue, vector<vector<vector<int>>> &dp){
    if(i > j) return 0;
    if(i == j) {
        if(isTrue == 1) {
            return( s[i] == 'T');
        }
        else return (s[i] == 'F');
    }
    if(dp[i][j][isTrue] != -1) return dp[i][j][isTrue];

    int ways = 0;
    for(int ind = i+1; ind <= j-1; ind += 2 ) {
        int lt = fun(i, ind-1, s, 1, dp);
        int lf = fun(i, ind-1, s, 0, dp);
        int rt = fun(ind+1, j, s, 1, dp);
        int rf = fun(ind+1, j, s, 0, dp);

        if(s[ind] == '&') {
            if(isTrue) ways += (lt * rt);
            else {
                ways = ways + lf*rf + lf*rt + rt*lf;
            }
        }
        else if(s[ind] == '|') {
            if(isTrue) {
                ways = ways + lt*rt + lf*rt + lt*rf;
            } else ways += (lf*rf);
        }
        else {
            if(isTrue) ways = ways + lt*rf + rt*lf;
            else ways = ways + lt*rt + lf*rf;
        }
    }
    return dp[i][j][isTrue] =  ways;
}

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    vector<vector<vector<int>>> dp(n+2, vector<vector<int>> (n+2, vector<int>(2, -1)));
    int ways = fun(0, n - 1, s, 1, dp);
    cout << ways << endl;

    return 0;
}


// -----------------------  tabulation ------------------------
// int main()
// {
//     string s;
//     cin >> s;
//     int n = s.size();
//     vector<vector<vector<int>>> dp(n+2, vector<vector<int>>(n+2, vector<int>(2, 0)));

//     for (int i = n-1; i >= 0; i--) {
//         for (int j = 0; j <= n-1; j++) {
//             if (i > j) continue;
//             for (int isTrue = 0; isTrue <= 1; isTrue++) {
//                 if (i == j) {
//                     if (isTrue)
//                         dp[i][j][isTrue] = (s[i] == 'T');
//                     else
//                         dp[i][j][isTrue] = (s[i] == 'F');
//                     continue;
//                 }

//                 int ways = 0;
//                 for (int ind = i + 1; ind <= j - 1; ind += 2) {
//                     int lt = dp[i][ind - 1][1];
//                     int lf = dp[i][ind - 1][0];
//                     int rt = dp[ind + 1][j][1];
//                     int rf = dp[ind + 1][j][0];

//                     if (s[ind] == '&') {
//                         if (isTrue) ways += lt * rt;
//                         else ways += lf * rf + lf * rt + lt * rf;
//                     } else if (s[ind] == '|') {
//                         if (isTrue) ways += lt * rt + lt * rf + lf * rt;
//                         else ways += lf * rf;
//                     } else if (s[ind] == '^') {
//                         if (isTrue) ways += lt * rf + lf * rt;
//                         else ways += lt * rt + lf * rf;
//                     }
//                 }

//                 dp[i][j][isTrue] = ways;
//             }
//         }
//     }

//     cout << dp[0][n - 1][1] << endl;
//     return 0;
// }