#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

bool isPalindrome(string &s, int start, int end){
    while(start < end){
        if(s[start++] != s[end--]){
            return false;
        }
    }
    return true;
}
void Partition(int index, string &s, vector<vector<string>>&ans,  vector<string>&path){
    // Base Case
    if(index == s.size()){
        ans.push_back(path);
    }

    for(int i = index; i < s.size(); ++i){
        if(isPalindrome(s, index, i)){
            path.push_back(s.substr(index, i - index + 1));
            Partition(i+1, s, ans, path);
            path.pop_back();
        }
    }
}
int main(){
    string s;
    cin >> s;

    vector<vector<string>> ans;
    vector<string>path;

    Partition(0, s, ans, path);

    for(int i=0; i<ans.size(); ++i){
        for(int j=0; j<ans[i].size(); ++j){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}