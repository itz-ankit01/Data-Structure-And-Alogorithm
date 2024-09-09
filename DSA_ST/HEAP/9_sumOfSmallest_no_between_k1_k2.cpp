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

int kthSmallest(vi &v, int k){
    priority_queue<int> maxh;
    for(int i=0; i<v.size(); i++){
        maxh.push(v[i]);
        if(maxh.size() > k) maxh.pop();
    }
    return maxh.top();
}

int main() {
    fastio();
    int n, k1, k2;
    cin >> n >> k1 >> k2;
    vi v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    int f = kthSmallest(v, k1);
    int s = kthSmallest(v, k2);
    cout << f << endl; 
    cout << s << endl; 
    int sum = 0;
    for(int i=0; i<n; i++){
        if((v[i] > f)&(v[i] < s)) sum += v[i];
    }
    cout << sum << endl;
    return 0;
}