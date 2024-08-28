#include<iostream>
using namespace std;
// POINTER 
int main(){
/*
    int num = 5;

    cout << num << endl;

    // Address of Operator -> &

    cout << "Address of num is " << &num << endl;

    int *ptr = &num;

    cout << "Address is : " << ptr << endl;
    cout << "Value is : " << *ptr << endl;

    double d = 4.3;

    double *p2 = &d;

    cout << "Address is : " << p2 << endl;
    cout << "Value is : " << *p2 << endl;

    cout << "Size of integer " << sizeof(num) << endl;
    cout << "Size of pointer " << sizeof(ptr) << endl;
    cout << "Size of pointer " << sizeof(p2) << endl;
    */

    // POINTER TO INT IS CREATED , AND POINTING TO SOME GARBAGE ADDRESS
    // int *p = 0;
    // cout << *p << endl;
/*
    int i = 5;
    int *q = &i;

    cout << q << endl;
    cout << *q << endl;

    int *p = 0;
    p = &i;
    cout << p << endl;
    cout << *p << endl;
   */ 


   int num = 5;
   int a = num;
   a++;
   cout << num << endl;
   int *ptr = &num;
    cout << ptr << endl;

   (*ptr)++;
   cout << *ptr << endl;
    

    // COPYING A POINTER
    int *q = ptr;
    
    cout << ptr << " - " << q << endl;
    cout << *ptr << " - " << *q << endl;

    // Important concept
    int i = 3;
    int *t = &i;
    // cout << ++(*t) << endl;

    *t = *t+1;
    *t = *t+1;
    *t = *t+1;
    *t = *t+1;
    cout << *t << endl;
    cout << "Before t " << t << endl;
    t = t + 1;
    cout << "After t " << t << endl;
    cout << *t << endl; // ??????????????  garbage value as t has address stored incremented by int 4 byte


    return 0;
}