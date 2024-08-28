#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef long long ll;

void print(unordered_map<int, string> &mp){
    cout << "Size " << mp.size() << endl;
    // O(nlog(n))
    for(auto &p : mp){
        cout << p.first << " " << p.second << endl;
    }
 }
int main(){
    // 1. inbuilt implementation
    // 2. Time Complexity
    // 3. valid keys datatype

    // unordered_map <int, string> m;
    // m[1] = "abc";  // O(1)
    // m[5] = "cdc";
    // m[3] = "acd";
    // m[5] = "cda";
    // m.insert({4, "asd"});

    // auto it = m.find(7);   // O(1)
   
    // if( it == m.end()) cout << "No Value" << endl;
    // else cout << (it -> first) << " " << (it -> second) << endl;

    // m.erase(3);
    // print(m);
    // it = m.find(5);
    // m.erase(it);
    // print(m);
    // m.clear();
    // print(m);

// -------------------------------------------------------------------------------------------------------

/*
Given N strings and Q queries In each query you are given a string print frequency of that string
n <= 10^6;
|S| <= 100
Q <= 10^6
*/

unordered_map<string, int> m;
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i){
        string s;
        cin >> s;
        m[s]++;
    }
    int q;
    cin >> q;
    while(q--){
        string str;
        cin >> str;
        cout << m[str] << endl;
    }
    return 0;
}