#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef long long ll;
 
unordered_map<char, int> symbols = {{'(', -1}, {'{', -2}, {'[', -3}, {')', 1}, {'}', 2}, {']', 3}};

string isBalanced(string s){
    stack<char> st;
    for(auto bracket: s){
        if(symbols[bracket] < 0){
            st.push(bracket);
        }
        else{
            if(st.empty()) return "NO";
            char top = st.top();
            st.pop();
            if(symbols[top] + symbols[bracket] != 0){
                return "NO";
            }
        }
    }
    if(st.empty()) return "YES";
    return "NO";
}
int main(){

string str;
cin >> str;

cout << isBalanced(str) << endl;
    return 0;
}