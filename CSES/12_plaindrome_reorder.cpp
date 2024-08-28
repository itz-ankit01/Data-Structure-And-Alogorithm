#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main() {
    string str;
    cin >> str;
    int hash[26] = {0};
    vector<string> left;
    vector<string> mid;
    vector<string> right;

    for (int i = 0; i < str.size(); i++) {
        hash[str[i] - 'A']++;
    }
    int cnt = 0;
    for (int i = 0; i < 26; i++) {
        if ((hash[i] & 1) != 0) {
            cnt++;
        }
    }

    if (cnt > 1) {
        cout << "NO SOLUTION" << endl;
    }
    else {
        for (int i = 0; i < 26; i++) {
            if (hash[i] > 0) {
                string current = string(1, i + 'A');
                if (hash[i] % 2 == 0) {
                    for (int j = 0; j < hash[i] / 2; j++) {
                        left.push_back(current);
                        right.push_back(current);
                    }
                }
                else {
                    for(int j=0; j<hash[i]; j++){
                        mid.push_back(current);
                    }
                }
            }
        }
        
        string result;
        for (string s : left) {
            result += s;
        }
        for (string s : mid) {
            result += s;
        }
         reverse(right.begin(), right.end());
        for (string s : right) {
            result += s;
        }
        cout << result << endl;
    }
    return 0;
}
