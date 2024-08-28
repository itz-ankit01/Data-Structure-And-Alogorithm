#include<iostream>
using namespace std;
int main()
{
    // use of while loop and do while
/*
    int n,i=1;
    cout<<"Enter n: ";
    cin>>n;
    while(i<=n){
        cout<<i<<" ";
        i++;
    }    */             

    int n,i=1;
    cout<<"Enter n: ";
    cin>>n;
    do{
        cout<<i<<" ";
        i++;
    }
    while(i<=n);
    return 0;
}