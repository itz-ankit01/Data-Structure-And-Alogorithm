#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef long long ll;

// print in sorted order
void print(set<string> &s){
    for(auto it : s){
        cout << it << endl;
    }
}


void print(unordered_set<string> &s){
    for(auto it : s){
        cout << it << endl;
    }
}

void print_multi(multiset<string> &s){
    for(auto it : s){
        cout << it << endl;
    }
}
int main(){
//----------------------------------- SET ----------------------------------

// set<string> s;
// s.insert("abc");        // O(log(n))
// s.insert("cjda");
// s.insert("jcal");

// auto it = s.find("abc");
// if(it != s.end()) {
//     s.erase(it);
// }

// s.erase("abc");
// print(s);


/*
Given N strings, print unique strings in lexographical order
N <= 10^5
|S| = 100000
*/


    // set<string> s;
    // int n;
    // cin >> n;
    // for(int i=0; i<n; i++){
    //     string str;
    //     cin >> str;
    //     s.insert(str);
    // }

    // for(auto it : s){
    //     cout <<it << endl;
    // } 



// ---------------------------------- UNORDERED_SET ------------------------------

    // unordered_set<string> s;
    // s.insert("abc");        // O(1)
    // s.insert("abc");
    // s.insert("cjda");
    // s.insert("jcal");

    // // auto it = s.find("abc");
    // // if(it != s.end()) {
    // //     s.erase(it);
    // // }
    // print(s);

/* Given N strings and Q queries. In each query you are given a string print yes if string is present else print No
N <= 10^6
|S| <= 100
Q <= 10^6
*/
/*
    unordered_set<string> s;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        string str;
        cin >> str;
        s.insert(str);
    }

    int q;
    cin >> q;
    while(q--){
        string str;
        cin >> str;
        if(s.find(str) == s.end()) cout << "No";
        else cout << "Yes" << endl;
    } */

// ------------------------------------------ MULTISET ----------------------------

    // multiset<string> s;        // duplicate input allowed in the multiset
    // s.insert("abc");        // O(log(n))
    // s.insert("cjda");
    // s.insert("jcal");
    // s.insert("abc");

    // // auto it = s.find("abc");
    // // if(it != s.end()) {
    // //     s.erase(it);        // ek hin jo first wala hoga wo delete hoga
    // // }
    // s.erase("abc");   // saari value delete kar dega
    // print_multi(s);
    

// monk and candy
/*
1
5 3
2 4 7 1 2
14 */



    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        multiset<ll> bags;
        for(int i=0; i<n; i++){
            ll candy_ct;
            cin >> candy_ct;
            bags.insert(candy_ct);
        }
        ll total_candy = 0;
        for(int i=0; i<k; i++){
            auto last_it = (--bags.end());
            ll candy_ct = *last_it;
            total_candy += candy_ct;
            bags.erase(last_it);
            bags.insert(candy_ct/2);
        }
        cout << total_candy << endl;

    }


    return 0;
}