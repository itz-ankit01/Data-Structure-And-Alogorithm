#include <bits/stdc++.h>
using namespace std;

class Solution {
    long long fun(const vector<int>& piles, int sp) {
        long long ans = 0;
        for (int it : piles) {
            ans += (it + sp - 1) / sp; // integer ceiling
        }
        return ans;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        int ans = high;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            long long hr = fun(piles, mid);

            if (hr <= (long long)h) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};
