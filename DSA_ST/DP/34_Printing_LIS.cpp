#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ;
    cin >> n;
    vector<int> nums(n);
    for(int i=0; i<n; i++) cin >> nums[i];
    int maxi = 1;
    int lastIndex = 0;
    vector<int> t(n, 1), hash(n);
    for (int i = 0; i < n; i++)
    {
        hash[i] = i;
        for (int j = 0; j < i; j++)
        {
            if (nums[i] > nums[j] && t[i] < 1 + t[j])
            {
                t[i] = 1 + t[j];
                hash[i] = j;
            }
        }
        if (maxi < t[i])
        {
            maxi = t[i];
            lastIndex = i;
        }
    }

    cout << "maxi -> " << maxi << endl;

    vector<int> temp;
    temp.push_back(nums[lastIndex]);
    while (hash[lastIndex] != lastIndex)
    {
        lastIndex = hash[lastIndex];
        temp.push_back(nums[lastIndex]);
    }
    reverse(temp.begin(), temp.end());

    for (auto it : temp)
        cout << it << " ";
    cout << endl;

    return 0;
}


// ------------------------- Binary search -------------------------


class Solution {
        
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();

        vector<int> tmp;
        tmp.push_back(nums[0]);
        int len = 1;
        for(int i=1; i<n; i++) {
            if(tmp.back() < nums[i]) {
                tmp.push_back(nums[i]);
                len++;
            }
            else {
                int ind = lower_bound(tmp.begin(), tmp.end(), nums[i]) - tmp.begin();
                tmp[ind] = nums[i];
            }
        }
        return len;
    }
};

