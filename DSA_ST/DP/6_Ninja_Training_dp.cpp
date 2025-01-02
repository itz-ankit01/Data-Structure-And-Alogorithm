#include <bits/stdc++.h>
using namespace std;

// --------------------------- RECURSIVE WAY --------------------

class RecursiveNinja {
    int f(int day, int last, vector<vector<int>> &nums) {
        if(day == 0) {
            int maxi = INT_MIN;
            for(int task = 0; task < 3; task++) {
                if(task != last) {
                    maxi = max(maxi, nums[0][task]);
                }
            }
            return maxi;
        }

        int maxi = 0;
        for(int task = 0; task < 3; task++) {
            if(task != last) {
                int points = nums[day][task] + f(day-1, task, nums);
                maxi = max(points, maxi);
            }
        }
        return maxi;
    }
    public:
    int maximumPoints(vector<vector<int>>& arr, int n) {
        return f(n-1, 3, arr);
    }
};



// -------------------------MEMOIZATION --------------------------

/**
 * * TC -> O(N*4)*3;
 * * SC -> O(N) + O(N*4)
 */


class RecursiveNinja {
    int f(int day, int last, vector<vector<int>> &nums, vector<vector<int>> &dp) {
        if(day == 0) {
            int maxi = 0;
            for(int task = 0; task < 3; task++) {
                if(task != last) {
                    maxi = max(maxi, nums[0][task]);
                }
            }
            return maxi;
        }

        if(dp[day][last] != -1) return dp[day][last];

        int maxi = 0;
        for(int task = 0; task < 3; task++) {
            if(day != last) {
                int points = nums[day][task] + f(day-1, task, nums, dp);
                maxi = max(points, maxi);
            }
        }
        return dp[day][last] = maxi;
    }
    public:
    int maximumPoints(vector<vector<int>>& arr, int n) {
        vector<vector<int>> dp(n, vector<int>(4, -1));
        return f(n-1, 3, arr, dp);
    }
};


// ------------------------ TABULATION -------------------------

class Tabulation {
    int maximumPoints(vector<vector<int>>& arr, int n) {
        // Code here
        vector<vector<int>> dp(n, vector<int>(4, 0));
        dp[0][0] = max(arr[0][1], arr[0][2]);
        dp[0][1] = max(arr[0][0], arr[0][2]);
        dp[0][2] = max(arr[0][0], arr[0][1]);
        dp[0][3] = max(arr[0][0], max(arr[0][1], arr[0][2]));

        for(int day = 1; day < n; day++) {
            for(int last = 0; last < 4; last++) {
                dp[day][last] = 0;
                for(int task = 0; task < 3; task++) {
                    if(task != last) {
                        int points = arr[day][task] + dp[day-1][task];
                        dp[day][last] = max(points, dp[day][last]);
                    }
                }
            }
        }
        return dp[n-1][3];
    }
};