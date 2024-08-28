#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[9][9];
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cin >> arr[i][j];
        }
    }

    vector<int> a(27, 0); 

    for (int i = 0; i < 9; i++) {
        int r = 0;
        int c = 0;
        for (int j = 0; j < 9; j++) {
            r += arr[i][j];
            c += arr[j][i];
        }
        a[i] = r;
        a[9 + i] = c;
    }

    for (int i = 0; i < 9; i++) {
        int s = 0;
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                s += arr[i / 3 * 3 + j][i % 3 * 3 + k];
            }
        }
        a[18 + i] = s;
    }
    int hash[10] = {0};
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            hash[arr[i][j]]++;
        }
    }

    bool flag1 = true;
    bool flag2 = true;
    for (int i = 1; i < 10; i++) {
       
        if (a[i] != 9) {
            flag2 = false;
            break;
        }
    }
    for (int i = 0; i < 27; i++) {
       
        if (a[i] != 45) {
            flag1 = false;
            break;
        }
    }

    if (flag1 && flag2) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
