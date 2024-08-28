#include<iostream>
using namespace std;
int main()
{
    /*
6 5 4 3 2 1
6 5 4 3 2 1
6 5 4 3 2 1
6 5 4 3 2 1
6 5 4 3 2 1
6 5 4 3 2 1            */
/*
    int n;
    cin>>n;
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=n){
            cout<<n-j+1<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }            */
/*
1 2 3
4 5 6
7 8 9    */
/*
    int n;
    cin>>n;
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=n){
            cout<<i*n-n+j<< " ";
            j++;
        }
        cout<<endl;
        i++;
    }              */
/*
    int n;
    cin>>n;
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=n){
            cout<<char('A'+i+j-2);
            j++;
        }
        cout<<endl;
        i++;
    }   */


    int n;
    cin>>n;
    int row = 1;
    while(row<=n){
        int start = 1;
        while(start <= n-row+1){
            cout<<start;
            start++;
        }
        int star = 1;
        while(star <= 2*row-2){
            cout<<"*";
            star++;
        }
        int col = 1;
        while(col <= n-row+1){
            cout<<n-row-col+2;
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}