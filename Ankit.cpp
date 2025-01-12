#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <algorithm>
using namespace std;

// Function to calculate the worth of a string
int calculateWorth(const string &s) {
    int worth = 0;
    for (char c : s) {
        worth += (c - 'a' + 1);
    }
    return worth;
}

int main() {
    int N, M;
    cin >> N >> M;

    vector<string> strings(N);
    vector<int> costs(N);
    vector<int> worth(N);

    // Input strings
    for (int i = 0; i < N; ++i) {
        cin >> strings[i];
    }

    // Input costs
    for (int i = 0; i < N; ++i) {
        cin >> costs[i];
        worth[i] = calculateWorth(strings[i]);
    }

    // Map to store contradictions
    unordered_map<string, int> stringIndex; // Map string to index
    vector<int> contradictionMask(N, 0);   // Bitmask for contradictions

    for (int i = 0; i < N; ++i) {
        stringIndex[strings[i]] = i;
    }

    for (int i = 0; i < M; ++i) {
        string a, b;
        cin >> a >> b;
        if (stringIndex.count(a) && stringIndex.count(b)) {
            int idxA = stringIndex[a];
            int idxB = stringIndex[b];
            contradictionMask[idxA] |= (1 << idxB);
            contradictionMask[idxB] |= (1 << idxA);
        }
    }

    int budget;
    cin >> budget;

    // DP array: dp[cost] represents the maximum worth achievable for a given cost
    vector<int> dp(budget + 1, 0);
    vector<int> state(budget + 1, 0); // Tracks the selected bitmask for each cost

    // Iterate over all strings
    for (int i = 0; i < N; ++i) {
        // Update DP table in reverse to avoid overwriting results
        for (int c = budget; c >= costs[i]; --c) {
            // Check if adding this string violates contradictions
            if ((state[c - costs[i]] & contradictionMask[i]) == 0) { // No conflict
                int newWorth = dp[c - costs[i]] + worth[i];
                if (newWorth > dp[c]) {
                    dp[c] = newWorth;
                    state[c] = state[c - costs[i]] | (1 << i); // Update state
                }
            }
        }
    }

    // Output the maximum worth
    cout << *max_element(dp.begin(), dp.end()) << endl;

    return 0;
}


