#include <iostream>
using namespace std;
 /*
int main()
{
    //  YOU HAVE GIVE AN ARRAY OF SIZE N , WHR N IS EQUAL TO 2M+1. NOW, IN THE GIVEN ARRAY, M NUMBERS ARE PRESENT TWICE AND ONE NUMBER IS PRESENT ONLY ONCE, YOU NEED TO FIND THE THE NUMBER WHICH IS PRESENT ONLY ONCE.
    // 0 ^ a = a
    // a ^ a = 0
    // a ^ b ^ c ^ b ^ a = c
   
    int n;
    cin >> n;
    int ans = 0;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    cout << "The duplicate number is " << ans << endl;
    return 0;
}          */

    // GIVEN AN ARRAY OF INTEGERS ARR, RETURN TRUE IF THE NUMBER OF OCCURENCES OF EACH VALUE IN THE ARRAY IS UNIQUE, OR OTHERWISE RETURN FALSE
    /*
    #include<climits>
    int main(){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int brr[100];
        int count = 0;
        for(int i=0; i<n; i++){
          for(int j=i; j<n; j++ ){
            if(arr[i]==arr[j] && arr[j]!= INT_MAX){

            }
          }
        }
        return 0;
    }    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
        */

// FIND DUPLICATE IN THE ARRAY
/*
    int main(){
        int n;
        cin >> n;
        int ans = 0;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        // XOR ing all array elements
        for (int i = 0; i < n; i++)
        {
            ans = ans ^ arr[i];
        }
        // XOR [1, N-1]
        for (int i = 1; i < n; i++)
        {
            ans = ans ^ i;
        }
        cout << ans << endl;
        return 0;
    }                  */


//  FIND ALL THE DUPLICATE IN AN ARRAY
// LEETCODE PROBLEM USE DISCUSSION FORUM






















// INTERSECTION OF TWO ARRAY(COMMON ELEMENTS) given - both will already be sorted
/*
#include<climits>
    int main(){
        int m , n;
        cin>> m >> n;
        int arr[m],brr[n];
        for(int i = 0; i < m; i++){
            cin >> arr[i];
        }
        
        for(int i = 0; i < n; i++){
            cin >> brr[i];
        }

        for(int i = 0; i < m; i++){
            int element = arr[i];
            for(int j = 0; j < n; j++){
                if(element == brr[j]){
                    cout << brr[j] ;
                    brr[j] = INT_MIN;
                    break;
                }
            }
        }

    }               */


// reducing time complexity of the previous questions
/*   
    include<climits>
    int main(){
        int m , n;
        cin>> m >> n;
        int arr[m],brr[n];
        for(int i = 0; i < m; i++){
            cin >> arr[i];
        }
        
        for(int i = 0; i < n; i++){
            cin >> brr[i];
        }

        int i = 0; int j = 0;
        while( i < m && j < n){
            if(arr[i] == brr[j]){
                cout << arr[i]<<" ";
                i++; j++;
            }

            else if(arr[i] > brr[j]){
                j++;
            }

            else {
                i++;
            }
        }

    } #                     */


// PAIR SUM 
/*
   
     #include<climits>
    int main(){
        int m ;
        cin>> m ;
        int arr[m];
        for(int i = 0; i < m; i++){
            cin >> arr[i];
        }
        
        int key;
        cin>>key;
        for(int i = 0; i < m; i++){
            for(int j = i + 1; j < m; j++){
                if(arr[i] + arr[j] == key){
                   
                    cout<< arr[i] << " " << arr[j] << endl;
                }
            }
        }

    }                */

// TRIPLET WITH GIVEN SUM
/*
    int main(){
        int m ;
        cin>> m ;
        int arr[m];
        for(int i = 0; i < m; i++){
            cin >> arr[i];
        }
        
        int key;
        cin>>key;
        for(int i = 0; i < m; i++){
            for(int j = i + 1; j < m; j++){
                for(int k = j + 1; j < m; j++){
                    if(arr[i] + arr[j] + arr[k] == key){
                   
                    cout<< arr[i] << " " << arr[j] << " " << arr[k] << endl;
                }
                }
            }
        }

    }                 */


// 2 POINTER APPROACH Q-> SORT 0 1
/*
    int main(){
        int m ;
        cin>> m ;
        int arr[m];
        for(int i = 0; i < m; i++){
            cin >> arr[i];
        }
        int i = 0, j = m-1;
        while(i < j){
            if(arr[i] == 0 && arr[j] == 1){
                    i++; j--;
            }

            else if(arr[i] == 1 && arr[j] == 0){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                    i++; j--;
            }

             else if(arr[i] == 0 && arr[j] == 0){
                    i++;
            }
            else j--;
        }
        for(int i = 0; i < m; i++){
            cout<<arr[i]<<" ";
        }
    }                    */

// SORT 0 1 2 ->> 3 POINTER APPROACH
int main(){






























    
    return 0;
}