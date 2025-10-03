#include <bits/stdc++.h>
using namespace std;

class Solution {

    public:
        bool searchMatrix(vector<vector<int>>& matrix, int target) {
            int n = matrix.size();
            for(int i=0; i<n; i++) {
                int idx = upper_bound(matrix[i].begin(), matrix[i].end(), target) - matrix[i].begin();
    
                if(idx == 0) return false;
                if(matrix[i][idx-1] == target) return true;
            }
            return false;
        }
    };
// TC -> O(nlogm)
// ---------------------------------- -------------------------------


class Solution {

    public:
        bool searchMatrix(vector<vector<int>>& matrix, int target) {
            int n = matrix.size();
            int m = matrix[0].size();
    
            int i = 0, j = m-1;
            while(i < n && j >= 0) {
                if(matrix[i][j] == target) return true;
    
                else {
                    if(matrix[i][j] > target) j--;
                    else i++;
                }
            }
            return false;
        }
    };

    // TC -> O(N+M)