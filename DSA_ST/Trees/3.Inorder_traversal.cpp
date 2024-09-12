/**
 * * INORDER TRAVERSAL (LEFT ROOT RIGHT)
 */

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

void preorder(Node* node){
    if(node == nullptr) return;
    preorder(node->left);
    cout << (node->data);
    preorder(node->right);
}

/**
 * * Time Complexity: O(N)
 * * Space Complexity: O(N)
 */