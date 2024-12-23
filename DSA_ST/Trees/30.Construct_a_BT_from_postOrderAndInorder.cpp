#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
typedef vector<int> vi;

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
    Node (int val) {
        data = val;
        left = right = nullptr;
    }
};

Node* builTree(vector<int> &inorder, vector<int> &postorder) {
    if(inorder.size() != postorder.size()) return NULL;

    map<int, int> mp;

    for(int i = 0; i < inorder.size(); i++) {
        mp[inorder[i]] = i;
    }

    Node* root = builTreeNode(inorder, 0, inorder.size()-1, postorder, 0, postorder.size()-1, mp);

    return root;
}

Node* builTreeNode(vector<int> &inorder, int inStart, int inEnd, vector<int> &postorder, int postStart, int postEnd, map<int, int> &mp) {
    // base case
    if(inStart > inEnd || postEnd < postStart) return nullptr;

    Node* root = new Node(postorder[postEnd]);

    int inRoot = mp[root->data];

    int numsLeft = inRoot - inStart;

    root -> left = builTreeNode(inorder, inStart, inRoot - 1, postorder, postStart, postStart + numsLeft - 1, mp);

    root -> right = builTreeNode(inorder, inRoot + 1, inEnd, postorder, postStart + numsLeft, postEnd - 1, mp);

    return root;
}

int main() {

    return 0;
}