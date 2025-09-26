class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>> dp = matrix;

        for(int i=1; i<n; i++) {
            for(int j=0; j<n; j++) {
                int c1=INT_MAX, c2=INT_MAX, c3=INT_MAX;
                if(j-1>=0)c1 = dp[i-1][j-1];
                c2 = dp[i-1][j];
                if(j+1<n)c3 = dp[i-1][j+1];

                dp[i][j] += min({c1,c2,c3});
            }
        }

        int nas = INT_MAX;
        for(int i=0; i<n; i++) {
            nas = min(nas, dp[n-1][i]);
        }

        return nas;
    }
};
