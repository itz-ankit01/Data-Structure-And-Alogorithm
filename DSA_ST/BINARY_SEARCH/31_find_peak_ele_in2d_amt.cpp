#include <bits/stdc++.h>
using namespace std;

/*
Idea : low = 0, high = m-1;
    for mid -> we will iterate in column and find max element row,
        then we will compare
            left < mx_el > right -> return ans;
        else if(left > mx_el) -> search in left , we can get answer
        else in right
*/

class Solution {
    int findMaxRowIndex(vector<vector<int>> &mat, int col) {
        int row = -1;
        int mx = INT_MIN;
        for(int i=0; i<mat.size(); i++) {
            if(mx < mat[i][col]) {
                row = i;
                mx = mat[i][col];
            }
        }
        return row;
    }
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();

        int low = 0, high = m - 1;
        while(low <= high) {
            int mid = low + (high-low)/2;
            int row = findMaxRowIndex(mat, mid);
            int left = (mid > 0) ? mat[row][mid-1] : -1;
            int right = (mid + 1 < m) ? mat[row][mid+1] : -1;

            if(mat[row][mid] > left && mat[row][mid] > right) {
                return {row, mid};
            }
            else if(mat[row][mid] < left) {
                high = mid - 1;
            }
            else low = mid + 1;
        }
        return {-1, -1};
    }
};