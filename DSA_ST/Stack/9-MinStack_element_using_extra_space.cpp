#include <bits/stdc++.h>
using namespace std;

stack<int> s;
stack<int> ss;

void push(int a){
    s.push(a);
    if(ss.size() == 0 || ss.top() >= a){
        ss.push(a);
    }

    return;
}

int pop(){
    if(s.size() == 0) return -1;
    int ans = s.top();
    s.pop();
    if(ss.top() == ans){
        ss.pop();
    }
    return ans;
}

int getMin(){
    if(ss.size() == 0){
        return -1;
    }
    return ss.top();
}
int main()
{
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    return 0;
}