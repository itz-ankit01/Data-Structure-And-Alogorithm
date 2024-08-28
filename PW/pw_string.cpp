// Strings are character array
#include<iostream>
using namespace std;
/*
int main()
{
   char arr[] = {'H','e','l','l','o','!'};  // \0 or any character like !
   // 2 character
   cout<<arr[0];
//    cout<<ch;  // it will give error as consider 2 character
   char ch1 = '\0';     // but here is also 2 character called as null character
   cout<<ch1<<endl;;
   cout<<(int)ch1<<endl;
   int x = 0;
   char a = (char)x;     // a -> '\0'
   cout<<a<<endl;
   int i=0;
   while (arr[i]!='!')
   {
    cout<<arr[i];
    i++;
   } return 0;
}         */

/*
        int main(){
            // char arr[]= "College wallah is Best channel for coders \0";
            char arr[]= "College wallah is Best channel for coders"; // in double computer itself take null character at the end
            int i=0;
            // while(i<14){
            //     cout<<arr[i];
            //     i++;
            // }
            while(arr[i]!='\0'){
                cout<<arr[i];
                i++;
            }
            return 0;
        }      */

// MODIFYING INDIVIDUAL CHARACTER  and  DIFFERENT WAYS OF PRINTING SAME ELEMENT
/*
            int main(){
            char str[20] = "College Wallah";
            int i=0;
            // str[1]=98;
            cout<<endl;
            cout<<str[5]<<endl;
            while(str[i]!='\0'){
                // cout<<str[i];
                // cout<<i[str];
                cout<< *(str+i);
                i++;
            }
            return 0;
        }          */

// INPUT AND OUTPUT OF STRING WITHOUT LOOP

 /*      
        #include<string.h>
         int main(){
        
            // char str[] = "College Wallah is the best channel for coders.";
            char str[40];
            // cin>>str;     // only the first word will be displayed
            gets(str);      // entire sentence can be inputed
            cout<<str<<endl;
            return 0;
        }            */

// REVERSE A STRING

         #include<string.h>
/*
            int main(){
            char str [50];
            puts("Enter a string: ");
            gets(str);
            puts("The reverse is: "); // automatically \n de deta hai
            //size of string
            int size=0, k=0;
            while(str[k]!='\0'){
                size++; k++;
            }
            //reversing
            for(int i=0, j=size-1; i<=j; i++,j--){
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
            puts(str);
              return 0;
         }           */

// APPLICATION OF POINTER IN STRING 
/*
        #include<stdio.h>
        int main(){
            char str[] = "College Wallah";
            char* ptr = str;  // ptr now points to str[0]
            printf("%p\n",&str[0]);
            printf("%p\n",&str[1]);
            printf("%p\n",&str[2]);
            printf("%p\n",str);
            int i=0;
            while(str[i]!='\0'){
                printf("%c",str[i]);
                i++;
            }
            printf("\n");
            puts(str);
            printf("\n");
            // print the string using pointer
            while(*ptr!='\0'){
                printf("%c",*ptr);
                ptr++;

            }
            return 0; 
        }         */


//  WE GET ANOTHER WAY OF INIATIALISING STRINGS
/*
char str[] = "physics wallah";
char *ptr = "physics wallah";
character pointers can also be used to store address of stringstream
NOTE: such direct initialisation using pointer results in  a read only memory allocation of cHARACTER array and hence, causes undefined behavior when we try to change the individual characters   
ptr[0] = 'm'; Error!              */

/*
       #include<stdio.h>
         #include<string.h>
        int main(){
            // char str[] = "College Wallah";
            // str[0] = 'D';
            // printf("%s",str);

            char* ptr = "College Wallah";
            ptr[0] = 'm';  // error
            printf("%s",ptr);
            
            return 0; 
        }   */   


// INTRESTING THING ABT SUCH INITIALIZATION
/*
CHAR STR[] = "PHYSICS WALLAH";
PRINTF("%S",STR);
STR = "COLLEGE WALLAH";   // ERROR

IN NORMAL INITIALISATION , WE CAN MODIFY INDIVIDUAL CHARACTER BUT NOT THE ENTIRE STRING AT THE SAME TIME
BUT, IN POINTER INITIALISATION , WE CAN MODIFY ENTIRE STRING BUT NOT THE INDIVIDUAL CHARACTER AT THE SAME TIME     */


 /*           
         #include<stdio.h>
         #include<string.h>
         int main(){
            // char* ptr = "Collge wallah";
            // // ptr[0] = 'm';  // error
            // ptr = "Physics Wallah";
            // printf("%s",ptr);
            
            char str[] = "College Wallah";
            char *ptr = str;
            ptr = "Physics wallah";
            printf("%s\n",ptr);
            printf("%s\n",str);
            return 0; 
        }       */

/*
        #include<stdio.h>
         #include<string.h>
         int main(){
          
            char str[] = "College Wallah";
            // char*ptr = str;
            // ptr = "Physics Wallah";
           char *p = str;
           *p = 'P';
           printf("%s" , str);
            return 0; 
        }     */


// IMPLEMENT : COPY ONE STRING TO ANOTHER

/*
        #include<stdio.h>
        #include<string.h>
         int main(){
          
            char* s1=  "Physics wallah";
            // char* s2 = s1;  // s2 is a shallow copy
            // s1[0] = 'M';
            // printf("%s\n",s1);
            // printf("%s",s2);

            // deep copy
            char* s2;
            s2 = s1;
            s2 = "College Walah";
            // s2[0] = 'M';
            printf("%s\n",s1);
            printf("%s\n",s2);


            printf("%p\n",s1);
            printf("%p",s2);
            return 0; 
        }          */


// BUILT FUNCTION
/*
            #include<stdio.h>
            #include<string.h>

            int main(){
                /*
                char * str = "Raghav Garg";
                int x = strlen(str);   // Return the lenght of string
                printf("%d",x);       */

/*
                // STRLEN
                char s1[12] = "Raghav Garg";
                char s2[12];
                strcpy(s2,s1);  // copying of s2 and store itin s1 
                // s2[0] = 'M';
                s2[0] = 'M';
                printf("%s",s2);     
                                       */
/*
                //STRCPY
                char s1[11] = "Raghav";
                char s2[] =  "Garg";
                strcat(s1,s2);      // string of s1 + s2
                printf("%s",s1);               */

/*
                // STRCAT
                char* s1 = "Raghav"; // read only
                char* s2 =  "Garg";  // read only
                strcat(s1,s2);      // string of s1 + s2
                printf("%s",s1);        */


                // STRCMP -> compares the two string and give result in terms of boolean 

    /*            return 0;
            }              */


// INSERTING A CHARACTER IN A STRING
// write a function to insert a new character(not replace) in a string at a given position

/*
        #include<stdio.h>
        #include<string.h>

        int main(){
            char str[20] = "college";
            printf("%s\n",str);
            // 2nd index pe 'l';
            for(int i=6; i>2; i--){
                str[i+1] = str[i];
            }
            str[2] = 'k';
            printf("%s",str);
            return 0;
        }       */

