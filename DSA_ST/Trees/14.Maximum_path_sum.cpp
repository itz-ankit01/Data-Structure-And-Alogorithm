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

int maxi = INT_MIN;

int MaxPathSum(Node* root, int maxi){
    if(root == nullptr) return 0;

    int lh = max(0, MaxPathSum(root->left, maxi));  // for -ve max(0, ...) just ignore that path
    int rh = max(0, MaxPathSum(root->right, maxi));

    maxi = max(maxi, lh + rh + root->data);

    return root->data + max(lh , rh);
}


/**
 * * Longest path between 2 nodes
 * * path does not need to be pass via root
 */
