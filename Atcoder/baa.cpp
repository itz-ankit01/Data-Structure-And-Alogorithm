#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums;
    int n;
    cin >> n;
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        nums.push_back(a);
        maxi = max(nums[i], maxi);
    }
    vector<int> hash(maxi + 1, 0);
    for (int i = 0; i < n; i++) {
        hash[nums[i]]++;
    }
    nums.clear();
    for (int i = 0; i < hash.size(); i++) {
        if (hash[i] != 0) {
            for (int j = 0; j < hash[i]; j++) {
                nums.push_back(i);
            }
        }
    }

    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i];
        if (i < nums.size() - 1) {
            cout << " ";
        }
    }
    
    return 0;
}
