#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        vector<int> spiralOrder(vector<vector<int>>& matrix) {
            int n = matrix.size();
            int m = matrix[0].size();
            vector<int> ans;
            int fr = 0;
            int lc = m-1;
            int lr = n-1;
            int fc = 0;
    
            int k = 0;
            while(k < m*n) {
                for(int i = fc; i <= lc; i++) {
                    ans.push_back(matrix[fr][i]);
                    k++;
                }
                if(k == m*n) break;
                fr++;
    
                for(int i = fr; i <= lr; i++) {
                    ans.push_back(matrix[i][lc]);
                    k++;
                }
                if(k == m*n) break;
                lc--;
    
                for(int i = lc; i >= fc; i--) {
                    ans.push_back(matrix[lr][i]);
                    k++;
                }
                if(k == m*n) break;
                lr--;
                for(int i = lr; i >= fr; i--) {
                    ans.push_back(matrix[i][fc]);
                    k++;
                }
                if(k == m*n) break;
                fc++;
            }
            return ans;
        }
    };