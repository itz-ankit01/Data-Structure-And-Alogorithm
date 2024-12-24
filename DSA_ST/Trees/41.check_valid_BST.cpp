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
    bool isValidHelper(TreeNode* root, long minVal, long maxVal) {
        if(root == nullptr) return true;

        if(root -> val >= maxVal || root -> val <= minVal) return false;

        return isValidHelper(root -> left, minVal, root->val) &&
            isValidHelper(root -> right, root->val, maxVal);
     }
public:
    bool isValidBST(TreeNode* root) {
        return isValidHelper(root, LLONG_MIN, LLONG_MAX);
    }
};

int main() {

    return 0;
}