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
    int n, k, x;
    cin >> n >> k >> x;

    vi v(n);

    for (int i=0; i<n; i++){
        cin >> v[i];
    }
    priority_queue<pair<int, int>> maxh;

    for(int i=0; i<n; i++){
        maxh.push({abs(v[i] - x), v[i]});
        if(maxh.size() > k){
            maxh.pop();
        }
    }
    while(maxh.size() > 0){
        cout << maxh.top().second << " ";
        maxh.pop();
    }
    cout << endl;
    
    return 0;
}

/**
 * arr[] = [5 6 7 8 9]
 * k = 3
 * x = 7 (close to x)
 */