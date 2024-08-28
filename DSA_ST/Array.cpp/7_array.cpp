#include<iostream>
#include<map>
using namespace std;

// OUTPUT THE MAJORITY ELEMENT WHICH IS GRETER THAN N/2
/*
    int main(){
        int n;
        cout << "Enter the size of the array " ;
        cin >> n;
        
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        map <int, int> mpp;
        for(int i=0; i<n; i++){
            mpp[arr[i]]++;
        }
        // iterating in the map
        for(auto it : mpp){
            if(it.second > n/2){
                cout << it.first;
                break;
            }
        }
    return 0;
}      */

// MOST OPTIMAL SOLUTION USING MOORE'S VOTING ALGORITHM

    int main(){
        int n;
        cout << "Enter the size of the array " ;
        cin >> n;
        
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int cnt = 0; int el=0;
        for(int i=0; i<n; i++){
                if(cnt == 0){
                    cnt = 1;
                    el = arr[i];
                }
                else if(el == arr[i]){
                    cnt++;
                }
                else cnt--;
        }
        int cnt1 = 0;
        for(int i=0; i<n; i++){
            if(el == arr[i]){
                cnt1++;
            }
        }
        if(cnt1 > n/2) cout << el;
        else cout << "NoOne" << endl;
    return 0;
} 