#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef long long ll;
 
int main(){
    int n;
    cin >> n;
    vi v(n);
    for(int i=0; i<n; ++i){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for(int i=0; i<n; ++i){
        cout << v[i] << " " << endl;
    }
    return 0;
}