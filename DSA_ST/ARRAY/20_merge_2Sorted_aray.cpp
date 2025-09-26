#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
            for(int i = m; i < m+n; i++) {
                nums1[i] = nums2[i - m ];
            }
            // for(auto it: nums1) cout << it << " ";
            // cout << endl;
    
            for(int i=0; i<m+n; i++) {
                for(int j = i+1; j < m+n; j++) {
                    if(nums1[i] > nums1[j]) {
                        swap(nums1[i], nums1[j]);
                    }
                }
            }
        }
    };

// ----------------------------- 2 pointer + sort -----------------

class Solution {
    public:
        void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
            
            int left = m-1;  // it will move towards 0
            int right = m;   // it will move towards n
    
            for(int i = m; i < m+n; i++) {
                nums1[i] = nums2[i-m];
            }
    
            while(left >= 0 && right < n+m) {
                if(nums1[left] > nums1[right]) {
                    swap(nums1[left], nums1[ right]);
                    left--;
                    right++;
                }
                else break;
            }
    
            sort(nums1.begin(), nums1.end() - n);
            sort(nums1.begin()+m, nums1.end());
            
        }
    };

    // --------------------------- 