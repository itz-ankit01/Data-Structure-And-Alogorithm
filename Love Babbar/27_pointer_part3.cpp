#include<iostream>
using namespace std;

// POINTER PART 3
/*
void update (int **p2){
    p2 = p2 + 1;
    // kuch change hoga? -NO

    // *p2 = *p2 + 1;
    // kuch change hoga? - YES

    // **p2 = **p2 + 1;
    // kuch change hoga? - YES
}
int main(){
    /*
    int v = 5;
    int *p = &v;
    int **p2 = &p;
  
    cout <<  "Printing p " <<  p << endl;
    cout <<   "Address of p " <<  &p << endl;
    cout << *p2 << endl;

    cout << v << endl;
    cout << *p << endl;
    cout << **p2 << endl;

    cout << &v << endl;
    cout << p << endl;
    cout << *p2 << endl;

    cout << endl;
    cout << &p << endl;
    cout << p2 << endl;

    cout << endl << endl;
    cout << "Before -> " << v << endl;
    cout << "Before -> " << p << endl;
    cout << "Before -> " << p2 << endl;
    update(p2);
    cout << "After -> " << v << endl;
    cout << "After -> " << p << endl;
    cout << "After -> " << p2 << endl;
    */

   // MCQ
   /*
   int first = 8;
   int second = 18;
   int *ptr = &second;
   *ptr = 9;
   cout << first << " " << second << endl;
 */

/*
    int first = 6;
    int *p = &first;
    int *q = p;
    (*q)++;
    cout << first << endl;
    */

/*
    int first = 8;
    int *p = &first;
    cout << (*p)++ << " ";
    cout << first << endl;
    */

/*
   int *p = 0;
   int first = 110;
   *p = first;
   cout << first << endl;  // segmentation fault
   */

/*
  int first = 8;
  int second = 11;
  int *third = &second;
  first = *third;
  *third = *third + 2;
  cout << first << " " << second << endl;
  */

/*
    float f = 12.5;
    float p = 21.5;
    float *ptr = &f;
    (*ptr)++;
    *ptr = p;
    cout << *ptr << " " << f << " " << p << endl;
*/

/*
    int arr[5];
    int *ptr;
    cout << sizeof(arr) << " " << sizeof(ptr) << endl;
    */

/*
   int arr[] = {11, 21, 13, 14};
   cout << *(arr) << " " << *(arr+1) << endl; 
   */

/*
    int arr[] = {11, 12, 31};
    cout << arr << " " << &arr << endl; 
    */

    // int arr[] = {11, 12, 31};
    // cout << (arr+1) << endl; 

/*
    int arr[6] = {11,21,31};
    int *p = arr;
    cout << p[2] << endl;
    */

/*
   int arr[] = {11, 12, 13, 14, 15};
   cout << *(arr) << " " << *(arr + 3) << endl;
   */

    // int arr[] = {11, 21, 31, 41};
    // int *ptr = arr++;
    // cout << *ptr << endl;

    // char ch = 'a';
    // char *ptr = &ch;
    // ch++;
    // cout << *ptr << endl;


    // char arr[] = "abcde";
    // char *p = &arr[0];
    // cout << p << endl;


    // char arr[] = "abcde";
    // char *p = &arr[0];
    // p++;
    // cout << p << endl;


    // char str[] = "babbar";
    // char *p = str;
    // cout << str[0] << " " << p[0] << endl;

    
//     return 0;
// }    



// void update(int *p){
//     *p = *p * 2;
// }
// int main(){
//     int i = 10;
//     update(&i);
//     cout << i << endl;
// }



// void fun (int arr[]){
//     cout << arr[0] << " ";
// }
// int main(){
//     int arr[] = {11,12,13,14};
//     fun(arr + 1);
//     cout << arr[0] << endl;

// }




// void update(int *p){
//     int  a = 70;
//     p = &a;
//     *p = (*p) * (*p);
//     cout << *p << endl;

// }
// int main(){
//     int a = 70;
//     int *p = &a;
//     update(p);
//     cout << a << endl;
//}

// DOUBLE POINTER

// int main(){
// int first = 110;
// int *p = &first;
// int **q = &p;
// int second = (**q)++ + 9;
// cout << first << " " << second << endl;
// }


int main(){
    int first = 100;
    int *p = &first;
    int **q = &p;
    int second = ++(**q);
    int *r = *q;
    ++(*r);
    cout << first << " " << second << endl;
}