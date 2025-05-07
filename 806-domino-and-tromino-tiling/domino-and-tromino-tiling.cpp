class Solution {
    long long m = 1000000007;
public:
    int numTilings(int n) {
        vector<int> dp(n+1, 0);
        if(n<=2){
            return n;
        }
        dp[0] = 1;
        dp[1] = 1;
        dp[2] = 2;
        dp[3] = 5;
        for(int i=4; i<=n; i++) {
           dp[i] = ( (2LL * dp[i-1] % m) + dp[i-3] ) % m;

        }
        return dp[n];
    }
};