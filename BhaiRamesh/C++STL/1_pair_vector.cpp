#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v){
    cout << "Size " << v.size() << endl;
    for(int i=0; i<v.size(); ++i){
        cout << v[i] << " ";
    }
    v.push_back(2);
    cout << endl;
}

int main(){

    // PAIR
    /*
    pair<int,string> p;
    // p = make_pair(2, "abc");
    p = {2, "abc"};

    pair<int,string> &p1 = p;        // pass by reference
    p1.first = 3;
    // cout << p.first << " " << p.second << endl;

    int a[] = {1,2,3};
    int b[] = {2,3,4};
    pair<int, int> p_array[3];
    p_array[0] = {1,2};
    p_array[1] = {2,3};
    p_array[2] = {3,4};

    swap(p_array[0], p_array[2]);
    for(int i=0; i<3; ++i){
        cout << p_array[i].first << " " << p_array[i].second << endl;
    }

    */
// ----------------------------------------------------------------------------------------------------

/*
    vector<int> v;
    int n;
    cin >> n;
    for(int i=0; i<n; ++i){
        int x;
        cin >> x;
        printVec(v);
        v.push_back(x);    // O(1)
    }

    printVec(v);    
*/

// -------------------------------------------------------------------------------------------------------------

    vector<int> v(10, 3);
    v.push_back(7);
    v.push_back(6);

    vector<int> v2 = v; // O(n) for copying element
    // printVec(v);

    v2.push_back(5);    

    printVec(v2);
    printVec(v);
    printVec(v);


    return 0;
}