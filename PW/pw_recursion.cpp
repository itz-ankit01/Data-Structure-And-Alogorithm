#include<iostream>
using namespace std;
// recursion :- function calling itself
/*
int factorial(int n){
    if(n==1 || n==0) return 1;
    int recAns =  n* factorial(n-1);
    return recAns;
}
int main()
{
    int n;
    cout<<"Enter n ";
    cin>>n;
    int fact = factorial(n);
    cout<<fact;
    return 0;
}            */      

// PRINT GOOD MORNING N TIMES USING RECURSION
 /*     void greeting(int n){
        if(n==0) return;
        cout<<"Good Morning";
        greeting(n-1);
        
        return;
    }
    int main(){
        int n;
        cout<<"enter n";
        cin>>n;
        greeting(n);
        return 0;
    }   */    

// PRINT ALL NUMBER N TO 1 USING RECURSION
   /* 
         void number(int n){
        if(n==0) return;
        cout<<n<<" ";
        number(n-1);
        return;
         }
         int main(){
        int n;
        cout<<"enter n";
        cin>>n;
        number(n);
        return 0;
         }    */

// PRINTING NUMBER 1 TO N USING RECURSION
/*
        void number(int x , int n){
        if(x>n) return;
        cout<<x<<" ";
        number(x+1, n);
        return;
         }
        int main(){
        int n;
        cout<<"enter n";
        cin>>n;
        number(1,n);
        return 0;
         }     */

 // OTHER MIND FUCKING SOLUTION OF PREVIOUS QUESTION USING RECURSION
  /*     void number(int n){
        if(n==0) return;
        number(n-1);
        cout<<n<<" ";
        return; 
         }
         int main(){
        int n;
        cout<<"enter n ";
        cin>>n;
        number(n);
        return 0;
         }    */

// PRINTING INCREASING AND DECREASING NO USING RECURSION
/*
enter n 5
5 4 3 2 1 1 2 3 4 5             */
/* 
         void number(int n){
        if(n==0) return;
        cout<<n<<" ";
        number(n-1);
        cout<<n<<" ";
        return; 
         }
         int main(){
        int n;
        cout<<"enter n ";
        cin>>n;
        number(n);
        return 0;
         }            */

// SUM OF 1 TO N (PARAMETERISED)
         /*
        void sum(int n, int s){
          if(n==0){
            cout<<s<<endl;
            return;
          }
          sum(n-1, s+n);
          return;
        }
         int main(){
        int n;
        cout<<"enter n ";
        cin>>n;
        sum(n,0);
        return 0;
         }      */      

// MORE OPTIMISED SOLUTION OF PREVIOUS PROBLEM
/*
     int sum(int n){
          if(n==0) return n;
          int reSum = n + sum(n-1);
          return reSum;
        }
         int main(){
        int n;
        cout<<"enter n ";
        cin>>n;
       int t= sum(n);
        cout<<t;
        return 0;
         }      */   

// MAKE A FUNCTION WHICH CALCULATES A RAISED TO THE POWER B USING RECURSION
/*
        int power(int a, int b){
          if(b==0) return 1;
          int value = a * power(a,b-1);
          return value;
        }
         int main(){
        int a,b;
        cout<<"enter a and b ";
        cin>>a>>b;
        int t= power(a , b);
        cout<<t;
        return 0;
         }     */

//  MULTIPLE CALL IN RECURSION
// WRITE A FUNCTION TO CALCULATE THE NTH FIBONACCI NUMBER USING RECURSION
/*
         int fibo(int n){
          if(n==1 || n==2) return 1;
          int ans1 = fibo(n-1);
          int ans2 = fibo(n-2);
          return ans1 + ans2;
        }
        int main(){
        int n;
        cout<<"enter n ";
        cin>>n;
        cout<<fibo(n);
        return 0;
         }  
*/

//  STAIR CASE PROBLEM
/*
      int stair(int n){
        if(n==1 || n==2) return n;
        int totalWays = stair(n-1) + stair(n-2);
        return totalWays;
      }
      int main(){
        int n;
        cout<<"Enter the no of stair ";
        cin>>n;
        int ways = stair(n);
        cout<<ways<<endl;
        return 0;
      }
*/
// STAIR CASE PROBLEM TAKING 1 OR 2 OR 3 STEP AT A TIME
/*
          int stair(int n){
                  if(n==1 || n==2) return n;
                  if(n==3) return 4;
                  int totalWays = stair(n-1) + stair(n-2) + stair(n-3);
                  return totalWays;
                }
                int main(){
                  int n;
                  cout<<"Enter the no of stair ";
                  cin>>n;
                  int ways = stair(n);
                  cout<<ways<<endl;
                  return 0;
                }                */

