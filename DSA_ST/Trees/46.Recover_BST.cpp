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
    private:
        TreeNode* first;
        TreeNode* prev;
        TreeNode* middle;
        TreeNode* last;

    private: 
        void inorder(TreeNode* root) {
            if(!root) return;
            inorder(root ->left);
            if(prev != NULL && (prev->val > root->val)) {
                // if it's first violation
                if(first == nullptr) {
                    first = prev;
                    middle = root;
                }
                else last = root;
            }
            // mark this node as root
            prev = root;
            inorder(root -> right);

        }
public:
    void recoverTree(TreeNode* root) {
        first = middle = last = nullptr;
        prev = new TreeNode(INT_MIN);
        inorder(root);
        if((first && last)) swap(first->val, last->val);
        else if(first && middle) swap(first->val, middle->val);
    }
};
