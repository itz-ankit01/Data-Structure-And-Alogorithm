// ARRAY
#include<iostream>
using namespace std;
   /*     int main()
        {
            int arr[5];
            for(int i=0; i<5; i++){
                cout<<"Enter element no "<<i+1<<endl; cin>>arr[i];
            }
            for(int i=0; i<5; i++){

                cout<<arr[i]<<" ";
            }
            
            return 0;
        }        */  

//  PRINT THE REVERSE OF AN ARRAY 
      /*   int main()
            {
            int arr[5];
            for(int i=0; i<5; i++){
                cout<<"Enter element no "<<i+1<<endl; cin>>arr[i];
            }
            for(int i=4; i>=0; i--){

                cout<<arr[i]<<" ";
            }
            
            return 0;
        }           */

//  GIVEN AN ARRAY OF MARKS OF STUDENTS, IF THE MARKS OF ANY STUDENT IS LESS THAN 35 PRINT IT'S ROLL NO -> INDEX NUMBER
   /*     int main(){
            int marks[5];
            for(int i=0; i<5; i++){
                cout<<"Enter the marks of "<<i+1<<" Student ";
                cin>>marks[i];
            }
            for(int i=0;i<5; i++){
                if(marks[i]<35) cout<<i<<endl;
            }
            return 0;
        }                */

// MEMORY ALLOCATION IN ARRAY
/*
    int main (){
        int arr[5]={1,2,3,4,5};
        for(int i=0; i<5; i++){
            cout<<&arr[i]<<endl;
        }
        return 0;
    }     */

//  SWAPPING IN ARRAY
  /*      int main(){
            int num[26], temp;
            num[0]=100;
            num[25]=200;
            temp = num[25];
            num[25] = num[0];
            num[0]= temp;
            cout<<num[0]<<" "<<num[25];
            return 0;
        }       */

// PREDICT THE OUTPUT
/*
        int main(){
            int sub[50],i;
            for(i=0; i<=48; i++);
            {
                sub[i]=i;
                cout<<sub[i]<<endl;
            }
            return 0;
        } */

// CALCULATETHE SUM ALL ELEMEMTS IN AN ARRAY 
/*
        int main(){
        int n;
        cin>>n;
        int arr[n];
        int sum=0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
         for(int i=0; i<n; i++){
            sum+=arr[i];
        } cout<<sum;
            return 0;
        }           */

//CALCULATE THE PRODUCT ALL ELEMEMTS IN AN ARRAY 
    /*    int main(){
        int n;
        cin>>n;
        int arr[n];
        int prdt=1;
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
         for(int i=0; i<n; i++){
            prdt*=arr[i];
        } cout<<prdt;
            return 0;
        }          */
   
// FIND MAXIMUM VALUE IN ARRAY
   /*     int main(){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int max1=arr[0];
        for(int i=0; i<n; i++){
                if(arr[i]>max1){
                     max1 = arr[i];
                }
        }
            cout<<max1<<endl;
            return 0;
        }  */

//  ALTERNATE
  /*      #include<climits>
        int main(){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int max1=INT_MIN;
        for(int i=0; i<n; i++){
                if(arr[i]>max1){
                     max1 = arr[i];
                }
        }
            cout<<max1<<endl;
            return 0;
        }             */
//  FIND THE MINIMUM VALUE IN ARRAY
   /*     #include<climits>
        int main(){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int min1=INT_MAX;
        for(int i=0; i<n; i++){
                if(arr[i]<min1){
                     min1 = arr[i];
                }
        }
            cout<<min1<<endl;
            return 0;
        } */

// PASS BY VALUE / REFERENCE IN FUMNCTION OF AN ARRAY
   /*     void func(int a[]){
          int temp;
          temp =a[0];
          a[0]=a[1];
          a[1]=temp;
            return ;
        }
        int main (){
            int arr[2]={2,9};
            cout<<arr[0]<<" "<<arr[1]<<endl;
            func(arr);
            cout<<arr[0]<<" "<<arr[1]<<endl;
            return 0;
        }             */

//  GIVEN AN ARRay OF INTEGERS, CHANGE THE VALUE OF ALL ODD INDEXED ELEMENTS TO ITS SECOND MULTIPLE AND INCREASEMENT 
//ALL EVEN INDEXED VALUE BY 10
/*
        int main(){
            int n; 
            cout<<"Enter the size of array";
            cin>>n;
            int arr[n];
            for(int i = 0; i<n; i++){
                cin>>arr[i];
            }
            for(int i = 0; i<n; i++){
                if(i%2==0) cout<<arr[i]+10<<" ";
                else cout<<2*arr[i]<<" ";
            }

            return 0;
        }           */

//  COUNT THE NUMBER OF ELEMENTS IN GIVEN ARRAY GREATER THAN A GIVEN NUMBER X
/*
        int main(){
            int n, cnt=0,t;
            cout<<"Enter the size of array ";
            cin>>n;
            int arr[n];
             for(int i = 0; i<n; i++){
                cin>>arr[i];
            } cin>>t;
            for(int i = 0; i<n; i++){
               if(arr[i]>t) cnt++; 
            }
            cout<<cnt;
            return 0;
        }             */
