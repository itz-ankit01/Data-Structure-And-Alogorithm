#include <bits/stdc++.h>
using namespace std;

int longestSubArrayWithGivenSum(vector<int>&nums, int k) {
    int maxLen = 0;
    int n = nums.size();
    unordered_map<int, int> mp;
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += nums[i];

        if(sum == k) {
            maxLen = i+1;
        }

        int rem = sum - k;

        if(mp.find(rem) != mp.end()) {
            int len = i - mp[rem];
            maxLen = max(len, maxLen);
        }

        if(mp.find(sum) == mp.end()) {
            mp[sum] = i;
        }
    }
    return maxLen;
}

int longestSubArrayWithGivenSum(vector<int> &nums, int k)
{

    // only pos element
    int maxLen = 0;
    int n = nums.size();

    int left = 0, right = 0;
    int sum = 0;

    while (right < n)
    {
        sum += nums[right];
        if (sum > k)
        {
            sum -= nums[left++];
        }
        else if (sum == k)
        {
            maxLen = max(maxLen, right - left + 1);
        }
        right++;
    }
    return maxLen;
}

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> nums(n);

    for (int i = 0; i < n; i++)
        cin >> nums[i];

    int ans = longestSubArrayWithGivenSum(nums, k);

    cout << ans << endl;

    return 0;
}

// [11,1,2,2,3,3,0,0,5] k = 10