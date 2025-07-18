class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mpp;
        stack<int> st;
        int n = nums2.size();
        for(int i = n-1; i >= 0; i--) {
            if(st.size() == 0) {
                mpp[nums2[i]] = -1;
            }
            else if(st.size() > 0 && nums2[i] < st.top()) {
                mpp[nums2[i]] = st.top();
            }
            else if(st.size() > 0 && nums2[i] >= st.top()) {
                while(st.size() > 0 && nums2[i] >= st.top()) {
                    st.pop();
                }
                if(st.size() == 0) mpp[nums2[i]] = -1;
                else mpp[nums2[i]] = st.top();
            }
            st.push(nums2[i]);
        }

        vector<int> ans;
        for(auto it: nums1) {
            ans.push_back(mpp[it]);
        }
        return ans;
    }
};