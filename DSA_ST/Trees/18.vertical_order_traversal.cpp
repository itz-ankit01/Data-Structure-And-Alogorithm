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
vector<vector<int>> verticalOrderTraversal(Node* root) {
    /*  Map to store nodes according to vertical and level
    * * map<vertical, map<level, node>>> nodes
    */
    map<int, map<int, multiset<int>>> nodes;

    // Queue to store nodes along with their vertical and level information
    queue<pair<Node*, pair<int, int>>> q;
    q.push({root, {0, 0}});

    while (!q.empty()) {
        auto it = q.front();
        q.pop();
        
        Node* node = it.first;   // Extract the node
        int v = it.second.first; // Extract the vertical value
        int l = it.second.second; // Extract the level value

        nodes[v][l].insert(node->data);

        if (node->left) {
            q.push({node->left, {v - 1, l + 1}});
        }

        if (node->right) {
            q.push({node->right, {v + 1, l + 1}});
        }
    }

    // Prepare the final answer vector
    vector<vector<int>> ans;
    for (auto& p : nodes) {
        vector<int> col;
        for (auto& q : p.second) {
            col.insert(col.end(), q.second.begin(), q.second.end());
        }
        ans.push_back(col);
    }

    return ans;
}