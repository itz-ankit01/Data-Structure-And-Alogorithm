#include<iostream>
using namespace std;
int main()
{
  /*  int i =5;
    i+=1;     // 6
    ++i;     //7
    --i;      // 6
    i--;           // 5
    cout<<i<<endl;      */

   /* int i =6 , j;
    j = i++;      // first assign then incremented
    j = --i;    //  6 6
    j = i--;    //      5 6
    j = i++ + i++;    // 7 11
    j = i-- + i++;    //7 13
    j = i++ + --i ; // 7 14
    j  = i++;
    j = --i + --i;        */

    int i=5, j;
    j= --i + --i; 
    cout<<i<<" "<<j<<endl;
    return 0;
}