#include<iostream>
using namespace std;


//  GIVEN AN ARRAY OF INTEGERS WITH 1 TO N ELEMEMNTS AND THE SIZE OF ARRAY IS N+1. ONE ELEMENT IS OCCURING MORE THAN ONCE THAT IS DUPLICATE NUMBER IS PRESENT. FIND THE DUPLICATE NUMBER.

// efficient in terms of space but not in terms of time
/*
        int main()
        {
            int arr[7] = {6,1,2,3,2,5,4};
            for(int i=0; i<7; i++){
                for(int j=i+1; j<7; j++){
                    if(arr[i]==arr[j]){
                        cout<<arr[i]<<" is duplicate no"<<endl;
                        break;
                    }
                }
            }
            return 0;
        }       */

// CONCEPT OF VISITED ARRAY -> efficient in terms of time but not in terms of space
/*
        int main(){
            
            int arr[11] ={6,1,7,3,2,5,4,8,9,9,10};
            int brr[11]={0};
            for(int i=0; i<11; i++){
                if(brr[arr[i]]!=1){
                    brr[arr[i]] = 1;
                } 
                else cout<<arr[i]<<" Is a duplicate number "<<endl;
            }
            return 0;
        }         */

// CONCEPT OF ADDITION -> efficient in terms of both time and space
/*
         int main(){
            int arr[11] ={6,1,7,3,2,5,4,8,9,9,10};
            int sum1=0;
            for(int i=0; i<11; i++){
                sum1 += arr[i];
            }
            int sum2 = (10 * 11)/2;
            cout<<sum1 - sum2 <<" is a duplicate number "<<endl;
          
            return 0;
        }       */

// SORTING -> it means put in ascending order

// *2 - POINTER
// GIVEN AN ARRAY OF INTEGERS NUMBER THAT IS ALREADY SORTED IN NON DECREASING ORDER, FIND TWO NUMBER SUCH THAT THEY ADD UP TO A SPECIFIC TARGET NUMBER
/*
        int main(){
                
                int n ;
                cin>>n;
                int arr[n] ;
                int i=0, j = n-1;
                int target = 20;
                for(int i = 0 ; i<n; i++){
                    cin>>arr[i];
                }
                while(i<j){
                    if(arr[i]+arr[j]==target){
                        cout<<arr[i]<<" "<<arr[j]<<endl;
                        i++; 
                    }
                    else if((arr[i]+arr[j])>target){     
                       j--;         // to decrease
                    }
                    else i++;          // to increase
                } 
            return 0;
        }     */   

// BUBBLE SORT -> Swapping of two adjacent number (if first number is greater than second)
/*
        int main(){
            int arr[5] = {5,42,3,2,1};
            int n = 5;
            for(int i=0; i<n; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
            // bubble sort
            for(int i=0; i<n-1; i++){
                for(int j=0; j<n-1-i; j++){
                    if(arr[j]>arr[j+1]){
                        int temp = arr[j];
                        arr[j] = arr[j+1];
                        arr[j+1] = temp;
                    }
                }
            }
            for(int i=0; i<n; i++){
                cout<<arr[i]<<" ";
            }

            return 0;
        }       */

// MAXIMUM NO OF SWAPS IN WROST CASE IN BUBBLE SORT ->>>> n*(n-1)/2

// HOW TO OPTIMISED THE BUBBLE SORT IN THE CASE OF NEARLY SORTED ARARYS -->> check if array after every pass is already sorted or not with the help of checkmark
/*

            int main(){
            int arr[5] = {5,42,3,2,1};
            int n = 5;
            for(int i=0; i<n; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
            // bubble sort
            for(int i=0; i<n-1; i++){
                bool flag = true;  // array is already  sorted yet
                for(int j=0; j<n-1-i; j++){
                    if(arr[j]>arr[j+1]){
                        int temp = arr[j];
                        arr[j] = arr[j+1];
                        arr[j+1] = temp;
                        flag = false;
                    }
                }
                if(flag == true) break;   // checkmark
            }
            for(int i=0; i<n; i++){
                cout<<arr[i]<<" ";
            }

            return 0;
        }  */

// SORT THE ARRAY IN DESCENDING ORDER
        // int main(){
        //     int arr[5] = {5,42,3,2,1};
        //     int n = 5;
        //     for(int i=0; i<n; i++){
        //         cout<<arr[i]<<" ";
        //     }
        //     cout<<endl;
        //     // bubble sort
        //     for(int i=0; i<n-1; i++){
        //         bool flag = true;  // array is already  sorted yet
        //         for(int j=n-1; j>=0; j--){
        //             if(arr[j]>arr[j-1]){
        //                 int temp = arr[j];
        //                 arr[j] = arr[j-1];
        //                 arr[j-1] = temp;
        //                 flag = false;
        //             }
        //         }
        //         if(flag == true) break;   // checkmark
        //     }
        //     for(int i=0; i<n; i++){
        //         cout<<arr[i]<<" ";
        //     }
        //     // for(int i=n-1; i>=0; i--){
        //     //     cout<<arr[i]<<" ";
        //     // }

        //     return 0;
        // }



