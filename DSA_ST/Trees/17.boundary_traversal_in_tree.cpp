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

bool isLeaf(Node* root){
    return !root->left && !root->right;
}

void addLeftBoundary(Node* root, vector<int> &res){
    Node* curr = root -> left;
    while(curr){
        if(!isLeaf(curr)) res.push_back(curr -> data);
        if(curr->left) curr = curr -> left;
        else curr = curr -> right;
    }
}

void addLeaves(Node* root, vector<int> &res){
    if(isLeaf(root)){
        res.push_back(root -> data);
        return;
    } 
    if(root->left) addLeaves(root->left, res);
    if(root->right) addLeaves(root->right, res);
}

void addRightBoundary(Node* root, vector<int> &res){
    Node* curr = root -> right;
    vector<int> temp;

    while(curr) {
        if(!isLeaf(curr)){
            temp.push_back(curr->data);
        }
        if(curr->right) curr = curr -> right;
        else curr = curr -> left;
    }
    reverse(temp.begin(), temp.end()); // Right boundary should be stored in reverse
    res.insert(res.end(), temp.begin(), temp.end());
}

vector<int> boundaryTraversal(Node* root){
    vector<int> res;
    if(root == nullptr) return res;
    if(!isLeaf(root)) res.push(root);
    addLeftBoundary(root, res);
    addLeaves(root, res);
    addRightBoundary(root, res);
    return res;
}
