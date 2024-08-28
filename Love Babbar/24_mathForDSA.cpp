#include<iostream>
#include<vector>
using namespace std;

// OPTIMISED CODE FOR FINDING PRIME NUMBER
/*
int main(){
    
    int n;
    cin >> n;
    vector<bool> prime(n+1, true);
    int cnt = 0;

    prime[0] = prime[1] = false;

    for(int i=2; i<n; i++){
        if(prime[i]){
            cnt++;
            for(int j = 2*i; j<n; j = j+i){
                prime[j] = 0;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}           */

// OPTIMISED CODE FOR FINDING GCD 
/*
int gcd(int a, int b){
    if(a == 0) return b;
    if(b == 0) return a;

    while(a != b){
        if(a>b) a = a-b;
        else b = b-a;
    }
    return a;
}

    int main(){
        int a, b;
        cin >> a >> b;
        int ans = gcd(a, b);
        
        cout << "The GCD of " << a << " " << b << " is " << ans << endl;
        return 0;
    }             */

