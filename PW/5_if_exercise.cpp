#include<iostream>
using namespace std;
int main()
{
  /*  int totalAmt;
    cin>>totalAmt;
    if(totalAmt<100){
        cout<<"No discount"<<endl;
    }
    else if(totalAmt>=100 && totalAmt<500){
        cout<<"Discount is "<<totalAmt*0.1<<endl;
    }
    else if(totalAmt>=500){
         cout<<"Discount is "<<totalAmt*0.2<<endl;
    }                                                   */

    int year;
    cout<<"Enter a year ";
    cin>>year;
    if(year%400==0){
        cout<<year<<" is a leap year.";
    }
    else if(year%4==0){
        cout<<year<<" is a leap year.";
    }
    else{
        cout<<year<<" is not a leap year.";
    }
    return 0;
}