//  FIND THE DIFFERENCE BETWEEN THE SUM OF ELEMENTS AT EVEN INDICES TO THE THE SUM OF ELEMENTS AT ODD INDICES
/*
        int main(){
            int n, sumEven=0,sumOdd=0;
            cout<<"Enter the size of array ";
            cin>>n;
            int arr[n];
             for(int i = 0; i<n; i++){
                cin>>arr[i];
            } 
            for(int i = 0; i<n; i++){
             if(i%2==0) sumEven+=arr[i];
             else sumOdd+=arr[i];
            }
            cout<<sumEven-sumOdd<<endl;
            return 0;
        }           */

// FIND THE TOTAL NUMBER OF PAIRS IN THE ARRAY WHOSE SUM IS EQUAL TO THE GIVEN X
/*
         int main(){
            int n, cnt=0,t;
            cout<<"Enter the size of array ";
            cin>>n;
            int arr[n];
             for(int i = 0; i<n; i++){
                cin>>arr[i];
            } cin>>t;
            for(int i = 0; i<n; i++){
               for(int j=i+1; j<n; j++){
                if(arr[i]+arr[j]==t){
                     cnt++;
                     cout<<arr[i]<<" "<<arr[j]<<endl;
                }
               } 
            } 
            cout<<cnt;
            return 0;
        }          */

// COUNT THE NUMBER OF TRIPLETS WHOSE SUM IS EQUAL TO THE GIVEN X
  /*
         int main(){
            int n, cnt=0,t;
            cout<<"Enter the size of array ";
            cin>>n;
            int arr[n];
            for(int i=0; i<n; i++){
                cin>>arr[i];
            }  cin >>t;
            for(int i = 0; i<n; i++){
               for(int j=i+1; j<n; j++){
                    for(int k=j+1; k<n; k++){
                         if(arr[i]+arr[j]+arr[k]==t){
                         cnt++;
                        cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                }
                    }
               } 
            } 
            cout<<cnt;
            return 0;
        }   */

//  FIND THE SECOND HIGHEST NUMBER IN AN ARRAY
/*     #include<climits>
        int main(){
             int n,max;
             int smax;
            cout<<"Enter the size of array ";
            cin>>n;
            int arr[n];
             for(int i = 0; i<n; i++){
                cin>>arr[i];
            } 
            max = INT_MIN;
            smax = INT_MIN;
            for(int i = 0; i<n; i++){
             if(arr[i]>max) max = arr[i];
            }
            for(int i=0; i<n; i++){
                if(arr[i]>smax && arr[i]!=max)
                smax = arr[i];
            }
            cout<<smax;
           
            return 0;
        }    */

 // MORE OPTIMISED SOLUTION OF THE PREVIOUS PROBLEM
 /*       #include<climits>
        int main(){
            int n;
            cout<<"Enter the size of array";
            cin>>n;
            int arr[n];
            int max = INT_MIN;
            int smax = INT_MIN;
            for(int i=0; i<n; i++){
                cin>>arr[i];
            }
            for(int i=0; i<n; i++){   // this code is more optimised cuz all works is done in a loop
                if(max<=arr[i]){
                smax = max;      // previous max now become smax
                max = arr[i];    // max is updated
                }
                else if(arr[i]>smax && max!=arr[i]){
                    smax = arr[i];
                }
            }
            cout<<smax;
            return 0;
        }            */

//   WRITE A PROGRAM TO COPY THE CONTENTS OF ONE ARRAY INTO ANOTHER IN THE REVERSE ORDER
 /*            int main(){
            int n;
            cout<<"Enter the size of array ";
            cin>>n;
            int arr[n];
            int brr[n];
            for(int i=0; i<n; i++){
                cin>>arr[i];
            }
            for(int i=0 ; i<n; i++){
                brr[i] = arr[n-i-1];
            }
           for(int i=0 ; i<n; i++){
                cout<<brr[i]<<" ";
            }
            return 0;
         }               */

//  WRITE A PROGRAM TO REVERSE THE ARRAY WITHOUT USING AN extra ARRAY
 /*       int main(){
            int n;
             cout<<"Enter the size of array ";
            cin>>n;
            int arr[n];
            for(int i=0; i<n; i++){
                cin>>arr[i];
            }
             for(int i=0; i<n; i++){
                cout<<arr[n-i-1]<<" ";
            }
            
            return 0;
        }           */

//  WRITE A PROGRAM TO REVERSE THE ARRAY WITHOUT USING AN extra ARRAY
/*
            void swap(int arr[],int n){
                int i=0, j = n-1;
                while(i<j){
                    int temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                    i++;
                    j--;
                }
                 return ;
            }
            int main(){
           int n;
           cin>>n;
            int arr[n];
            for(int i=0; i<n; i++){
                cin>>arr[i];
            }
            swap(arr,n);
            for(int i=0; i<n; i++){
                cout<<arr[i]<<" ";
            }
            return 0;
        }         */    

