#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        string frequencySort(string s) {
            unordered_map<char,int> mp;
            for (char c : s) {
                mp[c]++;
            }
    
            vector<pair<char,int>> vec(mp.begin(), mp.end());
    
            // sort by frequency in descending order
            sort(vec.begin(), vec.end(), [](pair<char,int>& a, pair<char,int>& b){
                return a.second > b.second;
            });
    
            string ans;
            for (auto& it : vec) {
                char ch = it.first;
                int freq = it.second;
                ans.append(freq, ch); // repeat 'ch' freq times
            }
    
            return ans;
        }
    };
    