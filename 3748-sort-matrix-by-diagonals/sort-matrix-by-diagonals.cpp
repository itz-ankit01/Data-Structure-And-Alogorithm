class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        int n = grid.size();

        for(int i=0; i<n; i++) {
            int k = i, j = 0;
            vector<int> temp;
            while(k < n && j < n) {
                temp.push_back(grid[k][j]);
                k++; j++;
            }
            sort(temp.begin(), temp.end(), greater<int>());
            k = i, j=0; 
            while(k < n && j < n) {
                grid[k][j] = temp[j];
                k++; j++;
            }
        }
        for(int j=1; j<n; j++) {
            int k = j, l = 0;
            vector<int> temp;
            while(k < n && l < n) {
                temp.push_back(grid[l][k]);
                k++; l++;
            }
            sort(temp.begin(), temp.end());
            k = j, l=0; 
            while(k < n && j < n) {
                grid[l][k] = temp[l];
                k++; l++;
            }
        }
        return grid;
    }
};