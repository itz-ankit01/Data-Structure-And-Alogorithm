class Solution {
    // NSL
    void NSL(vector<int> &nums, vector<int> &nsl) {
        int n = nums.size();
        stack<pair<int,int>> st;
        for(int i = 0; i < n; i++) {
            while(!st.empty() && st.top().first >= nums[i]) {
                st.pop();
            }
            nsl[i] = st.empty() ? -1 : st.top().second;

            st.push({nums[i], i});
        }
    }


    // NSR
    void NSR(vector<int> &nums, vector<int> &nsr) {
        int n = nums.size();
        stack<pair<int, int>> st;
        for(int i = n-1; i >= 0; i--) {
            while(!st.empty() && st.top().first > nums[i]) {
                st.pop();
            }
            nsr[i] = st.empty() ? n : st.top().second;
            st.push({nums[i], i});
        }
    }

    // NGR
    void NGR(vector<int> &nums, vector<int> &ngr) {
        int n = nums.size();
        stack<pair<int, int>> st;
        for(int i = n-1; i >= 0; i--) {
            while(!st.empty() && st.top().first <= nums[i]) {
                st.pop();
            }
            ngr[i] = st.empty() ? n : st.top().second;
            st.push({nums[i], i});
        }
    }

    // NGL
    void NGL(vector<int> &nums, vector<int> &ngl) {
        int n = nums.size();
        stack<pair<int, int>> st;
        for(int i = 0; i < n; i++) {
            while(!st.empty() && st.top().first < nums[i]) {
                st.pop();
            }
            ngl[i] = st.empty() ? -1 : st.top().second;
            st.push({nums[i], i});
        }
    }
public:
    long long subArrayRanges(vector<int>& nums) {
        int n = nums.size();
        vector<int> ngr(n);
        vector<int> ngl(n);
        vector<int> nsr(n);
        vector<int> nsl(n);

        NSR(nums, nsr);
        NSL(nums, nsl);
        NGR(nums, ngr);
        NGL(nums, ngl);

        long long maxi = 0, mini = 0;
        for(int i = 0; i < n; i++) {
            int sl = i - nsl[i];
            int sr = nsr[i] - i;
            mini = mini + (sl * sr * 1LL* nums[i]);

            int gl = i - ngl[i];
            int gr = ngr[i] - i;
            maxi = maxi + (gl * gr * 1LL * nums[i]);
        }

        return maxi - mini;
    }
};