// SELECTION SORT
/*
        #include<climits>
        int main(){
            int arr[7] = {7,4,5,9,8,2,1};
            int n = 7;
            cout<<"Unsorted Array :"<<endl;
            for(int i=0; i<n; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
            // Selection Sort
            
            for(int i=0; i<n-1; i++){
                int min = INT_MAX;
                int minidx = -1;
                for(int j=i; j<=n-1; j++){
                    if(min>arr[j]) {
                    min = arr[j];
                    minidx = j;
                    }
                }
                // swap the min and first element of unsorted array
                // swap minidx and i
                int temp = arr[i];
                arr[i] = arr[minidx];
                arr[minidx] = temp;
            }
             cout<<"Sorted Array : "<<endl;

            for(int i=0; i<n; i++){
                cout<<arr[i]<<" ";
            }

            return 0;
        }   */


//  INSERTION SORT

        void swap(int *a, int* b){
            int temp = *a;
            *a = *b;
            *b = temp;
        }
        int main(){
            int n;
            cin>>n;
            int arr[n];
            // inputting the elements in the array
            for(int i=0; i<n; i++){
                cin>>arr[i];
            }
            // sorting
            for(int i=1; i<n; i++){
                int j = i;
                while(j>0 && arr[j]<arr[j-1]){
                    swap(&arr[j],&arr[j-1]);
                    j--;
                }
            }
            // display
            for(int i=0; i<n; i++){
                cout<<arr[i]<<" ";
            }
            return 0;
        }   

// GIVEN AN INTEGER ARRAY ARR, MOVE ALL 0'S TO THE END OF IT WHILE MAINTAINING THE RELATIVE ORDER OF THE NON-ZERO ELEMENTS
/*
        int main(){
            int n;
            cout<<endl<<"Enter the number : ";
            cin>>n;
            int arr[n];
            int ans[n] = {0};
            int idx = 0;
            cout<<"Given array : ";
            for(int i=0; i<n; i++){
                cin>>arr[i];
            }
            for(int i=0; i<n; i++){
                if(arr[i]!=0){
                    ans[idx] = arr[i];
                    idx++;
                }
            }
            cout<<"Desired result : ";
            for(int i=0; i<n; i++){
                cout<<ans[i]<<" ";
            }
            return 0;
        } */

// MORE OPTIMISED CODE USING BUBBLE SORT
/*
        int main(){
            int n;
            cout<<endl<<"Enter the number : ";
            cin>>n;
            int arr[n];
            int ans[n] = {0};
            int idx = 0;
            cout<<"Given array : ";
            for(int i=0; i<n; i++){
                cin>>arr[i];
            }
            for(int i = 0; i<n-1; i++){
                for(int j=0; j<n-i-1; j++){
                    if(arr[j] == 0 ){
                        int temp  = arr[j];
                        arr[j] = arr[j+1];
                        arr[j+1] = temp;
                    }
                }
            }
            for (int i=0; i<n; i++){
                cout<<arr[i]<<" "; 
            }
            return 0;
        }  */



// OPTIMISED CODE USING INSERTION SORT
/*
        void swap(int *a , int *b){
            int temp  =*a;
            *a = *b;
            *b = temp;
        }
        int main(){
            int n;
            cout<<endl<<"Enter the number : ";
            cin>>n;
            int arr[n];
            cout<<"Given array : ";
            for(int i=0; i<n; i++){
                cin>>arr[i];
            }
             for(int i=1; i<n-1; i++){
                int j = i;
                while(j>0 && arr[j]==0 && arr[j+1]>0){
                    swap(&arr[j],&arr[j+1]);
                    j--;
                }
            }
            cout<<"Desired result : ";
            for(int i=0; i<n; i++){
                cout<<arr[i]<<" ";
            }
            return 0;
        }   */

// GIVEN AN INTEGER ARRAY AND AN INTEGER K WHERE K <= SIZE OF ARRAY, WE NEED TO RETURN THE KTH SMALLEST ELEMENT OF THE ARRAY
/*

        int main(){
            int n; 
            cout<<"Enter the number : ";
            cin>>n;           
            int arr[n],k;
            cout<<"Enter the k : ";
            cin>>k;
             cout<<"Input the array's element : ";
            for(int i=0; i<n; i++){
                cin>>arr[i];
            }
            for(int i=0; i<n-1; i++){
                for(int j=0; j<n-1-i; j++){
                    if(arr[j]>arr[j+1]){
                        int temp = arr[j];
                        arr[j] = arr[j+1];
                        arr[j+1] = temp;
                    }
                }
            }
            for(int i=0; i<n; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl<<"The kth smallest number is "<<arr[k-1];
               return 0;
        }      */

