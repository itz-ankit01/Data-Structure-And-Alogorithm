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

int maxHeight(Node* root){
    if(root == nullptr) return 0;
    
    int l = maxHeight(root->left);
    int r = maxHeight(root->right);

    return 1 + max(l, r);
}


int main() {
    
    return 0;
}