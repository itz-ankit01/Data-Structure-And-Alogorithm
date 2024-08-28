#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef long long ll;
 
vi NGE(vi v){
    vi nge(v.size());
    stack <int> st;
    for(int i=0; i<v.size(); ++i){
        while(!st.empty() && v[i] > v[st.top()]){
            nge[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty()){
        nge[st.top()] = -1;
        st.pop();
    }
    return nge;
}
int main(){
    int n;
    cin >> n;
    vi v(n);
    for(int i=0; i<n; ++i){
        cin >> v[i];
    }
    vi nge = NGE(v);
    for(int i=0; i<n; i++){
        cout << v[i] << " " << (nge[i] == -1 ? -1 : v[nge[i]]) << endl;
    }
    return 0;
}