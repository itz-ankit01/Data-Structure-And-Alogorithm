#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef long long ll;
 
int main(){

// ------------------------------------ Stack -------------------------

// stack<int> s;
// s.push(2);
// s.push(3);
// s.push(4);
// s.push(5);

// while(!s.empty()){
//     cout << s.top() << endl;
//     s.pop();
// }

// ------------------------------Queue ------------------------------------------

queue<string> q;
q.push("abc");
q.push("bcd");
q.push("cde");
q.push("def");
q.push("efg");

while(!q.empty()){
    cout << q.front() << endl;
    q.pop();
}
    return 0;
}