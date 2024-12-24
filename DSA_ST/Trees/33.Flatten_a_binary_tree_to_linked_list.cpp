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
    TreeNode* prev = nullptr;
public:
    void flatten(TreeNode* root) {
        if(!root) return;
        flatten(root -> right);
        flatten(root -> left);

        root -> right = prev;
        root -> left = nullptr;
        prev = root;
    }
};

// 2nd method

class Solution {
public:
    void flatten(TreeNode* root) {
        stack<TreeNode*> st;
        st.push(root);
        while(!st.empty()) {
            auto it = st.top();
            st.pop();
            if(it->right){
                st.push(it->right);
            }
            if(it->left) {
                st.push(it->left);
            }
            if(!st.empty()){
                it->right = st.top();
                it->left = nullptr;
            }
            it = it -> right;
        }
    }
};


// 3rd method using morris traversal


class Solution {
public:
    void flatten(TreeNode* root) {
        while(root != nullptr) {
            if(root -> left == nullptr) {
                root = root -> right;
            }
            else {
                TreeNode* prev = root -> left;
                while(prev -> right) {
                    prev = prev -> right;
                }
                prev -> right = root -> right;
                root -> right = root -> left;
                root = root -> right;
            }
        }
    }
};
int main() {

    return 0;
}