#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int n = nums.size();
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            if (mp.find(target - nums[i]) != mp.end())
            {
                return {i, mp[target - nums[i]]};
            }
            else
                mp[nums[i]] = i;
        }

        return {};
    }
};

// --------------------- 2 pointer --------------
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int n = nums.size();
        vector<pair<int, int>> v(n);

        for (int i = 0; i < n; i++)
        {
            v[i] = {nums[i], i};
        }

        sort(v.begin(), v.end());

        int l = 0, r = n - 1;

        while (l < r)
        {
            int sum = v[l].first + v[r].first;
            if (sum == target)
            {
                return {v[l].second, v[r].second};
            }
            else if (sum < target)
                l++;
            else
                r--;
        }

        return {};
    }
};