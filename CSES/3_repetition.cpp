#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cin >> str;
   
    int cnt = 1;
    char prev = str[0];
    
    int maxi = 1;
    for(int i=1; i<=str.length()-1; i++){
        if(prev == str[i]){
            cnt++;
        }
        else {
            prev = str[i];
            cnt = 1;
        }
        maxi = max(cnt, maxi);
    }
    cout << maxi << endl;
    return 0;
}