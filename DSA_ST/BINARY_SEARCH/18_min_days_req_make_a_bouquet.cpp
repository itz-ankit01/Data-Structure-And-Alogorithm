#include <bits/stdc++.h>
using namespace std;

class Solution {
    bool fun(vector<int>&v, int m, int k, int d) {
        int ans = 0;
        int cnt = 0;
        for(int i=0; i<v.size(); i++) {
            if(v[i] <= d) {
                cnt++;
                if(cnt == k) {
                    m--;
                    cnt = 0;
                }
            }
            else {
                cnt = 0;
            }
        }
        if(m <= 0) return true;
        return false;
    }
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int low = *min_element(bloomDay.begin(), bloomDay.end());;
        int high = *max_element(bloomDay.begin(), bloomDay.end());
        int ans = -1;
        while(low <= high) {
            int mid = low + (high-low)/2;
            bool fl = fun(bloomDay, m, k, mid);

            if(fl) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};

/*
LOgic : m bookey -> k adj flowers
if m*k < n -> return -1;
low = 1, high = maxElemnt;
mid = (low+high)/2;

*/