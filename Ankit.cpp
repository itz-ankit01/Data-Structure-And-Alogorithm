#include <bits/stdc++.h>
using namespace std;

int fun(vector<int> &v, int n, int last, int ind, int &maxi) {
    if(ind == n) {
        return 0;
    }
    // pick
    int take = 0;
    if(last == -1 || v[last] < v[ind]) {
        take = 1 + fun(v, n, ind, ind+1, maxi);
    }
    // not pick
    int notTake = fun(v, n, last, ind + 1, maxi);

    return maxi = max(take, notTake);
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int maxi = INT16_MIN;
    fun(v, n,-1, 0, maxi);

    cout << maxi << endl;

    return 0;
}
