class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        unordered_map<int, pair<int,int>> mp;
        int n = tops.size();
        for(int i=0; i<n; i++) {
            mp[tops[i]].first++;
        }
        for(int i=0; i<n; i++) {
            mp[bottoms[i]].second++;
        }
        vector<int> v;
        for(auto it: mp) {
            int m = it.second.first + it.second.second;
            if(m >= n) {
                v.push_back(it.first);
            }
        }
        int ans  = -1;
        if(v.size() > 0) {
            bool f = false;
            for(int i=0; i<n; i++) {
                if(v[0] != tops[i] && v[0] != bottoms[i]) {
                    f = true;
                    break;
                }
            }
            if(f) return ans;
            else {
                ans = n - max(mp[v[0]].first, mp[v[0]].second);
                return ans;
            }
        }
        return ans;
    }
};