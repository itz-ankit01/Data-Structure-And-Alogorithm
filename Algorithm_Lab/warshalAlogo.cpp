#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef long long ll;

void topology(int a[][10], int n) {
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            if(a[i][j] == -1) {
                a[i][j] = 1e9;
            }
            if(i == j) a[i][j] = 0;
        }
    }

    for(int k=0; k<n; k++){
        for(int i = 0; i < n; ++i) {
            for(int j = 0; j < n; ++j) {
            a[i][j] = min(a[i][j], a[i][k]+a[k][j]);
        }
    }
    }

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            if(a[i][j] == 1e9) {
                a[i][j] = -1;
            }
        }
    }

// print
for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

}

int main() {
    int n;
    cin >> n;

    int a[10][10];  
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }

    topology(a, n);
    return 0;
}
