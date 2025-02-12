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

ll int binpow(ll int a, ll int b) {
    ll int res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % M;
        a = a * a % M;
        b >>= 1;
    }
    return res;
}

ll int fact(int n) {
    if (n <= 1)
        return 1;
    return n * fact(n - 1);
}

ll int npr(ll int n, ll int r) {
    r = min(r, (n - r));
    ll int a = 1;
    for (ll int i = 0; i < r; i++) {
        a *= (n - i);
    }
    for (ll int i = 1; i < r; i++) {
        a /= (i + 1);
    }
    return a;
}

bool isPrime(int n) {
    if (n <= 1)
        return false;
    if (n % 2 == 0)   return false;
    for (int i = 3; i <= sqrt(n); i += 2)
        if (n % i == 0)
            return false;
    return true;
}

void SieveOfEratosthenes(int n) {
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    for (int p = 2; p <= n; p++)
        if (prime[p])
            seive.pb(p);
int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) {
        
    }
    return 0;
}