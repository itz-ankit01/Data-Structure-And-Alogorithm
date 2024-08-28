#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    stack<int> st;
    vector<int> ans;
    for(int i = n-1; i >= 0; i--){
        if(st.size() == 0){
            ans.push_back(-1);
        } else if(st.size() > 0 && st.top() < v[i]){
            ans.push_back(st.top());
        } else if(st.size() > 0 && st.top() >= v[i]){
            while(st.size() > 0 && st.top() >= v[i]){
                st.pop();
            }
            if(st.size() == 0){
                ans.push_back(-1);
            } else {
                ans.push_back(st.top());
            }
        }
        st.push(v[i]);
    }
    reverse(ans.begin(), ans.end());
    for(auto it: ans){
        cout << it << " ";
    }
    cout << endl;
    return 0;
}