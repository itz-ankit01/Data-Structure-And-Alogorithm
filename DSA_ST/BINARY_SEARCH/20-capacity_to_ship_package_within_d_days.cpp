#include <bits/stdc++.h>
using namespace std;

class Solution {
    int fun(vector<int>& weights, int cap) {
        int day = 1;
        int sum = 0;
        for (int w : weights) {
            if (sum + w > cap) {
                day++;
                sum = 0;
            }
            sum += w;
        }
        return day;
    }
    
    public:
        int shipWithinDays(vector<int>& weights, int days) {
            int low = *max_element(weights.begin(), weights.end());
            int high = 0;
            for(auto it: weights) high += it;
            
            int ans = -1;
    
            while(low <= high) {
                int mid = low + (high-low)/2;
                int tempDay = fun(weights, mid);
    
                if(tempDay <= days) {
                    ans = mid;
                    high = mid - 1;
                }
                else low = mid + 1;
            }
            return ans;
        }
    };
    
    /*
    given - weights, days -> in these days, we have to deliver the package
    low = maxEl 
    high = sum ;
    mid ?? 
    fl = fun(weight, days, mid);
    if(fl) {
        ans = mid;
        high = mid - 1;
    } low = mid + 1;
    
    */
    
