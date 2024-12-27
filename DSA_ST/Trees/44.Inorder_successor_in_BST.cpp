#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
typedef vector<int> vi;

struct TreeNode {
    int val;
    struct TreeNode* left;
    struct TreeNode* right;

    TreeNode (int val) {
        val = val;
        left = right = nullptr;
    }
};

TreeNode* inorderSuccessor(TreeNode* root, TreeNode* p) {
    TreeNode* succ = nullptr;
    while(root != nullptr) {
        if(p -> val > root -> val) {
            root = root -> right;
        }
        else if(p -> val < root -> val) {
            succ = root;
            root = root -> left;
        }
    }
    return succ;
}

/**
 * * TC -> O(H)
 * * SC -> O(1)
 */