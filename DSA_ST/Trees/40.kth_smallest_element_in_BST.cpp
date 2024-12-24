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



class Solution {
    void inorder(TreeNode* root, vector<int> &v) {
        if(!root ) return ;
        inorder(root -> left, v);
        v.push_back(root->val);
        inorder(root->right, v);
    }
public:
    int kthSmallest(TreeNode* root, int k) {
        vector<int> v;
        inorder(root, v);
        return v[k-1];
    }
};