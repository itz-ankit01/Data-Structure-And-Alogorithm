#include<iostream>
using namespace std;
#include<cstring>
/*
int main()
{ 
    // DIFFERENT METHOF OF INITIALISATION OF STRING
    char x = 'A';
    char s[10] = "Hello";
    char s[] = "Hello";
     char s[] = {'H','e','l','l','o','\0','p'};
    char s[] = {65,66,67,68,'\0'};
    char *s = "Hello";
    cout<<s<<endl;
    return 0;
}     */         

// READING AND PRINTING STRING
// to take input ->> cin>>s;  ,   cin.get(s,100);  ,  cin.getline(s,100);

int main()
{
   char s[100];
   char s1[100];
   cout<<"Enter the name : ";
   cin.get(s,100);

   cout<<"Welcome "<<s<<endl;

   // cin.ignore();

   cout<<"Enter the name again : ";
   cin.get(s1,100);

   cout<<"Welcome "<<s1<<endl;

    return 0;
}   


// FUNCTION ON STRING
  /*      int main(){

            char str[50]= "Hello World";
            cout<<"The length of the string is : "<<strlen(str)<<endl;
            return 0;
        }      */


        // int main(){
        //     cout<<"A";
        //     char *str;
        //     cout<<"Enter a string : ";
        //     cin>>str;
        //     cout<<"Length "<<strlen(str)<<endl;
        //     cout<<"N";
        //     return 0;
        // }