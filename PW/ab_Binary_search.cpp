#include<iostream>
using namespace std;

//  SEARCHING A ELEMENT OF AN ARRAY USING BINARY SEARCH
/*
int main(){
    int n;
    cout<<"Enter the n : ";
    cin>>n;
    int arr[n];
    cout<<"Input the all elements of the array : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int l = 0, h = n-1;
    
    int key;
    cout<<"Enter the key : ";
    cin>>key;
    while(l<=h){
        int mid = (l+h)/2;
        if(arr[mid]==key){
            cout<<"found at "<<mid<<endl; break;
        }
        else if(arr[mid]>key){
            h--;
        }
        else l++;
    }
   if(l>h) cout<<"Not found"<<endl;
    return 0;
}                  */        


// PATTERNS
/*
 int main(){
    int n;
    cout<<"enter the n : ";
    cin>>n;
    int count =1;
    for(int i = 0; i<n; i++){
        for(int j=0; j<n; j++,count++){
            cout<<count<< " ";
        }
        cout<<endl;
    }
    return 0;
 }   */
/*
int main(){
    int n;
    cout<<"enter the n : ";
    cin>>n;
    
    for(int i = 0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i>=j) cout<<"*";
        }
        cout<<endl;
    }
    return 0;
 }       */

/*
 int main(){
    int n;
    cout<<"enter the n : ";
    cin>>n;
    
    for(int i = 0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i<=j) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
    return 0;
 }  */
/*
  int main(){
    int n;
    cout<<"enter the n : ";
    cin>>n;
    
    for(int i = 0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i+j>=n-1) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
    return 0;
 }    */

 // POINTERS
/*
 int main(){
    int a =20;
    int *p = &a;
    cout<<a<<endl;  // value of a
    cout<<&a<<endl; // address of a
    cout<<p<<endl;     // adress of a
    cout<<&p<<endl; // address of p
    cout<<*p<<endl;      // *p-->> jo address store p me store hn uss address pe jo value store h wo display krro
    return 0;
 }        */        

/*
 int main(){
    int a[5] = {1,2,3,4,5};    // this in stack
    int *p;
    p = new int [5];      // this is in heap
    // stack memory is deleted automatically when it is going out of the scope
    // heap memory is not deleted on it's own 
    delete []p;
    p = nullptr;
    
    return 0;
 }           */
/*
        int main(){
            int *p = new int [5];
            p[0] = 12;
            p[1] = 13;
            cout<<p[1]<<endl;

            delete []p;
            p = nullptr;         // always assingn value p = nullptr after deleting p array so that memory is not wasted in heap
            return 0;
        }      */


//  BENEFIT OF ARRAY IN HEAP
/*
        int main(){
            int size;
            cout<<"Enter the number of elements : ";
            cin>>size;
            int A[size];

            cout<<sizeof(A)<<endl;
            size = 35;
            cout<<sizeof(A)<<endl;  // we can see after declaration of array we can not change the size of array

            return 0;
        }        */

// BENEFIT OF ARRAY IN HEAP
/*
        int main(){
            int *p = new int[5];
            for(int i=0; i<5; i++){
                cin>>p[i];
            }
            for(int i=0; i<5; i++){
                cout<<p[i];
            }
            

            delete []p;

            p = new int [8];
            for(int i=0; i<8; i++){
                cin>>p[i];
            }
            
            for(int i=0; i<8; i++){
                cout<<p[i]<<" ";
            }
            return 0;
        }     */

//   POINTER ARITHMETIC
/*
        int main(){
            int A[5] = {2,4,6,8,10};
            int *p = &A[0];
            cout<<p<<endl;  // print address
            cout<<*p<<endl;   // print value at that address
            return 0;
        }         */ 

// CAN BE ALSO WRITTEN AS
/*
        int main(){
            int A[5] = {2,4,6,8,10};
            int *p = A;
            cout<<p<<endl;  
            cout<<*p<<endl;  
            p++;
            cout<<*p<<endl;
            p--;
            cout<<*p<<endl;
           
            cout<<*(p+2)<<endl;
            cout<<p<<endl;
            cout<<p+2<<endl;
            cout<<p<<endl;
            for(int i=0; i<5; i++){
                cout<<*p<<" ";          // A[i] == i[A] == *(A+i) == *(p+i) == p[i]
                p++;            
            }
            cout<<p<<endl;
            return 0;
        }           */

/*

        int main(){
            int A[5] = {2,4,6,8,10};
            int *p = A , *q = &A[4];
            
           cout<<q-p<<endl;
            cout<<p<<endl;
            cout<<q<<endl;
            return 0;
        } */

// REFERENCE ->> it is the nickname given to any other variables
/*
        int main(){
            int x = 10;
            int &y = x;
            cout<<x<<endl;
            x++; y++;
            cout<<x<<" "<<y<<endl;
            cout<<&y<<" "<<&x<<endl;     // same address
            return 0;
        }         */


// POINTER TO A FUNCTION
/*  
        int max(int x , int y){
            return x>y ? x : y;
        }
        
        int min(int x , int y){
            return x>y ? y : x;
        }
        int main(){
            int (*fp)(int , int);
            fp = max;
          int value = (*fp)(10,5);
            cout<<value<<endl;
            fp = min;
          value = (*fp)(10,5);
            cout<<value<<endl;
            return 0;
        }
*/

// Let's look at another example of function pointer.
/*
        #include<cstring>
        void printname(char *name)  
        {  
            cout << "Name is :" <<name<< endl;  
        }  
        
        int main()  
        {  
            char s[20];  // array declaration  
            void (*ptr)(char*);  // function pointer declaration  
            ptr=printname;  // storing the address of printname in ptr.  
            cout << "Enter the name of the person: " << endl;  
            gets(s);  
            cout<<s<<endl;  
            ptr(s);  // calling printname() function  
        return 0;  
        }                 */