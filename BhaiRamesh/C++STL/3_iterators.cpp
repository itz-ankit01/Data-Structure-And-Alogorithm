#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef long long ll;
 
int main(){


    vi v = {2,3,4,5,6};
    // for(int i=0; i<v.size(); ++i){
    //     cout << v[i] << " ";
    // }
    // cout << endl;

// ------------------------ Iterator -------------------------------------------

    // vector<int> ::iterator it = v.begin();
    // cout << (*(it+1)) << endl;

    // // printing vector using iterator
    
    
    // for(it = v.begin(); it != v.end(); ++it){
    //     cout << (*it) << endl;
    // } 

// ---------------------------- PAIR USING ITERATOR ----------------------------------

    vector<pair<int, int> > v_p = {{1,2}, {2, 3}, {3, 4}};
    vector<pair<int, int> > ::iterator it;

    // for(it = v_p.begin(); it != v_p.end(); it++){
    //     cout << (*it).first << " " << (*it).second  << endl;
    // }   

// OR  (*it).first <=> (it -> first)

    // for(it = v_p.begin(); it != v_p.end(); it++){
    //     cout << (it -> first) << " " << (it -> second) << endl;
    // }

    return 0;
}