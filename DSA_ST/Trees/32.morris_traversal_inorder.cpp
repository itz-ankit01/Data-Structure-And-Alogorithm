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

vector<int> morrisTraversal(TreeNode* root) {
    vector<int> inorder;
    TreeNode* curr = root;
    while(curr != NULL) {
        if(curr ->left == NULL) {
            inorder.push_back(curr->val);
            curr = curr -> right;
        }
        else {
            TreeNode* prev = curr -> left;
            while(prev->right && prev->right != curr) {
                prev = prev->right;
            }
            if(prev -> right == NULL) {
                prev->right = curr;
                curr = curr -> left;
            } else {
                prev->right = NULL;
                inorder.push_back(curr->val);
                curr = curr->right;
            }
        }
    }
    return inorder;
}

int main() {

    return 0;
}