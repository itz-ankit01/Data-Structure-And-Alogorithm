#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        int n = nums.size();

        set<vector<int>> st;

        for (int i = 0; i < n; i++)
        {
            set<int> hashset;
            for (int j = i + 1; j < n; j++)
            {
                int sum = -(nums[i] + nums[j]);
                if (hashset.find(sum) != hashset.end())
                {
                    vector<int> v = {nums[i], nums[j], sum};
                    sort(v.begin(), v.end());
                    st.insert(v);
                }
                hashset.insert(nums[j]);
            }
        }
        vector<vector<int>> ans(st.begin(), st.end());
        return ans;
    }
};

// ----------------------- using pointers ----------------------

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;

        for(int i = 0; i < n; i++) {
            if(i > 0 && nums[i] == nums[i-1]) continue;
            int j = i+1; int k = n-1;
            while(j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if(sum == 0) {
                    ans.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                    while(j<k && nums[j] == nums[j-1]) j++;
                    while(j<k && nums[k] == nums[k+1]) k--;
                }
                else if(sum > 0) {
                    k--;
                }
                else j++;
            }
        }

        return ans;
    }
};