class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        long long s = 0;
        int n = arr.size();
        int maxLen = 0;

        int ans = 0;
        
        unordered_map<int, int>mp;
        mp[0] = 0;
        
        for(int i = 0; i < n; i++) {
            s+=arr[i];
            
            if (s == k) {
               
                ans++;
            }
            
            long long rem = s - k;
            
            if(mp.find(rem) != mp.end()) {
                ans += mp[rem];
            }
            
            mp[s]+=1;
            
        }
        return ans;
    }
};