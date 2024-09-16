#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
    Node(int val){
        data = val;
        left = right = nullptr;
    }
};

int checkBalanced(Node* root){
    if(root == nullptr) return 0;
    
    int l = checkBalanced(root->left);
    int r = checkBalanced(root->right);

    if(l == -1 || r == -1) return -1;
    if(abs(l-r) > 1) return -1;

    return 1 + max(l, r);
}

/**
 * condition for Balanced Binary Tree
 * For Every node abs(height(left) - height(right)) <= 1
 */
