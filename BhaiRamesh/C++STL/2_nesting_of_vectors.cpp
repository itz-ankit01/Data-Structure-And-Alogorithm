#include<bits/stdc++.h>
using namespace std;

void printVec(vector<pair<int, int> > &v){
    cout << "Size: " << v.size() << endl;
    for(int i=0; i<v.size(); ++i){
        cout << v[i].first << " " << v[i].second << endl;
    }
    cout << endl;
}


void printVec2(vector<int> &v){
    cout << "Size: " << v.size() << endl;
    for(int i = 0; i < v.size(); ++i){
        cout << v[i] << " ";
    }
    cout << endl;
}
int main(){
/*
    vector<pair<int, int> > v;
    printVec(v);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }
    printVec(v);
*/

// --------------------------------------------------------------------------------------

/*
    int N;
    cin >> N;
    vector<int> v[N];          // vectors of array
    for(int i=0; i<N; ++i){
        int n;
        cin >> n;
        for(int j=0; j<n; ++j){
            int x;
            cin >> x;
            v[i].push_back(x);
        }
    }
    for(int i=0; i<N; ++i){
        printVec2(v[i]);
    }
    cout << v[0][1];
   */ 

// -------------------------------------- DECLARATION OF VECTOR OF VECTORS ----------------------------------

    int N;
    cin >> N;
    vector<vector<int> > v;         
    for(int i=0; i<N; ++i){
        int n;
        cin >> n;
        vector<int> temp;
        for(int j=0; j<n; ++j){
            int x;
            cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    v[0].push_back(10);
    v.push_back(vector<int> ());
    for(int i=0; i<v.size(); ++i){
        printVec2(v[i]);
    }
    cout << v[0][1];

    
    return 0;
}