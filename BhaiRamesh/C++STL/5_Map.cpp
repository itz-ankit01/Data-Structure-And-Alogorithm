#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef long long ll;
 
 void print(map<int, string> &mp){
    cout << "Size " << mp.size() << endl;

    // O(nlog(n))
    for(auto &p : mp){
        cout << p.first << " " << p.second << endl;
    }
 }
int main(){
    
    map<int, string> mp;
    mp[1] = "abc";  // O(log(n))
    mp[5] = "ddc";
    mp[3] = "acd";
    mp[5] = "cda";
    mp.insert({4, "dsd"});

    map<int, string>:: iterator it;
    for(it = mp.begin(); it != mp.end(); it++){
        cout << (it -> first) << " " << (it -> second) << endl;
    }

    print(mp);

// ----------------------------------------------------------------------------------------------------

    // auto it = mp.find(7);   // O(log(n))
   
    // if( it == mp.end()) cout << "No Value" << endl;
    // else cout << (it -> first) << " " << (it -> second) << endl;

    // mp.erase(3);
    // print(mp);
    // it = mp.find(5);
    // mp.erase(it);
    // print(mp);
    // mp.clear();
    // print(mp);
    
// -------------------------------------------------------------------------------------------

    // map<string, string> mp;
    // mp["annc"] = "jcsl";  // s.size() * O(log(n))

    /*
    Given N strings, Print unique strings  in lexographical Order with their frequency
    N = 10^5
    |S| <= 100
    */


   
    // map<string, int> m;
    // int n;
    // cin >> n;
    // for(int i = 0; i < n; ++i){
    //     string s;
    //     cin >> s;
    //     m[s]++;
    // }
    // for(auto &pr : m){
    //     cout << pr.first << " " << pr.second << endl;
    // }
    return 0;
}