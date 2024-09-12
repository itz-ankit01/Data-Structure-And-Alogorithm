#include <bits/stdc++.h>
using namespace std;
#define pb push_back
typedef vector<int> vi;

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
    Node(int val){
        data = val;
        left = right = nullptr;
    }
};

vector<int> preOrderTraversal(Node* root){
    vi preorder;
    if(root == nullptr) return preorder;
    stack<Node*> st;
    st.push(root);
    while(!st.empty()){
        root = st.top();
        st.pop();
        preorder.pb(root -> data);

        if(root->right != nullptr) st.push(root->right);
        if(root->left != nullptr) st.push(root->left);
    }
    return preorder;
}

/**
 * * Preorder: [root left right ]
 * * Using Stack
 * * first we push node->right,
 * * then we push node -> left
 * * TC = O(N)
 * * SC = O(N)
 */