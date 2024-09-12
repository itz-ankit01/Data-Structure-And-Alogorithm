#include <bits/stdc++.h>
using namespace std;
#define pb push_back
typedef vector<int> vi;

/**
 * ! using 2 stack
 */

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
    Node(int val){
        data = val;
        left = right = nullptr;
    }
};

vector<int> postOrderTraversal(Node* root){
    vi postorder;
    if(root == nullptr) return postorder;
    stack<Node*> st1, st2;
    st1.push(root);
    while(!st1.empty()){
        root = st1.top();
        st1.pop();
        st2.push(root);

        if(root->left != nullptr) st1.push(root->left);
        if(root->right != nullptr) st1.push(root->right);
    }
    while(!st2.empty()){
        postorder.push_back(st2.top()->data);
        st2.pop();
    }
    return postorder;
}

/**
 * * Postorder: [ left  right root]
 * * Using 2 Stack
 * * TC = O(N)
 * * SC = O(2N)
 */