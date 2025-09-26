class Solution {
public:
    long long flowerGame(int n, int m) {
        long long odd = (n+1)/2;
        long long even = n/2;

        long long o2 = (m+1)/2;
        long long e2 = (m/2);

        long long ans = odd*e2 + even * o2;

        return ans;
    }
};