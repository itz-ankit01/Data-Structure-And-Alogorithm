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

vector<int> RightViewOfBT(Node* root, int level){
    vector<int> ans;
    if(!root) return ans;
    if(level = ans.size()) ans.pb(root->data);

    RightViewOfBT(root->right, level + 1);
    RightViewOfBT(root->left, level + 1);

    return ans;
}

vector<int> LeftViewOfBT(Node* root, int level){
    vector<int> ans;
    if(!root) return ans;
    if(level = ans.size()) ans.pb(root->data);

    LeftViewOfBT(root->left, level + 1);
    LeftViewOfBT(root->right, level + 1);

    return ans;
}

int main() {

    return 0;
}

/**
 * * Here we use the concept of Reverse Preorder
 * * i.e, [Root Right left]
 * * TC -> O(N)
 * * SC -> O(N)
 */
