#include <bits/stdc++.h>
using namespace std;

class Recursivesolution
{

    int fun(int ind, int k, vector<int> &v)
    {
        if (ind == 0)
            return 0;

        int minstep = INT_MAX;

        for (int j = 1; j <= k; j++)
        {
            int jump = INT_MAX;
            if (ind - j >= 0)
            {
                jump = fun(ind - j, k, v) + abs(v[ind] - v[ind - j]);
            }
            minstep = min(minstep, jump);
        }
        return minstep;
    }

public:
    int minimizeCost(int k, vector<int> &arr)
    {
        int n = arr.size();

        vector<int> dp(n, -1);
    }
};

// Memoization

class MemoizationSolution
{

    int fun(int ind, int k, vector<int> &v, vector<int> &dp)
    {
        if (ind == 0)
            return 0;

        int minstep = INT_MAX;

        if (dp[ind] != -1)
            return dp[ind];

        for (int j = 1; j <= k; j++)
        {
            int jump = INT_MAX;
            if (ind - j >= 0)
            {
                jump = fun(ind - j, k, v, dp) + abs(v[ind] - v[ind - j]);
            }
            minstep = min(minstep, jump);
        }
        return dp[ind] = minstep;
    }

public:
    int minimizeCost(int k, vector<int> &arr)
    {
        int n = arr.size();

        vector<int> dp(n, -1);
        return fun(n - 1, k, arr, dp);
    }
};

// TABULATION

class TabulationSolution
{
public:
    int minimizeCost(int k, vector<int> &arr)
    {
        int n = arr.size();

        vector<int> dp(n);
        dp[0] = 0;

        for (int i = 1; i < n; i++)
        {
            int minstep = INT_MAX;
            for (int j = 1; j <= k; j++)
            {
                int jump = INT_MAX;
                if (i - j >= 0)
                {
                    jump = dp[i - j] + abs(arr[i] - arr[i - j]);
                }
                minstep = min(minstep, jump);
            }
            dp[i] = minstep;
        }
        return dp[n - 1];
    }
};