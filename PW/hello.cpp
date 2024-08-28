#include<iostream>
using namespace std;
int main()
{
    string name;
    cout<<"May i know your name ";
    getline(cin,name);    // it is used in place of cin>>name so that we can get full name like aman agnihotri sharma whatever we put
    cout<<"Welcome Ms/Mr "<<name;                      

 /*   int a,b,c;
    cout<<"Enter 2 nos "<<endl;
    cin>>a>>b;
    c=a+b;
    cout<<"Sum is "<<c;                           */
    return 0;
}