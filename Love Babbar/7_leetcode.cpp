#include <iostream>
#include <climits>
#include <cmath>
using namespace std;
int main()
{

    // REVERSE A NUMBER IF IT IS IN HIS 32 BIT RANGE OTHERWISE RETURN 0
    /*
        int n;
        cin>>n;
        int rev = 0;
        while(n != 0){
            int digit = n % 10;
            if((rev > INT_MAX/10) || (rev < INT_MIN)){
                rev = 0;
            }
            rev = rev * 10 + digit;
            n/=10;
        }
        cout << rev << endl;              */

    // 2'S COMPLEMENT
    // 5 -> 101 , 010-> 2
    /*
        int n;
        cin>>n;
        int m = n;
        int mask = 0;

        while(m != 0){
            mask = (mask << 1) | 1 ;
            m = m >> 1;
        }

        int ans = (~n) & mask ;
        cout << ans << endl;             */

    //  POWER OF 2
    /*
         int n;
         cin>>n;
         int ans = 1;
         for(int i = 0; i <= 30; i++){
            if( ans == n){
                cout<<"True"<<endl;
                break;
            }
            ans =  ans * 2;
            if(ans > n){
                cout<<"False"<<endl;
                break;
            }
         }                 */

    // OTHER GANDFAAND SOLUTION OF PREVIOUS PROBLEM ..... LOGIC=>> IF NUMBER OF SETBITS IS 1 THEN THE NUMBER WILL BE POWER OF 2
    int n;
    cin >> n;
    int count = 0;
    while (n != 0)
    {
        if (n & 1)
        {
            count++;
        }
        n = n >> 1;
    }
    if (count == 1)
    {
        cout << "yes" << endl;
    }
    else
        cout << "No " << endl;

    return 0;
}