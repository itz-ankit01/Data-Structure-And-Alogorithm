class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        priority_queue<pair<int , char>> heap1;
        priority_queue<pair<int, char>> heap2;
        unordered_map<char, int> mp;
        int ans = 0;

        for(auto it: tasks) mp[it]++;
        for(auto it: mp) {
            heap1.push({it.second, it.first});
        }

        while(!heap1.empty()) {
            for(int i=0; i<=n; i++) {
                if(!heap1.empty()) {
                    auto it = heap1.top();
                    heap1.pop();
                    it.first--;
                    if(it.first != 0) {
                        heap2.push(it);
                    }
                }
                if(!heap1.empty() || !heap2.empty()) ans++;
            }
            while(!heap2.empty()) {
                heap1.push(heap2.top());
                heap2.pop();
            }
        }
        return ans+1;
    }
};