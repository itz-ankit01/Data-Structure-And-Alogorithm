#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    vector<string> words(N);
    for(int i = 0; i < N; i++){
        cin >> words[i];
    }

    // count all substrings of length >=3
    unordered_map<string,int> freq;
    freq.reserve(100000);
    for(auto &w : words){
        int L = w.size();
        // for every start i
        for(int i = 0; i < L; i++){
            // for every end j such that length >=3
            for(int j = i+3; j <= L; j++){
                // substring w[i..j-1]
                freq[w.substr(i, j-i)]++;
            }
        }
    }

    vector<string> ans;
    ans.reserve(freq.size());
    // pick those with count >= 2
    for(auto &kv : freq){
        if(kv.second >= 2){
            string s = kv.first;
            // try next lexicographic permutation
            string t = s;
            if(next_permutation(t.begin(), t.end())){
                ans.push_back(t);
            } else {
                ans.push_back(s);
            }
        }
    }

    // unique & sort
    sort(ans.begin(), ans.end());
    ans.erase(unique(ans.begin(), ans.end()), ans.end());

    // output
    for(int i = 0; i < (int)ans.size(); i++){
        if(i) cout << ' ';
        cout << ans[i];
    }
    cout << "\n";

    return 0;
}