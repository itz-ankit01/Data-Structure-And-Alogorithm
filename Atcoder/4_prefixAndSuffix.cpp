#include<iostream>
#include<cstring>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;
    bool flag1 = false;
    bool flag2 = false;
    
    // Check prefix
    for(int i = 0; i < n; i++){
        if(s[i] != t[i]){
            flag1 = true;
            break;
        }
    }
    
    // Check suffix
    for(int i = n-1, j = m-1; i >= 0 && j >= 0; i--, j--){
        if(s[i] != t[j]){
            flag2 = true;
            break;
        }
    }

    if(!flag1 && !flag2) cout << "0" << endl;
    else if(!flag1 && flag2) cout << "1" << endl;
    else if(flag1 && !flag2) cout << "2" << endl;
    else cout << "3" << endl;
    
    return 0;
}
