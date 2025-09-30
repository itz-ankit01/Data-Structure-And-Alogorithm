#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int maxProduct(vector<int>& nums) {
            int n = nums.size();
    
            
    
            int ans = INT_MIN;
            int cnt = -1;
            for(int i=0; i < n; i++) {
                cnt = 1;
                for(int j=i; j < n; j++) {
                    cnt *= nums[j];
                    ans = max(ans, cnt);
                }
            }
            // ans = max(ans, cnt);
            return ans;
        }
    };

    // --------------------- O(n) --------------------------


    class Solution {
        public:
            int maxProduct(vector<int>& nums) {
                int n = nums.size();
                int ans = INT_MIN;
                int pre = 1, suff = 1;
                for(int i=0; i<n; i++) {
                    if(pre == 0) pre = 1;
                    if(suff == 0) suff = 1;
                    pre *= nums[i];
                    suff *= nums[n-i-1];
                    ans = max(ans, max(pre, suff));
                }
                return ans;
        
            }
        };


    // -------------------------------------------------

    class Solution {
        public:
            int maxProduct(vector<int>& nums) {
                int n = nums.size();
                int prod_max ,prod_min , ans;
                prod_max = nums[0]; prod_min = nums[0];
                ans = nums[0];
        
                for(int i=1; i<n; i++) {
                    int x = nums[i];
                    int old_min = prod_min;
                    int old_max = prod_max;
                    prod_max = max({x, x * old_min, x * old_max});
                    prod_min = min({x, x * old_min, x * old_max});
        
                    ans = max(ans, prod_max);
                }
        
                return ans;
        
            }
        };