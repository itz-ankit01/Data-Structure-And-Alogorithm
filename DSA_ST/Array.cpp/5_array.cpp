#include<iostream>
#include<map>
using namespace std;
// 2 SUM PROBLEM

/*
int main(){
        int n;
        cout << "Enter the size of the array " ;
        cin >> n;
        
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int target;
        cin >> target;

        bool flag = 0;
        map<int,int> mpp;
        for(int i=0; i<n; i++){
            int a = arr[i];
            int more = target - a; 
            if(mpp.find(more) != mpp.end()){
                flag = 1; break;
            }
            mpp[a] = i;
        }
        if(flag == 1) cout <<"YES" << endl;
        else cout << "NO" << endl;

    return 0;
}   */       

// solving this problem using map has a restriction that element shoul not be duplicate

// RETURN THE INDEX OF TARGET SUM ELEMENT
/*
    int main(){
        int n;
        cout << "Enter the size of the array " ;
        cin >> n;
        
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int target;
        cin >> target;

      
        map<int,int> mpp;
        for(int i=0; i<n; i++){
            int a = arr[i];
            int more = target - a; 
            if(mpp.find(more) != mpp.end()){
                cout << mpp[more] << " " << i << endl; 
                break;
            }
            mpp[a] = i;
        }
    return 0;
}    */

// OPTIMISING USING 2 POINTER APPROACH

#include<algorithm>
    int main(){
        int n;
        cout << "Enter the size of the array " ;
        cin >> n;
        
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int target;
        cin >> target;
        bool flag = 0;
        sort(arr, arr+n);
        int left = 0, right = n-1;
        while(left < right){
            if(arr[left] + arr[right] == target){
                 flag = 1 ; break;
            }
             if(arr[left] + arr[right] > target){
                right--;
            }
            else left++;
        }
        if(flag == 1) cout <<"YES" << endl;
        else cout << "NO" << endl;
    return 0;
}  