#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
typedef vector<int> vi;

int main() {
    ll n, k;
    cin >> n >> k;
    vi v(n);
    ll m = INT_MIN;
    ll idx = 0;
    for(int i=0; i<n; i++){
        if(i<k-1){
            if(m < v[i]){
                m = v[i];
                idx = i;
            }
        }
        cin >> v[i];
    }
    deque<int> q;
    

    vector<int> ans;
    for(int i = 0, j = 0; i<n; i++){
        if(q.empty()){
            q.push_back(v[i]);
        } else if(q.back() >= v[i]){
            q.push_back(v[i]);
        }
        else{
            while( q.back() < v[i]){
                q.pop_back();
                if(q.empty()) break;
            }
            q.push_back(v[i]);
        }

        if(i-j+1 == k){
            ans.push_back(q.front());
            if(v[j] == q.front()){
                q.pop_front();
            }
            j++;
        }
    }
    cout << ans.size() << endl;
    for(auto it: ans){
        cout << it << " ";
    }

    return 0;
}