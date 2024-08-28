#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef long long ll;
 
// int main(){
//     int n;
//     cin>> n;
//     int a[n];
//     for(int i=0; i<n; ++i){
//         cin >> a[i];
//     }
//     cout << endl;
//     // int *ptr = lower_bound(a, a+n, 4);  // log(n) return pointer
//     int *ptr = upper_bound(a+2, a+n, 5);      // log(n)
//     if(ptr == (a+n)){
//         cout << "NOT FOUND" << endl;
//         return 0;
//     }
//     cout << (*ptr) << endl;
//     return 0;
// }


// in case of vector
// int main(){
//     int n;
//     cin >> n;
//     vi v(n);

//     for(int i=0; i<n; ++i){
//         cin >> v[i];
//     }

//     cout << endl;
//     // auto it = lower_bound(v.begin(), v.end(), 4);  // log(n) returns iterator
//     auto it = upper_bound(v.begin(), v.end(), 5);      // log(n)
//     if(it == (v.end())){
//         cout << "NOT FOUND" << endl;
//         return 0;
//     }
//     cout << (*it) << endl;

//     return 0;
// }




// in case of sets ans MAPS

int main(){

    int n;
    cin >> n;
    set<int> st;
    for(int i=0; i<n; ++i){
        int x;
        cin >> x;
        st.insert(x);
    }

    auto it =  st.lower_bound(3);
    cout << (*it) << endl;
    return 0;
}