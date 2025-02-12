#include <iostream>
#include <cmath>
using namespace std;
int main()
{
// CONVERTING DECIMAL TO BINARY NUMBER

    // int n;
    // cin >> n;
    // int ans = 0;
    // int i = 0;
    // while (n != 0)
    // {
    //     int bit = n & 1; // for getting last bit
    //     ans = (bit * pow(10, i)) + ans;
    //     n = n >> 1; // for removing last bit
    //     i++;
    // }
    // cout <<"Answer is "<< ans << endl;              

//  CONVERTING NEGATIVVE DECIMAL TO BINARY

    int n;
    cin>>n;
    int ans = 0; 
    int i = 0;
    int t = n * (-1);
    
    while(t!=0){
        int t = (~t) + 1;
        int bit  = t & 1;
        ans = (bit * pow(10,i)) + ans;
        n = n>>1;
        i++;
    } 
    cout << " Answer is " << ans << endl;              

// BINARY TO DECIMAL CONVERSION
/*
    int n;
    cin>>n;
    int ans = 0;
    int i = 0;
    while(n>0){
        int digit = n & 1;
        if(digit == 1){
            ans = (digit * pow(2 , i)) + ans;
        }

        n /= 10;
        i++;
    }     
    cout<<" Answer is " << ans << endl;
 */


}