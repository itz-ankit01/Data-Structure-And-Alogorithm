#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
typedef vector<int> vi;

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
    Node(int val){
        data = val;
        left = right = nullptr;
    }
};

bool getPath(Node* root, int x, vector<int> &ans){
    if(!root) return false;

    ans.pb(root->data);
    if(root->data == x) return true;

    if(getPath(root->left, x, ans) || getPath(root->right, x, ans)){
        return true;
    }
    ans.pop_back();
    return false;

}

vector<int> RootToNodePath(Node* root, int x){
    vector<int> ans;
    getPath(root, x, ans);
    return ans;
}

int main() {

    return 0;
}