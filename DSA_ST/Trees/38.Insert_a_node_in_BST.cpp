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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(!root) return new TreeNode(val);
        TreeNode* curr = root;
        while(true) {
            if(curr -> val > val) {
                if(curr -> left) curr = curr -> left;
                else {
                    curr -> left = new TreeNode(val);
                    break;
                }
            }

            else {
                if(curr -> right) curr = curr -> right;
                else {
                    curr -> right = new TreeNode(val);
                    break;
                }
            }
        }
        return root;
    }
};