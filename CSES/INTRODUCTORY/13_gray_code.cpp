#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;

int power(int n) {
    int p = 1;
    for (int i = 1; i <= n; i++) {
        p = p * 2;
    }
    return p;
}

string decimalToBinary(int n, int len) {
    if (n == 0) {
        string temp(len, '0');
        return temp;
    }

    string temp = "";
    while (n != 0) {
        int rem = n % 2;
        temp = to_string(rem) + temp;
        n /= 2;
    }

    while (temp.length() < len) {
        temp = "0" + temp;
    }

    return temp;
}

string binaryTogray(string binary) {
    string gray = "";
    int i = 1;
    gray = binary[0];
    while (i < binary.length()) {
        string t = to_string(binary[i] ^ binary[i - 1]);
        gray = gray + t;
        i++;
    }
    return gray;
}

int main() {
    int n;
    cin >> n;

    int len = 1 << n;
    for (int i = 0; i < len; i++) {
        string binary = decimalToBinary(i, n);
        cout << binaryTogray(binary) << endl;
    }
    return 0;
}
