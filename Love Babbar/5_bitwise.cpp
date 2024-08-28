#include <iostream>
using namespace std;
int main()
{
    /*
    int a = 4;
    int b = 6;
    cout << " a&b " << (a & b) << endl;
    cout << " a|b " << (a | b) << endl;
    cout << " ~a " << ~a << endl;
    cout << " a^b " << (a ^ b) << endl;

    cout << (17 >> 1) << endl;
    cout << (17 >> 2) << endl;
    cout << (19 << 1) << endl;
    cout << (21 << 2) << endl;

    int i = 7;
    cout << (i++) << endl;
    // 8
    cout << (++i) << endl;
    // 9
    cout << (i--) << endl;
    // 8
    cout << (--i) << endl;
    // 7                */

    /*
        int a, b = 1;
        a = 10;
        if (++a)
            cout << b;
        else
            cout << ++b;            */

    /*
        int a = 1;
        int b = 2;
        if (a-- > 0 && ++b > 2)
        {
            cout << "Stage1 - Inside if ";
        }
        else
        {
            cout << "Stage2 - Inside else ";
        }
        cout << a << " " << b << endl;          */

    // FOR LOOP
    /*
        int n;
        cout<<"Enter the value of n "<<endl;
        cin>>n;
        cout<<"Printing count from 1 to  n "<<endl;\

        int i = 1;
        for(;;){
            if(i<=n){
                cout<<i<<endl;
            }
            else{
               break;
            }
            i++;
        }         */

    // Multiple Conditions
    /*
        for (int a = 0, b = 1, c = 2; a >= 0 && b >= 1 && c >= 2; a--, b--, c--)  {

            cout << a << " " << b << " " << c<<endl<<endl;
        }       */

    // FIBONACCI SERIES
    /*
        int n = 10;
        int a = 0;
        int b = 1;
        cout<<a<<" "<<b<<" ";
        for(int i=1; i<=n-2; i++){
            int nextNumber = a + b;
            cout<<nextNumber<<" ";
            a = b;
            b = nextNumber;

        }           */

    //  PRIME NUMBER
    // USE OF BREAK
    /*
        int n;
        cin>>n;
        bool isPrime = 1;
        for(int i = 2; i<n; i++){
            if(n%i==0){
                isPrime = 0;
                break;
            }
        }
        if(isPrime == 0){
            cout<<"Not a prime"<<endl;
        }
        else {
            cout<<"Prime"<<endl;
        }         */

    // AND and CONTINUE
    /*
        for(int i =0; i<=15; i+=2){
            cout<<i<<" ";
            if(i&1){
                continue;
            }
            i++;
        }         */

    // VARIABLES AND SCOPES
    /*
        int a =3;
        cout<<a<<endl;
        if(true){
            int b = 5;
            cout<<b<<endl;
        }
        int b = 1;
        cout<<b<<endl;

        // int b = 3;
        cout<<b<<endl;
        int i = 8;
        for(int i = 0; i<8; i++){
            cout<<"HI"<<endl;
        }
        if(1){
            int b;
            if(1){
                int b;
                if(1){
                    int b;
                }
            }
        }*/

    // SUBSTRACT THE PRODUCT AND SUM OF DIGITS PAIRS
    /*
        int n;
        cin>>n;
        int sum = 0 , prdt = 1;
        while(n>0){
            int ld = n % 10;
            sum+=ld;
            prdt*=ld;
            n/=10;
        }
        cout<<prdt - sum << endl;              */

    // EVEN AND ODD
    /*
        int n;
        cin>>n;
        if(n&1){
            cout<<"odd"<<endl;
        }
        else cout<<"Even"<<endl;
        */

    // NUMBER OF 1 BIT'S PROBLEM

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
    cout << count << endl;

    return 0;
}