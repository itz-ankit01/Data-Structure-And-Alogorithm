#include<iostream>
using namespace std;
int main()
{
    int a=10, b=5, i=5;
  /*  if(a<b && ++i>b){          // if a<b is false then ++i will not be executed hence not increased and vice versa

    }
    cout<<i<<endl;            */
    

     if(a<b || ++i>b){          // if a<b is false then ++i will be executed hence  increased by 1 as it is the case of OR and vice versa

    }
    cout<<i<<endl;
    return 0;
}