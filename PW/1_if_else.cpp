#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter 2 no : ";
    cin>>a>>b;
    if(b==0)
    cout<<"Division by zero"<<endl;
    else{
        c =a/b;
        cout<<c<<endl;
    }
    return 0;
}