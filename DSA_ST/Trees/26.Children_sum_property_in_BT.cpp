#include <bits/stdc++.h>
using namespace std;
#define ll long long
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

void changeBinaryTree(Node* root){
    if(!root) return;

    int child = 0;
    if(root -> left) child += root -> left -> data; 
    if(root -> right) child += root -> right -> data; 

    if(child >= root -> data) root -> data = child;
    else {
        if(root -> left) root->left->data = root->data;
        if(root -> right) root->right->data = root->data; 
    }

    changeBinaryTree(root -> left);
    changeBinaryTree(root -> right);

    int tot = 0;
    if(root -> left) tot += root->left->data;
    if(root -> right) tot += root->right->data;

    if(root -> left or root -> right) root -> data = tot;
}
