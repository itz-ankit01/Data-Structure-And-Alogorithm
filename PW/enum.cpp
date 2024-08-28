#include<iostream>
using namespace std;

enum day {mon =1, tue=7, wed, thurs=10, fri, sat, sun};
enum dept {cs, it=2, ece, mech};

typedef int marks;

int main()
{ 
    day d ;
    d =tue;
    dept dep=cs;

     cout<<mon<<endl;
     cout<<tue<<endl;
     cout<<wed<<endl;
     cout<<thurs<<endl;
     cout<<fri<<endl;
     cout<<sat<<endl;
     cout<<sun<<endl;           

    // m1 & m2 are for scoring marks
    

    // marks m1, m2;
    // m1=50;
    // m2= 48;

    return 0;
}