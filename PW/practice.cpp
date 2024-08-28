#include<iostream>
using namespace std;
#include<cstring>
#define FOUND 1
#define NOTFOUND 0

int main()
{
    int i , flag,a;
    char master[6][10] {
        "Ankit",
        "Sachin",
        "Rajesh",
        "Gopal",
        "Aman",
        "vipin",
    };
    char yourname[10];
    printf("Enter your name : ");
    scanf("%s",&yourname);
    flag = NOTFOUND;
    for(int i=0; i<5; i++){
        a = strcmp(&master[i][0],yourname);
        if(a==0){
            printf("Welcome, you can enter the palace\n");
            flag = FOUND;
            break;

        }
    }
    if(flag==NOTFOUND)
    printf("Sorry, you are a trespasser\n");

    return 0;
}