// REVERESE SOME PART OF ARRAY
/*
7
1 2 3 4 5 6 7
1 2 6 5 4 3 7               */
   /*         void swap(int arr[],int n, int si, int ei){
                int i=si, j = ei;
                while(i<j){
                    int temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                    i++;
                    j--;
                }
                 return ;
            }
            int main(){
           int n;
           cin>>n;
            int arr[n];
            for(int i=0; i<n; i++){
                cin>>arr[i];
            }
            swap(arr,n,2, n-2);
            for(int i=0; i<n; i++){
                cout<<arr[i]<<" ";
            }
            return 0;
        }       */

// ROTATE AN ARRAY A BY K STEPS , WHERE K IS NON NEGATIVE AND K CAN BE GREARER THAN N
/*
7
1 2 3 4 5 6 7
3
5 6 7 1 2 3 4          */
/*
                  void reverse(int arr[],int n, int si, int ei){
                int i=si, j = ei;
                while(i<j){
                    int temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                    i++;
                    j--;
                }
                 return ;
            }
            int main(){
            int n;
            cin>>n;
            int arr[n];
            for(int i=0; i<n; i++){
                cin>>arr[i];
            }
            int k;
            cin>>k;
            // step 1
            k = k % n;
            // step 2 -> reverse the whole array
            reverse(arr,n,0, n-1);
            // step 3 -> reverse the first k-1 indices or k element of array
             reverse(arr,n,0, k-1);
            // step 4 -> reverse the remaining element of the array
             reverse(arr,n,k, n-1);
            for(int i=0; i<n; i++){
                cout<<arr[i]<<" ";
            }
            return 0;
        }     */    

// GIVEN AN ARRAY ND X CHECK WHETHER X IS PRESENT IN THE ARRAY OR NOT ALSO FIND ITS INDICES 
/*
7
21
12 21 30 42 21 6 7
21 is present in an array and its indices is 1
21 is present in an array and its indices is 4       */
/*
           int main(){
            int n;
            cin>>n;
            int x; cin>>x;
            int arr[n];
            for(int i=0; i<n; i++){
                cin>>arr[i];
            }
            for(int i=0; i<n; i++){
               if(arr[i]==x)
               cout<<x<<" is present in an array and its indices is "<<i<< endl;
            }
            return 0;
           } */

/*

            int main(){
            int n;
            cin>>n;
            int x; cin>>x;
            int arr[n];
            int idx =-1;
            bool flag = false;  // false means not present
            for(int i=0; i<n; i++){
                cin>>arr[i];
            }
            for(int i=0; i<n; i++){
               if(arr[i]==x){
               flag = true;
               idx = i;
               break;
               }
            }
            if(flag == false) cout<<x<<" is not present in the array";
            else cout<<x<<" is present in an array and its indices is "<<idx<< endl;
                return 0;
            }             */

// LINEAR SEARCH


//   WRITE A PROGRAM TO FIND A DUPLICATE ELEMENT FROM A GIVEN ARRAY OF INTEGERS
/*
            int main(){
            int n;
            cin>>n;
            int arr[n];
            for(int i=0; i<n; i++){
                cin>>arr[i];
            }
            for(int i =0; i<n; i++){
                for(int j =i+1; j<n; j++){
                    if(arr[i]==arr[j]) cout<<arr[i]<<" is the duplicate element "<<endl;
                }
            }
                return 0;
            }                */

// FIND THE UNIQUE NUMBER IN A GIVEN ARRAY WHR SLL THE ELEMENTS ARE BEING REPEATED TWICE WITH ONE VALUE BEING UNIQUE
   /*        int main(){
            int n;
            cin>>n;
            int arr[n];
            for(int i=0; i<n; i++){
                cin>>arr[i];
            }
            for(int i=0; i<n; i++){
                bool flag = false;
                for(int j =i+1; j<n; j++){
                    if(arr[i]==arr[j]) {
                    flag =true;
                    }
                }
                if(flag==false){
                 cout<<arr[i]<<endl;
                break;
                }
            }
                return 0;
            }  
        */

/*
input
5  // size of array
12   // target sum
1 2 3 7 5   // array input
// output
2 4
4 5  */


/*
int main() {
	
	  int n,s;
	  cin>>n>>s;
	  int arr[n];
	  for(int i=0; i<n; i++){
		cin>>arr[i];
	  } int sum=0;
	  for(int i=0; i<n; i++){
		sum=arr[i];
		int temp1=i;
		for(int j=i+1; j<n; j++){
			sum+=arr[j];
			if(sum==s){
				cout<<i+1<<" "<<j+1<<endl;
				break;
			}
			else if(sum>s) break;
		}
	  }
	return 0;
}           */


