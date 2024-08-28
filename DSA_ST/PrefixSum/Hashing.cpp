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
#define s second
#define pb push_back
#define all(v) (v).begin(), (v).end()
#define f(i, a, b) for (int i = a; i < b; i++)
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

/*
Given T testcases and in each test case a number N. Print its factorial for each testcase % M where M = 10^9+7

Constraints
1 <= T <= 10^5
1 <= N <= 10^5
*/

const ll M = 1e9+7;
const int N = 1e5+10;

// int main(){
// fastio();
// int t;
// cin >> t;
// while(t--){
//     int n;
//     cin >> n;
//     ll f = 1;
//     f(i,2,n+1){
//         f = (f*i)%M;
//     }
//     cout << f << endl;
// }
//     return 0;
// }

// ----------------------------------------------------

// ll fact[N];

// int main(){
// fastio();
// int t;
// cin >> t;

// fact[0] = fact[1] = 1;
// f(i, 2, N){
//     fact[i] = ((fact[i-1]%M)*(i))%M;
// }
// while(t--){
//     int n;
//     cin >> n;
//    cout << fact[n] << endl;
   
// }
//     return 0;
// }



// --------------- Hashing ------------------------

/*
Given array a of N integers. given Q queries and in each query a number X, print count of that number in array

constrints
1 <= N <= 10^5
1 <= a[i] <= 10^7
1 <= Q <= 10^5*/


// int main(){
//     int n;
//     cin >> n;
//     int a[n];
//     f(i,0,n)cin>>a[i];
//     int q;
//     cin>>q;
//     while(q--){
//         int x;
//         cin >> x;
//         int ct = 0;
//         f(i,0,n){
//             if(a[i]==x)ct++;
//         }
//         cout << ct << endl;
//     }
    
// }


int main(){
    int hash[N] = {0}; // Initialize all elements of hash array to 0
    int n;
    cin >> n;
    int a[n];
    f(i,0,n){
        cin>>a[i];
    }
    f(i,0,n){
        hash[a[i]]++;
    }
    int q;
    cin>>q;
    while(q--){
        int x;
        cin >> x;
        cout << hash[x] << endl;
    }
    return 0;
}