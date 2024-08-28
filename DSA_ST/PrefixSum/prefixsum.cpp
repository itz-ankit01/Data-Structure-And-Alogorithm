/*
Given aray a of N integers . Given Q queries and in each query given L and R print sum of array elements from index L to R(L, R included)

constrints
1 <= N <= 10^5
1 <= a[i] <= 10^9
1 <= Q <= 10^5
1 <= L, R <= N;
 */

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
 
// int main(){
// fastio();
// int n;
// cin >> n;
// vi v(n);
// floop(i,1,n+1)cin>>v[i];
// int q;
// cin >>q;
// while(q--){
//     int l,r;
//     cin >> l >> r;
//     ll s=0;
//     floop(i,l,r+1){
//         s+=v[i];
//     }
//     cout << s << endl;
// }

//     return 0;
// }

// 6
// 3 6 2 8 9 2
// 4
// 2 3
// 8
// 4 6
// 19
// 1 5
// 28
// 3 6
// 21


// -----------------------------------------------

int main(){
fastio();
int n;
cin >> n;
vi v(n+2,0);
vi prefixSum(n+2,0);
floop(i,1,n+3){
    cin>>v[i];
    prefixSum[i] = v[i] + prefixSum[i-1];
}
// floop(i,0,n+1)cout<<prefixSum[i]<<" ";

int q;
cin >>q;
while(q--){
    int l,r;
    cin >> l >> r;
    
    cout << prefixSum[r]-prefixSum[l-1] << endl;
}
}