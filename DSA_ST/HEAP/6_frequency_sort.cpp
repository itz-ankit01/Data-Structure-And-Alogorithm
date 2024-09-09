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
    int n;
    cin >> n;
    vi v(n);
    map<int, int> mp;
    for(int i=0; i<n; i++) {
        cin >> v[i];
        mp[v[i]]++;
    }
    priority_queue<pi> maxh;
    for(auto it : mp){
        maxh.push({it.second, it.first});
    }

    while(maxh.size() > 0){
        int k = maxh.top().first;
        int e = maxh.top().second;
        while(k--){
            cout << e << " ";
        }
        maxh.pop();
    }

    return 0;
}

/**
 * arr[] = [1 1 1 3 2 2 4]
 * output = [1 1 1 2 2 3 4]
 */