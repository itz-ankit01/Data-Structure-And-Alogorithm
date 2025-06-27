#include <bits/stdc++.h>
using namespace std;

class Solution {
    private:
        void dfs(int sr, int sc, int color, int initialColor, vector<vector<int>> &ans, vector<vector<int>>&image, int drow[], int dcol[]) {
            int n = image.size();
            int m = image[0].size();
            ans[sr][sc] = color;
            
            for(int i=0; i<4; i++) {
                int nrow = sr + drow[i];
                int ncol = sc + dcol[i];

                if(nrow >= 0 && nrow < n && ncol >=0 && ncol < m && ans[nrow][ncol] != color && image[nrow][ncol] == initialColor) {
                    dfs(nrow, ncol, color, initialColor, ans, image, drow, dcol);
                }
            }
        }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<vector<int>> ans = image;
        int initialColor = image[sr][sc];
        int drow[] = {-1, 0, 1, 0};
        int dcol[] = {0, 1, 0, -1};
        dfs(sr, sc, color, initialColor, ans, image, drow, dcol);
        return ans;
    }
};