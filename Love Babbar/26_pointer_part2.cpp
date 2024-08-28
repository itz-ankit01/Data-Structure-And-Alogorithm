#include<iostream>
using namespace std;

// POINTER PART 2
/*
int main(){
    
    //int arr[10]={23, 122, 41, 67};

    /*
    cout << endl;
    cout << "Address of first memory block is " << arr << endl;
    cout << arr[0] << endl;
    cout << "Address of first memory block is " << &arr[0] << endl;

    cout << "4th " << *arr << endl;
    cout << "5th " << *arr + 1 << endl;
    cout << "6th " << *(arr + 1) << endl;
    cout << "7th " << *(arr) + 1 << endl;
    cout << "8th " << arr[2] << endl;
    cout << "9th " << *(arr+2) << endl;

    int i = 3;
    cout << endl;
    cout << i[arr] << endl;
    */

/*
   int temp[10];
   cout << sizeof(temp) << endl;
   cout << "1st " << sizeof(*temp) << endl;
   cout << "2nd " << sizeof(&temp) << endl;


   int *ptr = &temp[0];
   cout << "size of block which store address " << sizeof(ptr) << endl;
   cout << sizeof(*ptr) << endl;
   cout << "Memory required to store the address of ptr " << sizeof(*ptr) << endl;
   */

  /*

    int a[20] = {1,2,3,5};
    // All are same representing the address of array 

    cout << "Address of array " << &a[0] << endl;
    cout << &a << endl;
    cout << a << endl;

    int *p = &a[0];
    cout << "Address of array " << p << endl;  
    cout << "Value at that address " << *p << endl;
    cout << "Address of p " << &p << endl;
     */

/*
    int arr[10];
    // ERROR
    // arr = arr + 1;

    int *ptr = &arr[0];
    cout << "Before " << ptr << endl;  // adddress of 1st block of array
    ptr = ptr + 1;
    cout <<  "After " << ptr << endl;   // adddress of 2nd block of array
    */

   // CHARACTER ARRAY
/*   
   int arr[5] = {1,2,3,4,5};
   cout << arr << endl;  // print address of integer array

   char ch[] = "abcde";
   cout << ch << endl;   // and it is printing entire content of character array

   char *c = &ch[1];
    
   // prints the entire content from 1st index
   cout << c << endl;

   char temp = 'z';
   char *p = &temp;

   cout << p << endl; // it will print until it gets null character
   
    return 0;
}   */



// POINTER TO A FUNCTION
void print(int *p){
    cout << *p << endl;
}

void update(int *p){
    *p  = *p + 1;
    p = p + 1;
    cout <<"Inside Function -> Update ho jayega " << p << endl;
}

int getSum(int arr[], int n){
    cout << endl << "Size : " << sizeof(arr) << endl;  // it will give the size of pointer which the address as pointer is passed as argument
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    return sum;
}
int main(){
    /*
    int value = 5;
    int *p = &value;

    print(p);

    cout << "Before -> " << p << " <--> " << *p << endl;   
    update(p);
    cout << "After -> " << p << " <--> " << *p << endl;
    */

    int arr[6] = {1,2,3,4,5,8};

    int ans = getSum(arr, 5);
    cout << "sum is " << ans << endl;

    // Benefit -> we can passed the part of as argument 
    int a = getSum(arr+3, 3);
    cout  << "sum is " << a << endl;

}