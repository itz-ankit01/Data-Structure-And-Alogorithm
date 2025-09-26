#include<iostream>
using namespace std;
int main(){
    long int n;
    cin >> n;
    long int arr[n] = {0};
    long int ind = 0;
    if(n > 4){
        for(long int i=0; i<n; i++){
        if(ind < n){
            arr[ind] = i+1;
            ind+=2;
        }
        else {
            ind = 1;
            arr[ind] = i+1;
            ind+=2;
        }
    }
    for(long int i=0; i<n; i++){
        cout << arr[i] << " " ;
    }
    }
    else if(n==4){
        cout <<"2 4 1 3" << endl;
    }
    else if(n==1) cout <<"1" << endl;
    else cout << "NO SOLUTION" << endl;
    return 0;
}