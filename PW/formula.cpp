#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  /**  int n;
    cout<<"Enter the n ";
    cin>>n;
    int sum= n*(n+1)/2;
    cout<<"Sum is "<<sum<<endl;               */

    // program for quadratic  equation
    float a,b,c,r1,r2;
    cout<<"Enter a,b,c "<<endl;
    cin>>a>>b>>c;
    r1 = (-b+ sqrt(b*b-4*a*c))/(2*a);
    r2 = (-b- sqrt(b*b-4*a*c))/(2*a);

    cout<<"Roots are "<<r1<<" "<<r2<<endl;               

    // program for finding the area of circle
 /*   float area, radius;
    cout<<"Enter radius "<<endl;
    cin>>radius;
    area= (float)22/7*radius*radius;                 // typecasting
    cout<<"Area is "<<area<<endl;               */

   /* int u,v,a;

    float d;
    cout<<"Enter the 3 values "<<endl;
    cin>>v>>a>>u;
    d= (pow(v,2)-pow(u,2))/(2*a);
    cout<<"displacement is "<<d<<endl;  */
    return 0;
}