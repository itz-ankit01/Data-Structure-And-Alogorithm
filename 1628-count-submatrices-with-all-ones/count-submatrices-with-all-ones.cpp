class Solution {
    int fun(vector<int> arr, int n ) {
        int k = 0;
        for(int i=0; i<n; i++) {
            if(i>0 && arr[i]!=0) {
                arr[i] += arr[i-1];
            }
            k += arr[i];
        }
        return k;
    }
public:
    int numSubmat(vector<vector<int>>& mat) {
        
        int ans = 0;
        int m = mat.size();
        int n = mat[0].size();

        for(int k=0; k<m; k++) {
            vector<int> arr(n, 1);
            for(int i=k; i<m; i++) {
                for(int j=0; j<n; j++) {
                    if(mat[i][j] == 0) arr[j] = 0;
                    else arr[j] &= 1;
                }
                ans += fun(arr, n);
            }
        }

        return ans;
    }
};