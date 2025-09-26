#include <bits/stdc++.h>
using namespace std;

// using loop and swap

class Solution {
    public:
        void sortColors(vector<int>& nums) {
            int i = 0, j = 0;
            int n = nums.size();
    
            while(j < n) {
                if(nums[j] == 0) {
                    swap(nums[i], nums[j]);
                    i++; j++;
                }
                else j++;
            }
    
            j = i;
            while(j < n) {
                if(nums[j] == 1) {
                    swap(nums[i], nums[j]);
                    i++;
                    j++;
                }
                else j++;
            }
        }
    };

// ---------------------- 3 pointers ------------------------------------

class Solution {
    public:
        void sortColors(vector<int>& nums) {
            // 3 pointers
            int n = nums.size();
            int low = 0, mid = 0, high = n-1;
    
            while(mid <= high) {
                if(nums[mid] == 0) {
                    swap(nums[low], nums[mid]);
                    low++;
                    mid++;
                }
                else if(nums[mid] == 1) {
                    mid++;
                }
                else {
                    swap(nums[mid], nums[high]);
                    high--;
                }
            }
        }
    };