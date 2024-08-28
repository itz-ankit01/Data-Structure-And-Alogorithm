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
const int N = 1e3+10;
int arr[N][N];
int prefixSum[N][N];


// int main(){
// fastio();
// int n;
// cin>>n;
// for(int i=1; i<=n; i++){
//     for(int j=1; j<=n; j++){
//         cin >> arr[i][j];
//     }
// }
// int q ;
// cin>>q;
// while(q--){
//     int a, b, c, d;
//     cin >> a >> b >> c >> d;
//     ll s = 0;
//     for(int i=a; i<=c; i++){
//         for(int j=b; j<=d; j++){
//             s += arr[i][j];
//         }
//     }
//     cout << s << endl;
// }

// // O(n^2) + O(Q*N^2) = 10^5 * 10^6 = 10^11
//     return 0;
// }




/// --------------------------------


int main(){
fastio();
int n;
cin>>n;
for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
        cin >> arr[i][j];
    }
}
int q ;
cin>>q;
for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
        prefixSum[i][j] = arr[i][j] + prefixSum[i][j-1] + prefixSum[i-1][j] - prefixSum[i-1][j-1];
    }
}
while(q--){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    ll s = prefixSum[c][d] - prefixSum[a-1][d] - prefixSum[c][b-1] + prefixSum[a-1][b-1];
    cout << s << endl;
    
}

// O(n^2) + O(Q*N^2) = 10^5 * 10^6 = 10^11
    return 0;
}