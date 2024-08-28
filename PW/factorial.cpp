#include<iostream>
using namespace std;
int main()
{   /*
5
1!= 1
2!= 2
3!= 6
4!= 24
5!= 120
 */
/*
    int n, prd=1;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
                prd*=j;
        }
        cout<<i<<"!= "<<prd<<endl;
        prd=1;
    }    */


    // fibonacci number   
    /*
    int n, a=1, b=1,sum=1;
    cin>>n;
    for(int i=1; i<=n-2; i++){
        sum = a+b;
        a=b;
        b=sum;
        cout<<sum;
    }
    cout<<endl;
    cout<<sum<<endl;   */
/*
    int a,b, prd=1;
    cout<<"Enter a ";
    cin>>a;
    cout<<"Enter b ";
    cin>>b;
    for(int i=1; i<=b; i++){
       prd*=a;   
    }
    cout<<prd<<endl;
*/
/*
int x=65;
for(int i=x; i<=92; i++){
    cout<<(char)i<<"= "<<x<<endl;
    x++;
}       */

int n, sum=0;
cout<<"Enter the n ";
cin>>n;
for(int i=1; i<=n; i++){
    int m=i;
    int t = i%10;

    i/=10;
    sum = sum + t*t*t;
    if(sum==m){
        cout<<m<<" ";
    }

}
    return 0;
}