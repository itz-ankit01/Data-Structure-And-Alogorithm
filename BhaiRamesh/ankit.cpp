#include<bits/stdc++.h>
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
using namespace std;
 
ll int M=1e9+7;
vector <ll int> seive;
ll binpow(ll a, ll b) {
    ll ans = 1;
    while (b > 0) {
        if (b & 1)
            ans = ans * a;
            ans%=M;
        a = a * a;
        a%=M;
        b >>= 1;
    }
    return ans;
}
 
ll int fact(int n)
{
    if (n <= 1)
        return 1;
    return n*fact(n-1);
}
 
ll int npr(ll int n,ll int r)
{
    r=min(r,(n-r));
    ll int a=1;
    for(ll int i=0;i<r;i++){
        a*=(n-i);
    }
    for(ll int i=1;i<r;i++){
        a/=(i+1);
    }
    return a;
}
 
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if(n%2==0)   return false;
    for (int i = 3; i <= sqrt(n); i+=2)
        if (n % i == 0)
            return false;
 
    return true;
}
void SieveOfEratosthenes(int n)
{
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
}
int main() {
    fastio();
    ll int i,j,k,c,a,b,d,l,t=1,q,o,e,n,y,z,x,x1,y1,x2,y2,r;
    cin>>t;
    while(t--){
        ll int ans=0;
        string s,s1,s2;
        y=1;z=100000000000;x=0;r=0;o=1;e=2;
        char g,ch;
}
    return 0;
}