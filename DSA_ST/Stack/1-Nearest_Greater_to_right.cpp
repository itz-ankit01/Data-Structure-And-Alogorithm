/**
 * arr : 1 3 2 4
 * o/p : 3 4 4 -1 
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    stack<int> s;
    vector<int> ans;
    for(int i=n-1; i>=0; i--){
        if(s.empty()){
            ans.push_back(-1);
        }
        else if(s.size() > 0 && s.top() > v[i]){
            ans.push_back(s.top());
        }
        else if(s.size() > 0 && s.top() <= v[i]){
            while(s.size() > 0 && s.top() <= v[i]){
                s.pop();
            }
            if(s.size() == 0){
                ans.push_back(-1);
            }
            else {
                ans.push_back(s.top());
            }
        }
        s.push(v[i]);
    }

    reverse(ans.begin(), ans.end());
    for(auto it: ans){
        cout << it << " ";
    }
    cout << endl;
    return 0;
}