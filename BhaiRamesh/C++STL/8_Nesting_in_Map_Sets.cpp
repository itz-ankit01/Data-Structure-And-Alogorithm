#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef long long ll;
 
int main(){
// map<pair<int, int>, int> m;
// pi p1, p2;
// p1 = {1, 2};
// p2 = {2, 3};
// cout << (p1 < p2) << endl;

// ------------------------------------------------------------------

// map<set<int>, int> m;
// set<int> s1 = {5, 2, 3};
// set<int> s2 = {7, 1};
// cout << (s1 < s2) << endl;  // comparison will be sorted format


// ---------------------------------Nesting-------------------

// map<pair<string, string>, vector<int> > m;
// int n;
// cin >> n;

// // input
// for(int i=0; i<n; i++){
//     string fn, ln;
//     int ct;
//     cin >> fn >> ln >> ct;
//     for(int j=0; j<ct; ++j){
//         int x;
//         cin >> x;
//         m[{fn, ln}].push_back(x);
//     }
// }

// // output
// for (auto &pr: m){
//     auto &full_name = pr.first;
//     auto &list = pr.second;
//     cout << full_name.first << " " << full_name.second << endl;
//     cout << list.size() << endl;
//     for(auto & element: list){
//         cout << element <<" ";
//     }
//     cout << endl;
// }


// -------------------------------------- Question -----------------------------

// map<int, multiset<string> >marks_map;

// int n;
// cin >> n;
// for(int i=0; i<n; i++){
//     string name;
//     int marks;
//     cin >> name >> marks;
//     marks_map[marks].insert(name);
// }

// auto cur_it = --marks_map.end();
// while(true){
//     auto &students = (*cur_it).second;
//     auto marks = (*cur_it).first;
//     for(auto &student: students){
//         cout << student << " " << marks << endl;
//     }
//     if(cur_it == marks_map.begin()) break;
//     else cur_it--;
// }


// -----------------------------or--------------------------------

map<int, multiset<string> >marks_map;

int n;
cin >> n;
for(int i=0; i<n; i++){
    string name;
    int marks;
    cin >> name >> marks;
    marks_map[-1*marks].insert(name);
}

for(auto & marks_students_pr: marks_map){
    auto &students = marks_students_pr.second;
    auto marks = marks_students_pr.first;
    for(auto &student: students){
        cout << student << " " << -1*marks << endl;
    }
}
    return 0;
}