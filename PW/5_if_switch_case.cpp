#include<iostream>
using namespace std;
int main()
{
   /* int day;
    cout<<"enter the day";
    cin>>day;
    switch (day)
    {
    default:
        cout<<"Invalid day";
        break;
    case 1:
        cout<<"MOnday";
        break;
    case 2:
        cout<<"Tueday";
        break;
    }                            */

    cout<<"Menu\n"<<"1. Add\n"<<"2. Sub\n"<<"3. Mul\n"<<"4. Div\n";
    int option;
    cout <<"Enter your choice ";
    cin>>option;
    int a,b,c;
    cout<<"Enter two 2 nos ";
    cin>>a>>b;
    switch (option)
    {
    case 1: c = a+b;
        break;
    case 2: c = a-b;
        break;
    case 3: c = a*b;
        break;
    case 4: c = a/b;
        break;
    }
    cout<<"Result is "<<c<<endl;
    return 0;
}