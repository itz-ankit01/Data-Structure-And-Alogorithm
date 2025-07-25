class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> mpp;   // {freq, ele}

        for(auto it: nums) {
            mpp[it]++;
        }
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minh;

        for(auto it: mpp) {
            minh.push({it.second, it.first});
            if(minh.size() > k) minh.pop();
        }
        vector<int> ans;
        while(minh.size() > 0) {
            ans.push_back(minh.top().second);
            minh.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};