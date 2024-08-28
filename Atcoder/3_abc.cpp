#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int n;
    cin >> n;
    string str;
    cin >> str;
    int cnt = -1;
    int i = 0;
    while(i < n-2){
        if(str[i] == 'A' && str[i+1] == 'B' && str[i+2] == 'C' ){
            cnt = i;
            break;
        }
        i++;
    }
    if(cnt == -1) cout << "-1" << endl;
    else cout << cnt + 1 << endl;
    return 0;
}