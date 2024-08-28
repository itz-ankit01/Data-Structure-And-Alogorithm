#include<iostream>
using namespace std;
int main()
{
    /* if(false){
        cout<<"Hello"<<endl;  // in case of true or any no other than 0 output will be Hello
    }
    else {
        cout<<"Bye"<<endl;  // in case of false or 0 , output will be Bye
    }          */

    int roll;
    cout<<"Enter the roll: ";
    cin>>roll;
    if(roll<1){
        cout<<"Invalid roll "<<endl;
    }
    else{
        cout<<"Valid roll "<<endl;
    }
    return 0;
}