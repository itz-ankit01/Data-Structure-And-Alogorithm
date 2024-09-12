#include <bits/stdc++.h>
using namespace std;
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

vector<vi> levelOrder(Node* root){
    vector<vi> ans;
    if(root == nullptr) return ans;
    queue<Node*> q;

    q.push(root);
    while(!q.empty()){
        int size = q.size();
        vi level;

        for(int i=0; i<size; i++){
            Node* node = q.front();
            q.pop();
            if(node->left != nullptr) q.push(node->left);
            if(node->right != nullptr) q.push(node->right);
            level.pb(node->data);
        }
        ans.pb(level);
    }
    return ans;
}
