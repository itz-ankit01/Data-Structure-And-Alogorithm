#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int i=1;
    bool f = false;
    while(i<n){
        if((s[i] == 'a' && s[i-1] == 'b') || (s[i] == 'b' && s[i-1] == 'a')){
            f = true;
            break;
        }
        else {
            f = false;
        }
        i++;
    }
    if (f) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}