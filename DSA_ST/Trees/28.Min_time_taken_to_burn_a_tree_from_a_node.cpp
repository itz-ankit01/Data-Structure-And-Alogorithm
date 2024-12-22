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

Node* bfsMarkParent(Node* root, map<Node*, Node*> &parentTrack, int start) {
    queue<Node*> q;
    q.push(root);
    Node* res;

    while(!q.empty()) {
        auto node = q.front();
        q.pop();
        if(node->data == start) res = node;

        if(node->left) {
            parentTrack[node->left] = node;
            q.push(node->left);
        }
        if(node->right) {
            parentTrack[node->right] = node;
            q.push(node->right);
        }
    }
    return res;
}

int findMaxi(map<Node*, Node*> &parentTrack, Node* target) {
    queue<Node*> q;
    map<Node*, int> vis;
    q.push(target);
    vis[target] = 1;
    int maxi = 0;

    while(!q.empty()) {
        int size = q.size();
        int fl = 0;

        for(int i=0; i<size; i++) {
            auto node = q.front();
            q.pop();

            if(node->left && !vis[node->left]) {
                q.push(node->left);
                vis[node->left] = 1;
                fl = 1;
            }
            if(node->right && !vis[node->right]) {
                q.push(node->right);
                vis[node->right] = 1;
                fl = 1;
            }
            if(parentTrack[node] && !vis[parentTrack[node]]) {
                q.push(parentTrack[node]);
                vis[parentTrack[node]] = 1;
                fl = 1;
            }
        }
        if(fl) maxi++;
    }
    return maxi;
}

int timeTakenToBurn (Node* root, int start) {
    map<Node*, Node*> parentTrack;
    Node* target = bfsMarkParent(root, parentTrack, start);

    int maxi = findMaxi(parentTrack, target);

    return maxi;
}

int main() {

    return 0;
}