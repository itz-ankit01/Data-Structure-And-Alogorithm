class Solution {
public:
    int numRabbits(vector<int>& answers) {
        int n = answers.size();
        unordered_map<int, int> mp;
        for(int i=0; i<n; i++) {
            mp[answers[i]]++;
        }
        int ans = 0;
        for(auto it : mp) {
            if(it.second > it.first + 1) {
                ans += it.first + 1;
                int a = it.first + 1; 
                int b = it.second - it.first - 1;
                int c = (b+a-1)/(a);
                ans += (c*a);
            } else {
                ans += it.first + 1;
            }
        }

        return ans;
    }
};