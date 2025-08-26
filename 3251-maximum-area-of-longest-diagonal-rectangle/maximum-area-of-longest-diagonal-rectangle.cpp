class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int n = dimensions.size();

        int ans = 0;
        int dx = 0;

        for(int i=0; i<n; i++) {
            int len = dimensions[i][0];
            int width = dimensions[i][1];

            int diagonal = len*len + width*width;

            if(dx < diagonal) {
                dx = diagonal;
                ans = len * width;
            }
            else if(dx == diagonal) {
                ans = max(ans, len * width);
            }
            
        }
        return ans;
    }
};