class Solution {
public:
    int numberOfArrays(vector<int>& differences, int lower, int upper) {
        long long sum = 0;
        long long min_val = 0, max_val = 0;

        for (int d : differences) {
            sum += d;
            min_val = min(min_val, sum);
            max_val = max(max_val, sum);
        }

        long long range = upper - lower;
        if (max_val - min_val > range) return 0;
        return range - (max_val - min_val) + 1;
    }
};
