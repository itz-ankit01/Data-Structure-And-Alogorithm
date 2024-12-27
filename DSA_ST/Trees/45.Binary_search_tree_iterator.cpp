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

class BSTIterator {
    private: stack<TreeNode*> st;
public:
    BSTIterator(TreeNode* root) {
        pushAll(root);
    }
    
    int next() {
        TreeNode* tmp = st.top();
        st.pop();
        pushAll(tmp -> right);
        return tmp->val;
    }
    
    bool hasNext() {
        return !st.empty();
    }

    private: void pushAll(TreeNode* node){
        while(node != nullptr) {
            st.push(node);
            node = node -> left;
        }
    }
};
