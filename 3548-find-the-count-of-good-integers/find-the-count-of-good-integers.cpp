class Solution {
public:
    long long countGoodIntegers(int n, int k) {
        int d = (n+1)/2;
        long long start = pow(10, d-1);
        long long end = pow(10, d) - 1;

        long long ans = 0;
        unordered_set<string> st;

        for(long long num = start; num <= end; num++) {
            string leftHalf = to_string(num);
            string full = "";

            if(n%2 == 0) {
                string rightHalf = leftHalf;
                reverse(rightHalf.begin(), rightHalf.end());
                full = leftHalf + rightHalf;
            } else {
                string rightHalf = leftHalf.substr(0, d-1);
                reverse(rightHalf.begin(), rightHalf.end());
                full = leftHalf + rightHalf;
            }

            long long temp = stoll(full);
            if(temp % k != 0) continue;

            sort(full.begin(), full.end());

            st.insert(full);
        } 

        vector<long long> factorial(11, 1);

        for(int i=1; i < 11; i++) {
            factorial[i] = factorial[i-1]*i;
        }

        for (const string &s: st) {
            vector<int> cnt(10, 0);
            for(const char &ch: s) {
                cnt[ch-'0']++;
            }

            int totalDigit = s.size();
            int zeroDigit = cnt[0];
            int nonZeroDigit = totalDigit - zeroDigit;

            long long perm = nonZeroDigit * factorial[n-1];
            for(int i=0; i<10; i++) {
                perm /= factorial[cnt[i]];
            }

            ans += perm;

        }
        return ans;
    }
};