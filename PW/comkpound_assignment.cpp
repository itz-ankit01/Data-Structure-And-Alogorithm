#include<iostream>
using namespace std;
int main()
{
    int sum=10;
    int x=5;
    sum = sum+x;  // 15
    sum+=x;        //20
    sum*=x;          //100
    sum-=x*x;          // 75
    sum/=x;         // 15
    sum%=x;     //0
    cout<<sum;
    return 0;
}