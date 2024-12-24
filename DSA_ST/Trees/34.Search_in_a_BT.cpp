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
    TreeNode* searchRoot(TreeNode* root, int val) {
        while(root != nullptr && root -> val != val) {
            root = root->val > val ? root->left : root->right;
        }
        return root;
    }
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* res = searchRoot(root, val);
        return res;
    }
};

int main() {

    return 0;
}