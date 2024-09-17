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

vector<vector<int>> zigzagLevelOrderTraversal(Node* root){
    vector<vector<int>> result;
    if(root == nullptr) return result;

    queue <Node*> queueNode;
    queueNode.push(root);
    bool leftToright = true;

    while(!queueNode.empty()){
        int size = queueNode.size();
        vector<int> level(size);
        for(int i=0; i<size; i++){
            Node* temp = queueNode.front();
            queueNode.pop();

            // find postion to fill node's value
            int index = (leftToright) ? i : (size - i - 1); // pushing from front or back
            level[index] =  temp -> data; 
            if(temp->left){
                queueNode.push(temp -> left);
            } 
            if(temp -> right){
                queueNode.push(temp -> right);
            }
        }
        leftToright = !leftToright;
        result.push_back(level);
    } 
    return result;
}
