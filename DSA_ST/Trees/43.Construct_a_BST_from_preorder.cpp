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

// 1st method

class Solution {
    TreeNode* formBST(vector<int>& preorder, int ps, int pe, vector<int>& inorder, int is, int ie, map<int, int>&mp) {
        if(ps > pe || is > ie) return nullptr;

        TreeNode* root = new TreeNode(preorder[ps]);
        int inRoot = mp[root->val];
        int numsLeft = inRoot - is;
        root -> left = formBST(preorder, ps+1, ps+numsLeft, inorder, is, inRoot - 1, mp);

        root -> right = formBST(preorder, ps+numsLeft+1, pe, inorder, inRoot + 1, ie, mp);
        return root;
    }
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        if(preorder.size() == 0) return nullptr;
        vector<int> inorder;
        for(auto it: preorder) inorder.push_back(it);
        sort(inorder.begin(), inorder.end());

        map<int, int> mp;
        for(int i=0; i < inorder.size(); i++) {
            mp[inorder[i]] = i;
        }

        return formBST(preorder, 0, preorder.size()-1, inorder, 0, inorder.size()-1, mp);
    }
};

// 2nd method 

class Solution {
   TreeNode* BST(vector<int>& preorder, int &i, int ub) {
        if(preorder.size() == i || preorder[i] > ub) {
            return nullptr;
        }
        TreeNode* root = new TreeNode(preorder[i++]);
        root -> left = BST(preorder, i, root->val);
        root -> right = BST(preorder, i, ub);

        return root;
   }
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int i = 0;
        return BST(preorder, i, INT_MAX);
    }
};