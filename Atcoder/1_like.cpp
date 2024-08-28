#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int rem = 0;
        int prev=  0;
        bool flag = 1;
        while(n!=0){
            rem = n % 10;
            
            if(rem > prev){
                n/=10;
                prev = rem;
            }
            else {
                flag = 0;
                break;
            }
        }
        if(flag == 0) cout << "No" << endl;
        else cout << "Yes" << endl;
    }
    return 0;
}