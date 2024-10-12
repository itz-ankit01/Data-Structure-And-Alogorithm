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

Node* LowestCommonAncestor(Node* root, Node* p, Node* q){
    if(root == nullptr || root == p || root == q){
        return root;
    }
    Node* left = LowestCommonAncestor(root->left, p, q);
    Node* right = LowestCommonAncestor(root->right, p, q);

    if(left == nullptr) return right;
    else if(right == nullptr) return left;
    else return root;
}

int main() {

    return 0;
}