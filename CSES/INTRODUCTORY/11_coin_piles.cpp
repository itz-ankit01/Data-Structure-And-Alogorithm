#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long int a, b;
        cin >> a >> b;
        int maxi = max(a, b);
        int mini = min(a, b);
        if((maxi <= 2 * mini) && ((a+b)%3)==0){
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
    return 0;
}