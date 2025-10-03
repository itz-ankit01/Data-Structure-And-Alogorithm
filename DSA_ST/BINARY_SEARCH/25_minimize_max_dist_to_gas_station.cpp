#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

class Solution {
    bool feasible(const vector<int>& stations, double d, int K) {
        long long needed = 0;
        int n = stations.size();
        for (int i = 1; i < n; ++i) {
            double gap = double(stations[i]) - double(stations[i-1]);
            if (gap > d) {
                // how many extra stations needed to ensure every segment <= d
                // segments = ceil(gap / d), extra stations = segments - 1
                long long extra = (long long)ceil(gap / d) - 1LL;
                needed += extra;
                if (needed > K) return false; // early exit
            }
        }
        return needed <= K;
    }

  public:
    double minMaxDist(vector<int> &stations, int K) {
        int n = stations.size();
        if (n < 2) return 0.0;

        double low = 0.0;
        double high = double(stations.back() - stations.front());
        double eps = 1e-6; // desired precision
        double ans = high;

        // Binary search on real numbers until precision reached
        while (high - low > eps) {
            double mid = (low + high) / 2.0;
            if (feasible(stations, mid, K)) {
                ans = mid;
                high = mid; // mid is feasible -> try smaller
            } else {
                low = mid;  // mid not feasible -> increase
            }
        }
        return ans; // or return high
    }
};


/*
we have a horitonzal line -> gas station at all index
add k more station , max dist d between gas station would be minimized

19 33 -> 14
14 / 3 -> 4.67
add 2 station -> (2+1) divide
low = 1;
high = mx-mn
m = 15, l=1, h=30
h = 14, l=1
m = 7
h = 6, l = 1
m = 3
**/
