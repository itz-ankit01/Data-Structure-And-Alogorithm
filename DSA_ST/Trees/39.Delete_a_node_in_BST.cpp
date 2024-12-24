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

    TreeNode* findLastRight(TreeNode* node) {
        while(node -> right != nullptr) {
            node = node -> right;
        }
        return node;
    }
    TreeNode* helper(TreeNode* node) {
        if(node -> left == nullptr) return node -> right;
        else if(node -> right == nullptr) return node -> left;

        TreeNode* rightChild = node -> right;
        TreeNode* lastRight = findLastRight(node -> left);
        lastRight -> right = rightChild;
        return node -> left;
    }
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root) return nullptr;
        if(root -> val == key) {
            return helper (root) ;
        }
        TreeNode* dummy = root;
        while(root != nullptr) {
            if(root -> val > key) {
                if(root -> left != nullptr && root -> left -> val == key) {
                    root -> left = helper(root -> left);
                    break;
                }
                else {
                    root = root -> left;
                }
            }
            else if(root -> val < key) {
                if(root -> right != nullptr && root -> right -> val == key) {
                    root -> right = helper(root -> right);
                    break;
                }
                else {
                    root = root -> right;
                }
            }
        }
        return dummy;
    }
};