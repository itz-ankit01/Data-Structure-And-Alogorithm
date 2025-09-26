#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    long int t;
    cin >> t;
    while(t--){
        long long int y, x;
        cin >> y >> x;
        long long int maxi = max(x, y);
        long long int diagonal = (maxi * maxi) - maxi + 1;
        long long int a = abs(maxi - y) + abs(maxi - x);
        
        if((y & 1) == 0 && (x&1) !=0) cout << diagonal + a << endl;
        else  if((y & 1) != 0 && (x&1) ==0) cout << diagonal - a << endl;
        else  if((y & 1) != 0 && (x&1) !=0) {
            if(y > x) cout << diagonal - a << endl;
            else cout << diagonal + a << endl;
        }
        else{
            if(y > x) cout << diagonal + a << endl;
            else cout << diagonal - a << endl;
        }
        
        

    }
    return 0;
}