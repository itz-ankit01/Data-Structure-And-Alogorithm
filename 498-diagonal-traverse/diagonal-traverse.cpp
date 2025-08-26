class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        vector<int> ans;
        bool f = true;

        int m = mat.size();
        int n = mat[0].size();

  

    int i=0, j=0;
    int k = 0;
    while(k < m*n) {
        if(f) {
            while(i >= 0 && j <= n-1) {
                ans.push_back(mat[i][j]);
                i--; j++;
                k++;
            }
            f = false;
            i++; j--;
            if(j+1 < n) j++;
            else i++;
        }
        else {
            while(i < m && j >=0) {
                ans.push_back(mat[i][j]);
                i++;
                k++;
                j--;
            }
            i--; j++;
            if(i+1 < m) i++;
            else j++;
            f = true;
        }
        if(i >= m || j >= n) break;
    }

    return ans;

    }
};