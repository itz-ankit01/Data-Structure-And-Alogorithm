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
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root) return nullptr;
        int curr = root -> val;
        if(curr < p->val && curr < q->val) {
            return lowestCommonAncestor(root -> right, p, q);
        }
        else if(curr > p->val && curr > q->val) {
            return lowestCommonAncestor(root -> left, p, q);
        }
        return root;
    }
};