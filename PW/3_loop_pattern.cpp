#include <iostream>
using namespace std;
int main()
{   // To print
    /*1  ABCDE
         ABCD
         ABC
         AB
         A         */
 /*   
int n;
cin>>n;
for(int i=1; i<=n; i++){
    char letter = 'A';
    for(int cnt=0; cnt<=n-i; cnt++){
        cout<<letter;
        letter++;
    } cout<<endl;
}        */             

    /*2 A
        AB
        ABC
        ABCD
        ABCDE    */
    /*
int n;
cin>>n;
for(int i=1; i<=n; i++){
    char letter = 'A';
    for(int cnt=1; cnt<=i; cnt++){
        cout<<letter;
        letter++;
    } cout<<endl;
}               */

    /*

*
* *
* * *
* * * *
* * * * *           */
    /*
int n;
cin>>n;
for(int i=1; i<=n; i++){
for(int col=1; col<=i; col++){
cout<<"* ";
}
cout<<endl;
}                   */

    /*

    *****
    *****
    *****
    *****
    *****        */
    /*

int row;
cin>>row;
for(int i=1; i<=row; i++){
for(int col=1; col<=row; col++ ){
cout<<"*";
}
cout<<endl;
}          */
/*
     * * * * *
     * * * *
     * * *
     * *
     *            */
    /*
int row;
cin>>row;
for(int i=1; i<=row; i++){
for(int j=1; j<=(row-i+1); j++){
cout<<"* ";
}
cout<<endl;
}            */
                                    /*
*****
 ****
  ***
   **
    *
                     */

   /*                     
    int n;
    cin>>n;
    int nsp=0;
    int nst=n;
    for(int i=1; i<=n; i++){
        for(int s=1; s<=nsp; s++) cout<<" ";
        for(int j=1; j<=nst; j++) cout<<"*";
        nsp++;
        nst--;
        cout<<endl;
    }            */



    /*
 1
 1 2
 1 2 3
 1 2 3 4
 1 2 3 4 5        */
    /*

int row;
cin>>row;
for(int i=1; i<=row; i++){
for(int col=1; col<=i; col++){
cout<<col<<" ";
}
cout<<endl;
}
   */
    /*

*
* *
* * *
* * * *
* * * * *
* * * *
* * *
* *
*           */
    /*
       int n;
       cin>>n;

       for(int row=1; row<= 2*n-1; row++){
        int col= row>n ? 2 *n - row : row;
        for(int j=1; j<=col; j++){
            cout<<"* ";
        }
        cout<<endl;
       }            */
    /*

      *
     * *
    * * *
   * * * *
  * * * * *
   * * * *
    * * *
     * *
      *
               */
    /*

int n;
cin>>n;

for(int row=1; row<= 2*n-1; row++){
int col= row>n ? 2 *n - row : row;
int spaces;
for(spaces=0; spaces<= n-col; spaces++){
cout<<" ";
}
for(int j=1; j<=col; j++){
cout<<"* ";
}
cout<<endl;
}               */
    /*

         1
       2 1 2
     3 2 1 2 3
   4 3 2 1 2 3 4
 5 4 3 2 1 2 3 4 5              */
    
/*
       int n; cin>>n;
       for(int row=1; row<=n; row++){
            for(int space=1; space<=2*(n-row); space++){
                cout<<" ";
            }
            for(int col=row; col>=1; col--){
                cout<<col<<" ";
            }
            for(int col=2; col<=row; col++){
                cout<<col<<" ";
            }
            cout<<endl;
       }           */       
    /*

     1
    212
   32123
  4321234
 543212345
  4321234
   32123
    212
     1              */
    /*

   int n;
   cin>>n;
   for(int row=1; row<=2*n-1; row++){
    int temp = row>n ? row - n : n-row;
    for(int space=1; space <= temp ; space++){
        cout<<" ";
    }
    int temp_digit = row>n ? 2*n - row : row;
    for(int col =temp_digit; col>=1; col--){
        cout<<col;
    }
    for(int col = 2; col<=temp_digit; col++){
        cout<<col;
    }
    cout<<endl;
   }
                     */
    /*

    *
   * *
  * * *
 * * * *
* * * * *
*/ 

/*
     int n;
     cin>>n;
     for(int row=1; row<=n; row++){
         for(int space=1; space<=n-row; space++){
             cout<<" ";
         }
         for(int col=1; col<=row; col++)
         {
             cout<<"* ";
         }
         cout<<endl;
     }  */       

    /**

 * * * * *
  * * * *
   * * *
    * *
     *
           * /
 /*
     int n;
     cin>>n;
     for(int row=1; row<=n; row++){
         for(int space=1; space<=row-1; space++){
             cout<<" ";
         }
         for(int col=1; col<=n-row+1; col++)
         {
             cout<<"* ";
         }
         cout<<endl;
     }
                **/
    /*
* * * * *
 * * * *
  * * *
   * *
    *
   * *
  * * *
 * * * *
* * * * *
     */
    
/*
int n;
cin>>n;
for(int row=1; row<= 2*n-1; row++){
  int temp_space = row>n ? 2*n -row -1 : row-1;
  for(int space=1; space<=temp_space; space++){
      cout<<" ";
  }
  int temp_star= row>n ? row-n+1 : n-row+1;
  for(int col=1; col<=temp_star; col++){
      cout<<"* ";
  }
  cout<<endl;
}  */       
    /**
     
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *

*/ /* 
    int n;
    cin>>n;
    for(int row=1; row<=2*n-1; row++){
      int temp_star = row>n ? 2*n-row : row;
      for(int col=1; col<=temp_star; col++){
          cout<<"*";
      }
      int temp_space = row>n ? 2*(row-n) : 2*(n-row);
      for(int space=1; space<=temp_space; space++){
          cout<<" ";
      }
      int temp_star1 = row>n ? 2*n-row : row;
      for(int col=1; col<= temp_star1; col++){
              cout<<"*";
      }
      cout<<endl;
    }    */          
    /*
    1
    AB
    123
    ABCD
    12345             */
    /*

        int n;
        cout<<"Enter the no ";
        cin>>n;
        for(int i=1; i<=n; i++){
            if(i%2==1){
                for(int j=1; j<=i; j++){
                    cout<<j;
                }
            }
            else {
                char ch='A';
                for(int j=1; j<=i;){
                    cout<<ch;
                    ch++;
                    j++;
                }
            }
            cout<<endl;
        }
                   */
    /**
STAR PLUS
  *
  *
*****
  *
  *
       */
    
/*
int n;
cout<<"Enter n ";
cin>>n;
for(int i=1; i<=n; i++){
for(int space=1; space<=n/2; space++){
if(i==(n/2)+1)
continue;
cout<<" ";
}
int temp_star = (i==(n/2)+1) ? n : 1;
for(int j=1; j<=temp_star; j++){
cout<<"*";
}
cout<<endl;
}              */

    // ANOTHER CODE FOR THE UPPER PROBLEM
    /*
    int n;
    cout<<"Enter n ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i== (n/2)+1 || j==(n/2)+1){
                cout<<"*";
            }
            else {
                cout<<" ";
            }
        }
        cout<<endl;
    }            */
    /*

******
*    *
*    *
******
           */
    /*

int row , col;
cout<<"Enter the number of row ";
cin>>row;
cout<<"Enter the number of col ";
cin>>col;
for(int i=1; i<=row; i++){
for(int j=1; j<=col; j++){
if(i==1 || j==1 || i==row || j==col){
    cout<<"*";
}
else {
    cout<<" ";
}
}
cout<<endl;
}              */
// ALTERNATE CODE OF PREVIOUS PROBLEM

/*
 int r , c;
    cin>>r>>c;
    for(int i=1; i<=r; i++){
        if(i==1 || i==r){
            for(int j=1; j<=c; j++)
            cout<<"*";
        }
        else {   cout<<"*";
        for(int k=1 ; k<=c-2; k++)
        cout<<" ";
        cout<<"*";
            
        } cout<<endl;
    }          */
           
   /*

*   *
 * *
  *
 * *
*   *
                   */
  /*
int n;
cout << "Enter the n ";
cin >> n;
for (int i = 1; i <= n; i++)
{
for (int j = 1; j <= n; j++)
{
if ( j == n - i + 1 || i == j )
{
cout << "*";
}
else
{
cout << " ";
}
}
cout<<endl;
}                 */          

    /*
1
2 3
4 5 6
7 8 9 10      */

    /*
        int n,t=1;
        cout<<"Enter n ";
        cin>>n;

        for(int i=1; i<=n; i++){

            for(int j=1; j<=i; j++){
                cout<<t<<" ";
                t++;
            }
            cout<<endl;
        }              */
    /*
    1
    0 1
    1 0 1
    0 1 0 1
    1 0 1 0 1             */
    /*
         int n,t;
        cout<<"Enter n ";
        cin>>n;

        for(int i=1; i<=n; i++){
            if(i%2!=0) t=1;
            else t=0;
            for(int j=1; j<=i; j++){
                cout<<t<<" ";
                if(t==1) t=0;
                else t=1;
            }
            cout<<endl;
        }      */
    // OTHER CODE OF PREVIOUS PROBLEM
    /*
        int n;
        cout<<"Enter n ";
         cin>>n;

          for(int i=1; i<=n; i++){

            for(int j=1; j<=i; j++){
               if((i+j)%2==0) cout<<"1";
               else cout<<"0";
            }
            cout<<endl;
        }           */
    /*
        A
       AB
      ABC
     ABCD
    ABCDE                */
    /*
        int n;
        cout<<"Enter n ";
        cin>>n;
        for(int i=1; i<=n; i++){
            for(int space =1; space<=n-i; space++){
                cout<<" ";
            }
             char ch ='A';
                for(int j=1; j<=i; j++){

                    cout<<ch;
                    ch++;
                }
          cout<<endl;
        }
                       */

 /* A
   ABA
  ABCBA
 ABCDCBA         */  /*

    int n;
    cout<<"Enter n ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int s = 1; s <= n - i; s++)
        {
            cout << " ";
        }
        char ch = 'A';
        for (int j = 1; j <= i; j++)
        {
            cout << ch;
            ch++;
        }
        ch -= 2;
        for (int k = i - 1; k > 0; k--)
        {
            cout << ch;
            ch--;
        }
        cout << endl;
    }              */
// N will always be odd 
             /*
  *
 ***
*****
 ***
  *
                   */  /*
    int n;
    cout<<"Enter the  number of line "; 
    cin>>n;
     int nsp = n/2;
     int nst =1;
    int ml = n/2 +1; 
    for (int i = 1; i <= n; i++)
    {
       for(int j=1; j<=nsp; j++){ // spaces
        cout<<" ";
       }
       for(int k=1; k<=nst; k++){   // stars
         cout<<"*";
       }
       if (i < ml){
         nsp--;
         nst+=2;
       } else {
        nsp++;
        nst-=2;
       }

       cout<<endl;
    }               */
/*

*******
*** ***
**   **
*     *
                         */
/*
   int n;
   cout<<"Enter the  number of line "; 
   cin  >>n;
    for(int i=1; i<=n; i++){
        if(i==1) {
            for(int j=1; j<=2*n-1; j++)
            cout<<"*";
        }
        else{
            for(int j=1; j<=n-i+1; j++) cout<<"*";
            for(int s=1; s<=2*i-3; s++) cout<<" ";
             for(int j=1; j<=n-i+1; j++) cout<<"*";
        }
     cout<<endl;
    }              */

// ALTERNATE CODE FOR PREVIOUS ONE
 /*
    int n;
   cout<<"Enter the  number of line "; 
   cin  >>n;    
   int nsp=1 , nst=n-1;
    for(int i=1; i<=n; i++){
            if(i==1){
                for(int j=1; j<=2*n-1;j++) cout<<"*";
            }
            else {
            for(int j=1; j<=nst; j++) cout<<"*";
            for(int s=1; s<=nsp; s++) cout<<" ";
            for(int k=1; k<=nst; k++) cout<<"*";
            nst--;
            nsp+=2;
            }
           
             cout<<endl;   
    }          */
/*
1
21
321
4321
54321  *//*
    int n;
   cout<<"Enter the  number of line "; 
   cin  >>n;    
   for(int i=1 ; i<=n; i++){
    for(int j=i; j>=1; j--){
            cout<<j;
    }
    cout<<endl;
   }           */

/*
AAAAA
BBBBB
CCCCC
DDDDD
EEEEE            *//*
     int n;
   cout<<"Enter the  number of line "; 
   cin  >>n;    
   char ch = 'A';
   for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
            cout<<ch;
    }
    ch++;
    cout<<endl;
   }     */
  /*
ABCDE
BCDEF
CDEFG
DEFGH
EFGHI    *//*


     int n;
   cout<<"Enter the  number of line "; 
   cin  >>n;    
   char ch = 'A';
   for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
            cout<<ch;
            ch++;
    }
    ch-=n-1;
    cout<<endl;
   }            */

   // ALTERNATE
    /*
   int n;
     cout<<"Enter the  number of line "; 
   cin  >>n; 
   int row=1;
   while(row<=n){
    int col =1;
    while(col<=n){
        char ch = 'A' + row + col -2;
        cout<<ch;
        col++;
    }
    cout<<endl;
    row++;
   }       */


/*

*    *    *
 *   *   *
  *  *  *
   * * *
    ***
***********
    ***
   * * *
  *  *  *
 *   *   *
*    *    *                          */

//      int n;
//    cout<<"Enter the  number of line "; 
//    cin  >>n;  
//    for(int i=1; i<=2*n+1; i++){
//     for(int j=1; j<=2*n+1; j++){
//         if(i==j || i==n+1 || j==n+1 || i+ j== 2*n+2){
//             cout<<"*";
//         }
//         else {
//             cout<<" ";
//         }
//     }
//     cout<<endl;
//    }               

   /* 
A
BC
CDE
DEFG
EFGHI         *//*

    
    int n;
   cout<<"Enter the  number of line "; 
   cin  >>n;
  
   for(int i=1; i<=n; i++){
     char ch = 'A';
    ch = ch + i - 1;
    for(int j=1; j<=i; j++){
         cout<<ch;
         ch++;
    }
    cout<<endl;
   }            */
/**
E
DE
CDE
BCDE
ABCDE         */
/*

    int n;
   cout<<"Enter the  number of line "; 
   cin  >>n;
  
   for(int i=1; i<=n;i++){
     char ch = 'A' + n-i;
    
    for(int j=1; j<=i; j++){
            cout<<ch;
            ch++;
    }
    cout<<endl;
   }     */
/*
12345
 2345
  345
   45
    5            *//*
    int n;
    cout<<"Enter the  number of line "; 
    cin>>n;
    for(int i=1; i<=n; i++){
        int k =i;
        for(int s=1; s<=i-1; s++){
            cout<<" ";
        }
        for(int j=1; j<=n-i+1; j++){
            cout<<k; k++;
        }
        cout<<endl;
    }  
   */

  /*
1234554321
1234**4321
123****321
12******21
1********1            */
/*
    int n;
    cout<<"Enter the  number of line "; 
    cin>>n;
    for(int i=1; i<=n; i++){
         for(int j=1; j<=n-i+1; j++){
            cout<<j;
        }
        for(int s=1; s<=2*i-2; s++){
            cout<<"*";
        }
       int k=n-i+1;
        for(int j = 1; j<=n-i+1; j++){
            
            cout<<k;
            k--;
        }
        cout<<endl;
    }    */

    /*   BAHUT MAST QUESTION H
Enter the  number of line 5
123456789
1234 6789
123   789
12     89
1       9                    */  
/*
    int n;
    cout<<"Enter the  number of line "; 
    cin  >>n;  
    int nod= n-1;
    int nsp =1;  

    for(int i=1; i<=n; i++){         
        int a=1;
       if(i==1){
        for(int j=1; j<=2*n-1; j++){
            cout<<j;
        }
       }
       else {
        for(int j=1; j<=nod; j++){      // for digits
             cout<<a; 
             a++;
        } 
        for(int j=1; j<=nsp; j++){  // for spaces
             cout<<" "; a++;
        }  
        for(int j=1; j<=nod; j++) {        // for digits
            cout<<a; 
            a++;
        } 
         nsp+=2;
        nod--;
       }
       
        cout<<endl;
        }        */
               

      /* 
ABCDEFGHI
ABCD FGHI
ABC   GHI
AB     HI
A       I       *//*       

     int n;
    cout<<"Enter the  number of line "; 
    cin  >>n;  
    int nod= n-1;
    int nsp =1;  

    for(int i=1; i<=n; i++){         
        char ch= 'A'; 
       if(i==1){
        for(int j=1; j<=2*n-1; j++){
            cout<<ch;  ch++;
        }
       }
       else {
        for(int j=1; j<=nod; j++){      // for digits
             cout<<ch; 
             ch++;
        } 
        for(int j=1; j<=nsp; j++){  // for spaces
             cout<<" "; ch++;
        }  
        for(int j=1; j<=nod; j++) {        // for digits
            cout<<ch; 
            ch++;
        } 
         nsp+=2;
        nod--;
       }
       
        cout<<endl;
        }            */
        /*
1234321
123 321
12   21
1     1
           *//*

         int n;
    cout<<"Enter the  number of line "; 
    cin  >>n; 
    for(int i=1; i<=2*n-1; i++){
        if(i==1){
            for(int j=1; j<=n; j++){
                cout<<j;
            }
            for(int j=n-1; j>=1; j--) cout<<j;
        }
        else {
            for(int j=1; j<=n-i+1; j++) cout<<j;
            for(int s=1; s<=2*i-3; s++) cout<<" ";
            for(int j=n-i+1; j>=1; j--) cout<<j;
            
        }
        cout<<endl;
    }      */
/*
4444444
4333334
4322234
4321234
4322234
4333334
4444444       *//*

       int n;
    cout<<"Enter the  number of line "; 
    cin  >>n; 
    for(int i=1; i<=2*n-1; i++){
        for(int j=1; j<=2*n-1; j++){
            
            if(i ==1 || j==1 || j==2*n-1 || i==2*n-1){
                cout<<n;
            }
            else if (i==2|| j==2 || j==2*n-2 || i==2*n-2) cout<<n-1;
            else if(i==3 || j==3 || j==2*n-3 || i==2*n-3) cout<<n-2;
            else cout<<"1";
        }
        cout<<endl;
    }         */

    // BEST CODE , concept using mirror image,  
    /*
1111111
1222221
1233321
1234321
1233321
1222221
1111111  */  
/*
    int n;
    cout<<"Enter the  number of line "; 
    cin >>n; 
    int min=0;
    for(int i=1; i<=2*n-1; i++){
        for(int j=1; j<=2*n-1; j++){
            int a=i;
            if(i>n) a = 2*n-i;
            int b=j;
            if(j>n) b = 2*n -j;
            if (a<b) min=a;     // minimum of two number
            else min =b;
            cout<<min;
        }
        cout<<endl;
    }         */
/*
4444444
4333334
4322234
4321234
4322234
4333334
4444444    */  

/*
     int n;
    cout<<"Enter the  number of line "; 
    cin >>n; 
    int min=0;
    int t = n+1;
    for(int i=1; i<=2*n-1; i++){
        for(int j=1; j<=2*n-1; j++){
            int a=i;
            if(i>n) a = 2*n-i;
            int b=j;
            if(j>n) b = 2*n -j;
            if (a<b) min=a;     // minimum of two number
            else min =b;
            cout<<t - min;
        }
        cout<<endl;
    }             */
    return 0;
}