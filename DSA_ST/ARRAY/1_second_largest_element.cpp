#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    
    for(int i=0; i<n; i++) {
        cin >> v[i];
    }

    int largest = -1;
    int slargest = INT_MIN;

    for(int i = 0; i < n; i++) {
        if(largest < v[i]) {
            slargest = largest;
            largest = v[i];
        }
        else if(largest != v[i] && slargest < v[i]) {
            slargest = v[i];
        }
    }

    cout << slargest << endl;

    return 0;
}