//  POWER FUNCTION(LOGARITHMIC)
        /* 
        int power(int a, int b){
          if(b==0) return 1;
          int t =  power(a,b/2);
          if(b%2==0) return t*t;
          else return t*t*a;
          
        }
         int main(){
        int a,b;
        cout<<"enter a and b ";
        cin>>a>>b;
        int t= power(a , b);
        cout<<t;
        return 0;
         }          */

  // MAZE PATH 1 DHASHU QUESTION
/*
      int maze(int cr, int cc, int er, int ec){  // cr= current row , cc = current column, er = end row, ec = end column
        int rightWays = 0;
        int downWays = 0;
        if(cr==er && cc == ec) return 1;
        if(cr==er){
          rightWays = maze(cr , cc+1, er , ec);
        }
        if(cc == ec){
          downWays = maze(cr+1, cc , er, ec);
        }
        if(cr<er && cc<ec){
          rightWays = maze(cr , cc+1, er , ec);
           downWays = maze(cr+1, cc , er, ec);
        }
        return rightWays + downWays;
      }
      int main(){
        int n;
        cout<<"Enter the no of rows of maze ";
        cin>>n;
        int m;
        cout<<"Enter the no of columns in maze ";
        cin>>m;
        int noOfways = maze(1,1,n,m);
        cout<<noOfways<<endl;
        return 0;
      }
*/
      

     // MAZE PATH 2 DHASHU QUESTION
       /*
      int maze2(int n, int m){  
        int rightWays = 0;
        int downWays = 0;

        if(n==1 && m==1) return 1;     // reaches destination :- no ways = 1
        if(n==1){    // can not go down
          rightWays= maze2(n,m-1);
        }
      if(m==1){     // can not go right
        downWays = maze2(n-1, m);
      }
      if(m>1 && n>1){
        rightWays= maze2(n,m-1);
         downWays = maze2(n-1, m);
      }
        return rightWays + downWays;
      }
      int main(){
        int n;
        cout<<"Enter the no of rows of maze ";
        cin>>n;
        int m;
        cout<<"Enter the no of columns in maze ";
        cin>>m;
        int noOfways = maze2(n,m);
        cout<<noOfways<<endl;
        return 0;
      }           */

// PRE IN POST :- LEARN HOW CALL AND RETURN  WORKS IN RECURSION STEP BY STEP
/*
Enter a number 2
Pre2
Pre1
In1
Post1
In2
Pre1
In1
Post1
Post2            */
/*

      void preInPost(int n){
        if(n==0) return;
          cout<<"Pre"<<n<<endl;
          preInPost(n-1);
          cout<<"In"<<n<<endl;
          preInPost(n-1);
          cout<<"Post"<<n<<endl;
          return;
      
    }
     int main(){
      int n;  
      cout<<"Enter a number ";
      cin>>n;
      preInPost(n);
      return 0;
     }           */

// ZIGZAG PATTERN BASED ON PREVIOUS CONCEPT PRE IN POST
/*
Enter a number 4
4 3 2 1 1 1 2 1 1 1 2 3 2 1 1 1 2 1 1 1 2 3 4 3 2 1 1 1 2 1 1 1 2 3 2 1 1 1 2 1 1 1 2 3 4 */
/*
    void zigzag(int n){
      if(n==0) return;
      cout<<n<<" ";
      zigzag(n-1);
      cout<<n<<" ";
      zigzag(n-1);
      cout<<n<<" ";
      return;
    }
    int main(){
      int n;
      cout<<"Enter a number ";
      cin>>n;
      zigzag(n);
      return 0;
    }        */

//  TOWER OF HANOI
    
    int tower(int n, char s, char h, char d){
      int cnt=0;
       if(n==0) return 1;
      cnt+=tower(n-1,s,d,h);
      cout<<s<<"-> "<<d<<endl;
      cnt+=tower(n-1,h,s,d);
      return cnt;
     
    }
    int main(){
      int n;
      cout<<"Eneter the no of discs";
      cin>>n;
      int c = tower(n,'A','B','C');
      cout << c<< endl;
      return 0;
    }            