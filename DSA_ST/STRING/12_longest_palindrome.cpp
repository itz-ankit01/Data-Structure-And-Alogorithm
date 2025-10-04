#include <bits/stdc++.h>
using namespace std;

class Solution {
    /**
    Here main idea is to expand each char, treating them as a center, exapnd it till we get palindrome
    */
public:
    string longestPalindrome(string s) {
        
        int maxLen = 0;
        int bestL = 0, bestR = 0;
        int n = s.size();

        // odd length
        for(int i=0; i<n; i++) {
            int l=i, r = i;
            while(l>=0 && r<n && s[l] == s[r]){
                if(r-l+1 > maxLen){
                    maxLen = r-l+1;
                    bestL = l;
                    bestR = r;
                }
                l--; r++;
            }
        }

        // even length
        for(int i=0; i<n; i++) {
            int l=i, r=i+1;
            while(l>=0 && r<n && s[l]==s[r]){
                if(r-l+1>maxLen){
                    maxLen = r-l+1;
                    bestL=l;
                    bestR = r;
                }
                l--;
                r++;
            }
        }

        string ans = "";
        for(int i=bestL; i<=bestR; i++){
            ans += s[i];
        }
        return ans;
    }
};