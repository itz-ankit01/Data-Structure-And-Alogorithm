#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
typedef vector<int> vi;

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

void markParent(unordered_map<Node*, Node*> &parentTrack, Node* root) {
    if(!root) return;
    queue<Node*> q;
    q.push(root);

    while(!q.empty()) {
        Node* curr = q.front();
        q.pop();
        if(curr->left) {
            parentTrack[curr->left] = curr;
            q.push(curr->left);
        }
        if(curr->right) {
            parentTrack[curr->right] = curr;
            q.push(curr->right);
        }
    }
}

vector<int> distanceAtK(Node* root, int k, Node* target) {
    unordered_map<Node*, Node*> parentTrack;
    markParent(parentTrack, root);

    unordered_map<Node*, bool> visited;
    queue<Node*> q;
    visited[target] = true;

    int dis = 0;
    while(!q.empty()) {
        int size = q.size();
        if(dis == k) break;;
        dis++;

        for(int i=0; i<size; i++) {
            Node* curr = q.front();
            q.pop();
            if(curr->left && !visited[curr->left]) {
                q.push(curr->left);
                visited[curr->left] = true;
            }
            if(curr->right && !visited[curr->right]) {
                q.push(curr->right);
                visited[curr->right] = true;
            } 
            if(parentTrack[curr] && !visited[parentTrack[curr]]) {
                q.push(parentTrack[curr]);
                visited[parentTrack[curr]] = true;
            }
        }
    }
    vector<int> ans;
    while(!q.empty()) {
        ans.push_back(q.front()->data);
        q.pop();
    }
    return ans;
}

int main() {
    
    return 0;
}