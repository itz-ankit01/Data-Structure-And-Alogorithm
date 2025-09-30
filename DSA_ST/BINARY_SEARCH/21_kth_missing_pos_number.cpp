#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findKthPositive(vector<int> &arr, int k)
    {
        vector<int> v;
        int n = arr.size();
        int z = 1;
        for (int i = 0; i < n; i++)
        {
            while (z != arr[i])
            {
                v.push_back(z);
                z++;
            }
            z = arr[i] + 1;
        }
        v.push_back(z);
        if (v.size() < k)
        {
            int a = v.back();
            k -= v.size();
            a += k;
            return a;
        }
        else
            return v[k - 1];
    }
};

/*
given -arr -> strictly increasing, kth missing find

*/

// ---------------------------

class Solution
{
public:
    int findKthPositive(vector<int> &arr, int k)
    {
        int n = arr.size();
        int low = 0;
        int high = n - 1;

        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            int missing = arr[mid] - (mid + 1);
            if (missing < k)
            {
                low = mid + 1;
            }
            else
                high = mid - 1;
        }
        return high + 1 + k;
    }
};