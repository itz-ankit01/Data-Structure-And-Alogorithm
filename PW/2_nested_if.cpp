#include<iostream>
#include<cmath>
using namespace std;

typedef int marks;
int main()
{
   int a,b,c;
    cout<<"Enter the 3 nos"<<endl;
     cin>>a>>b>>c;
    if(a>b && a>c)
    cout<<a;
    else if (b>c)
    cout<<b<<endl;
    else{
        cout<<c;
    }              
   /*  int d;
     d = b*b - 4*a*c;
     if(d==0){
        cout<<"Roots are real and equal";
        cout<<endl<<(-b/(2*a))<<endl;
     }
     else if(d>0){
        cout<<"Roots unreal and unequal"<<endl;
        cout<<(-b+ sqrt( b*b - 4*a*c))<<" "<<(-b- sqrt( b*b - 4*a*c))<<endl;
     }
    else
    cout<<"Roots are imaginary"<<endl;    */
    
        /*    marks m1, m2, m3;
            cin>>m1>>m2>>m3;
            float avg = (m1 + m2 + m3)/3.0;

            if(avg>=60)
            cout<<"Grade A "<<endl;
            else if(avg>=35 && avg<60)
            cout<<"Grade B "<<endl;
            else
            cout<<"Grade C ";         */



/*
            int day;
            cout<<"Enter the day number ";
            cin>>day;

            if(day==1){
                cout<<"Monday"<<endl;
            }
            else if(day==2){
                cout<<"Tuesday"<<endl;
            }
            else if(day==3){
                cout<<"Wednesday"<<endl;
            }
            else if(day==4){
                cout<<"Thrusday"<<endl;
            }
            else if(day==5){
                cout<<"Friday"<<endl;
            }
            else if(day==6){
                cout<<"Satday"<<endl;
            }
            else if(day==7){
                cout<<"Sunday"<<endl;
            }
            else {
                cout<<"Invalid day"<<endl;
                
            }      */
    return 0;
}