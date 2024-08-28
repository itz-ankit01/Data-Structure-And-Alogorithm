#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector <int> v(n);

    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    vector <int> mxL(n);
    vector <int> mxR(n);

    mxL[0] = v[0];
    for(int i=1; i<n; i++){
        mxL[i] = max(mxL[i-1], v[i]);
    }

    mxR[n-1] = v[n-1];
    for(int i=n-2; i>=0; i--) mxR[i] = max(mxR[i+1], v[i]);

    vector<int> water(n);

    for(int i=0; i<n; i++){
        water[i] = min(mxL[i], mxR[i]) - v[i];
    }

    int sum = 0;
    for(int i=0; i<n; i++){
        sum += water[i];
    }

    cout << sum << endl;


    return 0;
}