#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[9][9];
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cin >> arr[i][j];
        }
    }

    vector<int> a(27, 0);  // Initialize a vector of size 27 with all elements set to 0.

    for (int i = 0; i < 9; i++) {
        int rowSum = 0;
        int colSum = 0;
        for (int j = 0; j < 9; j++) {
            rowSum += arr[i][j];
            colSum += arr[j][i];
        }
        a[i] = rowSum;
        a[9 + i] = colSum;
    }

    for (int i = 0; i < 9; i++) {
        int subgridSum = 0;
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                subgridSum += arr[i / 3 * 3 + j][i % 3 * 3 + k];
            }
        }
        a[18 + i] = subgridSum;
    }

    bool flag = true;
    for (int i = 0; i < 27; i++) {
       
        if (a[i] != 45) {
            flag = false;
            break;
        }
    }

    if (flag) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
