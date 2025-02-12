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

void RightViewOfBT(Node* root, int level, vector<int> &ans) {
    if (!root) return;
    if (level == ans.size()) ans.pb(root->data);
    
    RightViewOfBT(root->right, level + 1, ans);
    RightViewOfBT(root->left, level + 1, ans);
}

void LeftViewOfBT(Node* root, int level, vector<int> &ans) {
    if (!root) return;
    if (level == ans.size()) ans.pb(root->data);

    LeftViewOfBT(root->left, level + 1, ans);
    LeftViewOfBT(root->right, level + 1, ans);
}

vector<int> getRightView(Node* root) {
    vector<int> ans;
    RightViewOfBT(root, 0, ans);
    return ans;
}

vector<int> getLeftView(Node* root) {
    vector<int> ans;
    LeftViewOfBT(root, 0, ans);
    return ans;
}

/**
 * * Here we use the concept of Reverse Preorder
 * * i.e, [Root Right left]
 * * TC -> O(N)
 * * SC -> O(N)
 */
