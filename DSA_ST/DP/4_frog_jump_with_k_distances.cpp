#include <bits/stdc++.h>
using namespace std;



class solution {

    // RECURSIVE WAY

    int fun(int ind, int k, vector<int> &v) {
        if(ind == 0) return 0;

        int minstep = INT_MAX;

        for(int j = 1; j <= k; j++) {
            int jump = INT_MAX;
            if(ind-j >= 0) {
                jump = fun(ind-j, k, v) + abs(v[ind] - v[ind-j]);
            }
            minstep = min(minstep, jump);
        }
        return minstep;
    }

    // MEMOIZATION TECHNIQUE


    public:
    int minimizeCost(int k, vector<int>& arr) {
        int n = arr.size();

        vector<int> dp(n, -1);
    }
};