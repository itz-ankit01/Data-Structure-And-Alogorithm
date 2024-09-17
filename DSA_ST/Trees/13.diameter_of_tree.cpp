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
int findDiameter(Node* root, int maxi){
    if(root == nullptr) return 0;

    int lh = findDiameter(root->left, maxi);
    int rh = findDiameter(root->right, maxi);

    maxi = max(maxi, lh + rh);

    return 1 + max(lh , rh);
}


/**
 * * Longest path between 2 nodes
 * * path does not need to be pass via root
 */
