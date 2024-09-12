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

vector<int> inOrderTraversal(Node* root){
    vi inorder;
    if(root == nullptr) return inorder;
    stack<Node*> st;
    Node* node = root;
    while(true){
        if(node != nullptr){
            st.push(node);
            node = node->left;
        }
        else {
            if(st.empty() == true) break;
            node = st.top();
            st.pop();
            inorder.pb(node->data);
            node = node->right;
        }
    }
    return inorder;
}

/**
 * * Inorder: [ left root right ]
 * * Using Stack
 * * TC = O(N)
 * * SC = O(N)
 */