class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        int n = dominoes.size();
        for (auto& row : dominoes) {
            sort(row.begin(), row.end());
        }
        map< pair<int, int>, int > mp;

        for(auto it: dominoes) {
            mp[{it[0], it[1]}]++;
        }

        int ans = 0;
        for(auto it: mp) {
            int r = it.second;
            ans += (r*(r-1))/2;
        }
        return ans;
    }
};