class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        int n = intervals.size();
        vector<pair<int, int>> v;

        for(int i = 0; i < n; i++) {
            v.push_back({intervals[i][0], 'l'});
            v.push_back({intervals[i][1], 'r'});
        }

        sort(v.begin(), v.end());
        int cnt = 0;
        int mn = INT_MAX;
        int mx = INT_MIN;
        for(int i = 0; i < 2*n; i++) {
            if(v[i].second == 'l') {
                mn = min(mn, v[i].first);
                cnt++;
            }
            else {
                cnt--;
                mx = max(mx, v[i].first);
            }

            if(cnt == 0) {
                ans.push_back({mn, mx});
                mn = INT_MAX;
                mx = INT_MIN;
            }
        }
        return ans;
    }
};