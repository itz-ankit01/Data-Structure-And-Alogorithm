#include<iostream>
using namespace std;

// int main(){
    /*
    char ch = '1';
    int num = 1;
    cout<<endl;
    switch( 2*num ){
        case 2: cout<<"First"<<endl;
                cout<<"First Again"<<endl;
                break;
        case '1': switch( num ){
            case 1: cout<<"Value of num is "<<num<<endl;
            break;
            }
            break;
        default: cout<<"It is default case"<<endl;
    }                */

// INFINITE LOOP IN SWITCH CASE  HOW TO EXIT
/*
    int num = 1;
    while(1){
        switch(num){
            case 1: cout<<"Value of num is "<<num<<endl;
                exit(12312);
                

            default: cout<<"It is default case "<<endl;
                break;
        }
    }         */


// USE OF CONTINUE IN CASE OF SWITCH IS NOT VALID
/*
    int num = 1;
    switch (num)
    {
    case 1:
        for(int i=0; i<=num; i++){
            if(i==num){
                continue;
            }
            cout<<i<<endl;
        }
        break;
    
    default:  cout<<"End"<<endl;
        break;
    }                  */

  /*  
    int n;
    cin>>n;
    int a = 100;
   
    while(n>0){
        switch(a){
        case 100: {
            cout <<"100 rupees notes ="<< n/100 <<endl;
            n = n - ((n/100)*100);
            a = 50;
            break;
        }
        case 50: {
            cout<<"50 rupees notes ="<<n/50<<endl;
            n = n - ((n/50)*50);
            a = 20;
            break;
        }

        case 20: {
            cout<<"20 rupees notes ="<<n/20<<endl;
            n = n - ((n/20)*20);
            a = 1;
            break;
        }

        case 1: {
            cout<<"1 rupee notes ="<<n/1<<endl;
            n = n - ((n/1)*1);
            
            break;
        }
    }
    }
    return 0;
}       */


// FUNCTIONS
/*
    int power(){
        int a , b;
        cin>>a>>b;
        int ans = 1;
        for(int i = 1; i<=b; i++ ){
            ans = ans * a;
        }
        return ans;
    }
    int main (){
       int ans = power();
        cout << ans << endl;

       ans = power();
        cout << ans << endl;

       ans = power();
        cout << ans << endl;

        ans = power();
        cout << ans << endl;

       ans = power();
        cout <<"Answer is "<< ans << endl;

        return 0;
    }            */


//  EVEN AND ODD
/*
    bool isEven(int a){
        // odd
        if(a & 1){
            return 1;
        }
        // even
        return 0;
    }
    int main(){
        int num;
        cin>>num;

        if(isEven(num)){
            cout<<"Number is Odd"<<endl;
        }
        else cout<<"Number is Even"<<endl;
        return 0;
    }           */

// CALCULATING nCr
/*

    int fact(int n){
        int ans = 1;
        for(int i=1; i<=n; i++){
            ans = ans * i;
        }
        return ans;
    }
    int nCr(int n,int r){
        int num = fact(n);
        int deno = fact(r) * fact(n-r);
        return num / deno;
    }
    int main (){
        int a , b;
        cin>> a >> b;
        cout << nCr(a,b)<<endl;
        return 0;
    }                 */

// PRIME NUMBER OR NOT 
/*
    bool isPrime(int n){
        for(int i= 2; i<n; i++){
            if(n%i==0){
                return 0;
            }
            return 1;
        }
    }
    int main(){
        int n;
        cin>>n;
        if(isPrime(n)){
            cout<<"Prime"<<endl;

        }
        else cout<<"Not Prime"<<endl;
        return 0;
    }        */

// AP PROBLEM

// a = 5 , b = 7 =>> 5(1 0 1) & 7(1 1 1).... total no of 1 in a and b == 5 (output)
/*
    int setbits(int a , int b){
        int count1 = 0 , count2 = 0;
        while(a != 0 && b != 0 ){
            if(a & 1){
                count1++;
            }
            if(b & 1){
                count2++;
            }
            a = a >> 1;
            b = b >> 1;
        }
        return count1 + count2;
    }
    int main(){
       int a , b;
       cin>>a>>b;
       cout<<setbits(a , b) << endl;
        return 0;
    } */

// FUNCTION OF FIBONACCI SERIES
/*
    int fibo(int n){
        int a = 0; 
        int b = 1;
        if(n == 1) return 0;
        if(n == 2) return 1;
        int nextNumber;
        for(int i = 1; i<=n-2; i++){
            nextNumber = a + b;
            a = b;
            b = nextNumber;
        }
        return nextNumber; 
    }
    int main(){
        int n; 
        cin>>n;
        cout << "The "<< n << "th term of fibonacci series is "<< fibo(n)<<endl;
        return 0;
    }                */

// PASS BY VALUE

    int dummy(int n){
        cout << " n is " << n << endl; 
        n++;
        cout << " n is " << n << endl;
        return n;
    }
    int main(){
        int n;
        cin>>n;
        int ans = dummy(n);
        cout<< " Number n is " << n << endl;
        cout<< " Number n is " << ans << endl;

        return 0;
    }