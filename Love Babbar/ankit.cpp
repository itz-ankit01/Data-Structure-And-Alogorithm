#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    bool flag = false;
    string s1, s2;
    cin >> s1 >> s2;
    vector<int> v1(26);
    int i = 0;
    int n1 = s1.size();
    while (i < n1) {
        v1[s1[i] - 'a']++;
        i++;
    }
    vector<int> v2(26);
    int n2 = s2.size();
    
    for (int i = 0; i <= n2 - n1; i++) {
        for (int j = i; j <= n1 + i - 1; j++) {
            v2[s2[j] - 'a']++;
        }
        
        if (v1 == v2) {
            flag = true;
            break; 
        } else {
            flag = false;
            for (int k = 0; k < 26; k++) {
                v2[k] = 0; 
            }
        }
    }
    
    cout << flag << endl;
    
    return 0;
}
