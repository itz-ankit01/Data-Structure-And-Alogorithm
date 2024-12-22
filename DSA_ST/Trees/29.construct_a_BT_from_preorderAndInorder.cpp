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

Node* buildTree(vector<int>&inorder, vector<int>&preorder) {
    map<int, int> mp;
    for(int i=0; i<inorder.size(); i++) {
        mp[inorder[i]] = i;
    }
    Node* root = buildTreeNode(preorder, 0, preorder.size()-1, inorder, 0, inorder.size()-1, mp);
    return root;
}

Node* buildTreeNode(vector<int>&preorder, int prestart, int preEnd, vector<int> &inorder, int instart, int inEnd, map<int, int> &mp) {

    if(prestart > preEnd || instart > inEnd) return NULL;
    
    Node* root = new Node(preorder[prestart]);
    int inRoot = mp[root->data];
    int numsLeft = inRoot - instart;

    root -> left = buildTreeNode(preorder, prestart + 1, prestart + numsLeft, inorder, instart, inRoot - 1, mp);
    root->right = buildTreeNode(preorder, prestart + numsLeft + 1, preEnd, inorder, inRoot + 1, inEnd, mp);

    return root;
}

int main() {

    return 0;
}