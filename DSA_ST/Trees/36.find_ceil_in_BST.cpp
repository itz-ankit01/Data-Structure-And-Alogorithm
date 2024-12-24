#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
typedef vector<int> vi;

struct Node {
    int data;
    struct Node* left;
    struct Node* right;

    Node (int val) {
        data = val;
        left = right = nullptr;
    }
};

int findCeil(Node* root, int input) {
    if (root == NULL) return -1;

    // Your code here
    int ceil = -1;
    
    while(root) {
        if(root->data == input) {
            ceil = root -> data;
            return ceil;
        }
        
        if(input > root -> data) root = root -> right;
        else {
            ceil = root -> data;
            root = root -> left;
        }
    }
    return ceil;
}