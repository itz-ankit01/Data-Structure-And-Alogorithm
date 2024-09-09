#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"
#define c1 cout<<"-1\n"
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef stack<int> stki;
typedef double db;
typedef pair<int, int> pi;
typedef vector<long long> vll;
typedef set<int> si;
typedef set<long long> sll;
typedef unordered_map<int, int> ui;
typedef unordered_map<long long, long long> ull;
#define f first
#define s second
#define pb push_back
#define all(v) (v).begin(), (v).end()
#define floop(i, a, b) for (int i = a; i < b; i++)
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

ll int M=1e9+7;
vector <ll int> seive;

int main() {
    fastio();
    int n, k;
    cin >> n >> k;
    vi v(n);
    priority_queue<int, vi, greater<int>> minh;
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    vi t;
    for(int i=0; i<n; i++){
        minh.push(v[i]);
        if(minh.size() > k){
            t.pb(minh.top());
            minh.pop();
        }
    }
    while(minh.size() > 0){
        t.pb(minh.top());
        minh.pop();
    }
    for(auto it : t){
        cout << it << " ";
    }
    cout << endl;

    return 0;
}

/**
 * arr [] = [6, 5, 3, 2, 8, 10, 9]
 * k = 3
 */