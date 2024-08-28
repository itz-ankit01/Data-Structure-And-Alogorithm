#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    vector<int>num(m);

    for(int i=0; i<m; i++){
        cin >> num[i];
    }
    for(int i=0, j=0; i<n, j<m; i++){
        if(num[j] == i+1){
            cout << num[j] - (i+1) << endl;
            j++;
        }
        else {
            cout << num[j] - (i+1) << endl;
        }
    }

    return 0;
}