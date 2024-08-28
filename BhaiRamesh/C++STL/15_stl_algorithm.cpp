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
    auto min = min_element(v.begin(), v.end());        // minimum element of vector return iterator
    cout << *min << endl;

    auto max = max_element(v.begin()+2, v.end());        // maximum element of vector return iterator
    cout << *max << endl;

    int sum = accumulate(v.begin(), v.end(), 0);         // initial sum = 0 here
    cout << sum << endl;

    int cnt = count(v.begin(), v.end(), 1);
    cout << cnt << endl;

    auto it = find(v.begin(), v.end(), 1);
    if(it == v.end()){
        cout << "NOT FOUND" << endl;
    }
    else cout << (*it) << endl;

    reverse(v.begin(), v.end());
    for(auto it: v){
        cout << it << endl;
    }


    string str = "nbcakjncamn hka";
    reverse(str.begin()+1, str.end());
    cout << str << endl;
    return 0;
}