#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int eraseOverlapIntervals(vector<vector<int>>& intervals) {
            int n = intervals.size();
    
            // treat this question n meeting in a room
    
            sort(intervals.begin(), intervals.end(), [](const vector<int>&a, const vector<int> &b) {
                return a[1] < b[1];
            });
    
            int cnt = 1;
            int idx = 0;
            for(int i=1; i<n; i++) {
                if(intervals[i][0] >= intervals[idx][1]) {
                    cnt++;
                    idx = i;
                }
            }
            return n - cnt;
        }
    };