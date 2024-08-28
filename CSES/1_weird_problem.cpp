#include<iostream>
using namespace std;
int main(){
    long long int n;
    cin >> n;
    cout << n << endl;
  
     while(n!=1){
        if((n & 1) == 0) {
            n = n/2;
            cout << n <<" ";
        }
        else {
            n = 3*n +1 ;
            cout << n << " ";
        }
    
   }
    return 0;
}