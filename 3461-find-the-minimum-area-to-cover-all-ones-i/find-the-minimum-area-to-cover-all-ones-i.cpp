class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        int x1=0,x2=0,y1=0,y2=0;
        bool f = true;

        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(f && grid[i][j] == 1) {
                    y1 = i; y2 = i;
                    f = false;
                }
                else if(grid[i][j] == 1){
                    y2 = i;
                }
            }
        }
        f = true;
        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                if(f && grid[j][i] == 1) {
                    x1 = i; x2 = i;
                    f = false;
                }
                else if(grid[j][i] == 1){
                    x2 = i;
                }
            }
        }
        int w = abs(x2-x1)+1;
        int h = abs(y2-y1)+1;

        return w*h;
    }
};