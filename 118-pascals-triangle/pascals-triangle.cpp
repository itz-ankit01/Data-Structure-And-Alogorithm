class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;

        int n = numRows;
        ans.push_back({1});
        for(int i = 1; i < n; i++) {
            vector<int> v(i+1);
            for(int j = 0; j <= i; j++) {
                if(j != i )v[j] = ans[i-1][j] ;
                if(j-1>=0) v[j] += ans[i-1][j-1];
            }
            ans.push_back(v);
        }

        return ans;
    }
};