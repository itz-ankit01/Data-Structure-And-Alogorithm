#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef long long ll;
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
 
int main(){
fastio();
int maxN = 10000001;
vi v(maxN, 1);
v[0] = v[1] = 0;
for(int i=2; i*i<=maxN; i++){
    if(v[i]){
        for(int j=i*i; j<=maxN; j+=i){
            v[j] = 0;
        }
    }
}
    return 0;
}