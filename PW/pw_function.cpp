#include<iostream>
using namespace std;
/*
void greet(){       // declaration of function
    cout<<"Good Morning"<<endl;
    cout<<"How are you"<<endl;
    return;
}
int main()
{
    greet();     // calling of function 
    greet();
    return 0;
}    */


/*
void england(){
    cout<<"You are in England"<<endl;  // 6
    return;     // 7
}

void australia(){
    cout<<"You are in Australia"<<endl;   // 4
    england();         // calling england  // 5
    return;       // 8
}

void india(){
    cout<<"You are in India"<<endl;  // 2
    australia();       // calling australia   // 3
    return;        // 9
}
int main(){
    india();   // calling india   // 1
        return 0;     // 10
}           */

    //  PASS BY VALUE
    /*
    int add(int x, int y){
        return x+y;
    }

    int main(){
        int a ,b;
        cout<<"Enter 1st num ";
        cin>>a;
        cout<<"Enter 2nd num ";
        cin>>b;
        int sum = add(a,b);
        cout<<sum;

        return 0;
    } */
// LIBRARY FUNCTION 
/*
#include<math.h>

    int main(){
        int a;
        cout<<"Enter a number ";
        cin>>a;
        int root = sqrt(a);
       // cout<<"The square root is "<<root;
        int x = pow(2,5);
        cout <<x<<endl;
        int q= min(3,8);
        cout<<q;
         return 0;
    }    */

    // FUNCTION PROTOTYPE
  /* 
         int main(){
            void fun(); 
            fun();
            return 0;
        }
        void fun(){
            cout<<"Hello";
        }         */

// PERMUTTION AND COMBINATION QUESTION USING FUNCTION
        /*
        int factorial(int x){
            int fact=1;
            for(int i=2; i<=x; i++){
                fact*=i;
            }
            return fact;
        }
        int combination(int n, int r){
             int ncr =factorial(n)/( factorial(r)* factorial(n-r));
             return ncr;
        }
        int main(){
            int n,r;
            cout<<"Enter n: ";
            cin>>n;
            cout<<"Enter r: ";
            cin>>r;
            int ncr = combination(n,r);
            cout<<ncr<<endl;
            return 0;

        }                 */
    
    // PRINTING PASCAL TRIANGLE
/*
    1 
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1             */
/*
        int factorial(int x){
            int fact=1;
            for(int i=2; i<=x; i++){
                fact*=i;
            }
            return fact;
        }
        int combination(int n, int r){
             int ncr =factorial(n)/( factorial(r)* factorial(n-r));
             return ncr;
        }
        int main(){
            int n;
            cout<<"Enter n: ";
            cin>>n;
            for(int i=0; i<=n; i++){
                for(int s=0; s<=n-i-1; s++) cout<<" ";
                for(int j=0; j<=i; j++){
                    int ncr = combination(i,j);
                    cout<<ncr<<" ";
                }
                cout<<endl;
            }
            
            return 0;

        }          */

        // ULTIMATE CODE OF PREVIOUS PROBLEM PASCAL TRIANGLE
/*
        int main(){
            int n;
            cout<<"Enter n ";
            cin>>n;
            for(int i=0; i<=n; i++){
                int first =1;
                  for(int s=0; s<=n-i-1; s++) cout<<" ";
                for(int j=0; j<=i; j++){
                    cout<<first<<" ";
                    first = first* (i-j)/(j+1); 
                      // iC(j+1)
                }
           cout<<endl;
            }
            return 0;  
        }        */


        // SWAPPING OF NUMBER
        /*
        void swap(int x , int y){
            int temp =x;
            x = y;
            y=temp;         // this function doesn't work as here only value is passed not the address of a and b so, 
                             //change will be made only in swap function , the actual value of a and b will not be change
            return;
        }
        int main(){
            int a;
            cout<<"Enter a ";
            cin>>a;
            int b;
            cout<<"Enter b ";
            cin>>b;
            swap(a,b);
            cout<<"the value of a is "<<a<<endl;
            cout<<"the value of b is "<<b<<endl;
            return 0;

        }         */


//  SWAPPING OF TWO NUMBER WITHOUT USING A THIRD VARIABLE
//   a =3, b = 5;
// a = a+b;
// b = a - b
// a = a - b
/*
  int main(){
            int a;
            cout<<"Enter a ";
            cin>>a;
            int b;
            cout<<"Enter b ";
            cin>>b;
            a = a + b;
            b = a - b;
            a = a - b; 
            cout<<"the value of a is "<<a<<endl;
            cout<<"the value of b is "<<b<<endl;
            return 0;

        }         */

//  POINTERS :- kisi bhi variable ka address store krta h

/*
        int main(){
            int a =5;
            int b = 5;
            cout<<&a<<endl;;  // & a means address of a
             cout<<&b<<endl;; 
             int* x = &a;   // int * is used to store the address of any variable 
             *x = 7;    // a is changed
             cout<<x<<endl;
             cout<<&x<<endl;
             cout<<*x<<endl;
             return 0;
        } 
*/

// SWAPPING OF TWO NUMBER USING PASS BY REFERENCE
/*
            void swap(int * x , int * y){
            int temp ;
            temp = *x;  // temp =2
           *x = *y;     // a = 9
           *y = temp;    // b = 2
            return;
        }   
        int main(){
            int a = 2;
            int b = 9;
            swap(&a,&b);
            cout<<"the value of a is "<<a<<endl;
            cout<<"the value of b is "<<b<<endl;
            return 0;

        }      */
/*
        int main(){
            int a = 25;
            int *x = &a;    // int* -> int ka address store karta hai
            // *x = 7; // a is changed
            int ** y = &x;   // int** -> int* ka address store karta hai
            int ***z = &y;
            cout<<a<<endl;
            cout<<y<<endl;
            cout<<x<<endl;
            cout<<*x<<endl;
            cout<<**y<<endl;
            cout<<***z<<endl;
            return 0;
        }       */


/*

        int min(int a, int b){
            if(a<b) return a;
            else return b;
        }

        int gcd(int a, int b){
            int hcf;
            for(int i=min(a,b); i>=1; i--){
                    if(a%i==0 && b%i==0){
                        hcf = i;
                        break;
                    }
            }
            return hcf;
        }
        
        int main(){
            int a;
            cout<<"Enter a ";
            cin>>a;
             int b;
            cout<<"Enter b ";
            cin>>b;
            int hcf = gcd(a,b);
            cout<<"the hcf of "<<a<<" "<<"and"<<" "<<b<<" is "<<hcf<<endl;

            return 0;
        }
*/
