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

/**
 * * If it forms a mirror image of itself around the center or not?
 * * [Root left right] | [Root Right left]
 */

bool isSymmetricBT(Node* root){
    return (root == nullptr || isSymmetricHelper(root->left, root->right));
}

bool isSymmetricHelper(Node* left, Node* right){
    if(left == nullptr || right == nullptr) return left == right;

    if(left->data != right->data) return false;
    
    return isSymmetricHelper(left->left, right->right) 
            &&
           isSymmetricHelper(left->right, right->left);
}



int main() {

    return 0;
}