#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
            vector<int> nums;
            int n = nums1.size();
            int m = nums2.size();
            int i=0,j=0;
            while(i < n && j < m) {
                if(nums1[i] <= nums2[j]) {
                    nums.push_back(nums1[i]);
                    i++;
                }
                else {
                    nums.push_back(nums2[j]);
                    j++;
                }
            }
            while(i<n) {
                nums.push_back(nums1[i]);
                i++;
            }
            while(j<m) {
                nums.push_back(nums2[j]);
                j++;
            }
            int k = m+n;
            if(k&1) {
                return nums[k/2];
            }
            else {
                double a = nums[k/2];
                double b = nums[k/2-1];
                return (a+b)/2;
            }
        }
    };
// ---------------------- BS ---------------------------

class Solution {
    public:
        double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
            
            // always apply BS on smaller array -> O(log(min(m,n)))
    
            if(nums1.size() > nums2.size()) {
                return findMedianSortedArrays(nums2, nums1);
            }
    
            int n = nums1.size();
            int m = nums2.size();
    
            int low = 0, high = n;
    
            while(low <= high) {
                int Px = low + (high-low)/2;
                int Py = (n+m+1)/2 - Px;
    
                // left half elements from both array
                int x1 = (Px == 0) ? INT_MIN : nums1[Px - 1];
                int x2 = (Py == 0) ? INT_MIN : nums2[Py - 1];
    
                // right half elements from both Array
                int x3 = (Px == n) ? INT_MAX : nums1[Px];
                int x4 = (Py == m) ? INT_MAX : nums2[Py];
    
                if(x1 <= x4 && x2 <= x3) {
                    if((n+m) % 2 == 1) {
                        return max(x1, x2);
                    }
                    return (max(x1,x2) + min(x3,x4))/2.0;
                }
                else if(x1 > x4) {
                    high = Px - 1;
                }
                else {
                    low = Px + 1;
                }
            }
            return -1;
        }
    };
    
    /*
    we have 2 sorted array
    n = nums1.size(), m = nums2.size()
    median = n/2th element in sorted array, in odd size
            in even size -> middle 2 element
    
        we should have like
            left half           right half
            (n+m+1)/2           rest of element
            [3 ele               3 ele] -> even size -> ans avg of middlw 2 ele
            [4 ele               3 ele] -> odd size -> ans -> last ele of left half
    
        nums1 -> [a1, a2, a3, a4, a5];
        nums2 -> [b1, b2, b3, b4];
    
        total = (5+4+1)/2 -> 5 ele in left half
    
        left half  (5 ele)             right half
        a1, a2,a3 (3 el)                a4, a5
        b1, b2(2 el from nums2)         b3, b4
    
        low = 0, high = n;
    
        logic: a3 <= a4 -> always true, we have to check : is a3 <= b3
          and  b2 <= b3 -> always true, we have to check : is b2 <= a4
    
            if both cond satisfy , meaning we got the answer 
    
        else if(a3 > b3) 
            we remove some ele from nums1, and should take from nums2
            high = mid - 1;
        else if(b2 > a3):
            we should remove from nums2 and take from nums1
            low = mid + 1;
        
        edge case: when we take all element of any array
        left half           right half
        a1 a2 a3 a4 a5      INF
        -INF                b1 b2 b3 b4
    */