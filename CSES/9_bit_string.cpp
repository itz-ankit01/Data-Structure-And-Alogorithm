
#include<iostream>
using namespace std;
const int m = 1000000007;
int main(){
    int n;
    cin >> n;
    
    int fact = 1;
    for(int i=1; i<=n; i++){
        fact = (fact * 2) % m;
    }
    cout << fact << endl;
    return 0;
}