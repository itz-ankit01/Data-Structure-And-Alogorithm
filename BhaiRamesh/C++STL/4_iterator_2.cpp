#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef vector<pair<int, int> > vp;
typedef long long ll;

 
int main(){

    
    // vi v = {2,3,4,5,6};
    // for(int i=0; i < v.size(); ++i){
    //     cout << v[i] << " ";
    // }
    // cout << endl;
    // vector<int> ::iterator it;
 
    // for(it = v.begin(); it != v.end(); ++it){
    //     cout << (*it) << " ";
    // } 
    // cout << endl;

// -----------------------------------------------------------------------------------------

    // Range based loop 
    // for(int value : v){
    //     value++;
    // }
    // cout << "First " << endl;
    // for(int value : v){           //  get a copy from vector
    //     cout << value << " ";
    // }
    // cout << endl;


    // for(int &value : v){
    //     value++;
    // }
    // cout << "Second " << endl;
    // for(int &value : v){
    //    cout << value << " ";
    // }
    // cout << endl;


// -----------------------------VECTOR PAIR ---------------------------------------------------------

    // vp v_p = {{1,2}, {2,3}};
    // for(pi value : v_p){
    //     cout << value.first << " " << value.second << endl;
    // }

//------------------------------AUTO KEYWORD-------------------------------------------

    auto a = 1;
    cout << a << endl;

    vi v = {2,3,4,5,6};
    for(int i=0; i < v.size(); ++i){
        cout << v[i] << " ";
    }
    cout << endl;
   
 
    for(auto it = v.begin(); it != v.end(); ++it){
        cout << (*it) << " ";
    } 
    cout << endl;

    for(auto a: v){
        cout << a << " ";
    }
    return 0;
}