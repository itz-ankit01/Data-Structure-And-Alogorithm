#include<iostream>
using namespace std;
int main(){
    long int n;
    cin >> n;
    int arr[n];
    for(long int i=0; i<n; i++){
        cin >> arr[i];
    }
    long int cnt = 0;
    for(int i=1; i<n; i++){
        if(arr[i] < arr[i-1]){
            cnt+=(arr[i-1]-arr[i]);
            arr[i] = arr[i-1];
        }
    }
    cout << cnt << endl;
    return 0;
}