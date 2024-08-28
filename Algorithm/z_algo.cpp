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

/**
 *
 * Z algorithm to pattern matching
 *
 * Time complexity - O(n + m)
 * Space complexity - O(n + m)
 *
 * http://www.geeksforgeeks.org/z-algorithm-linear-time-pattern-searching-algorithm/
 * http://www.utdallas.edu/~besp/demo/John2010/z-algorithm.htm
 */

vi z_Algo(string input){
    int n = input.size();
    int left = 0;
    int right = 0;
    vi z(n);
    for(int k=1; k<n; k++){
        if(k > right){
            left = right = k;
            while(right < n && input[right] == input[right-left]){
                right++;
            }
            z[k] = right-left;
            right--;
        }
        else{
            //we are operating inside box
            int k1 = k - left;
            //if value does not stretches till right bound then just copy it.
            if(z[k1] < right - k + 1){
                z[k] = z[k1];
            }
             
            else{
                //otherwise try to see if there are more matches.
                left = k;
                while(right < n && input[right] == input[right-left]){
                right++;
                }
                z[k] = right-left;
                right--;
            }
        }
    }
    return z;

}
int main(){
fastio();
    string text = "aaabcxyzaaaabczaaczabbaaaaaabc";
    vi z = z_Algo(text);
    for(auto it: z){
        cout << it << " ";
    }
  
    return 0;
}