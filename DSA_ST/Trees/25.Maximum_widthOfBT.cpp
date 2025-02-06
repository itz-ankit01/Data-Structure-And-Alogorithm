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
 * * Width: Number of nodes in a level between any 2 nodes
 * * width = (last - first + 1)
 * * 0-based indexing : (2*i+1), (2*i+2)
 * * 1-based indexing : (2*i), (2*i+1)
 */

int widthOfBT(Node* root) {
    if (!root) return 0;

    int ans = 0;
    queue<pair<Node*, ll>> q;
    q.push({root, 0});

    while (!q.empty()) {
        int size = q.size();
        ll mini = q.front().second;  // Normalize indices to prevent overflow
        ll first = 0, last = 0;
        
        for (int i = 0; i < size; i++) {
            ll cur_id = q.front().second - mini;  // Prevent large values
            Node* node = q.front().first;
            q.pop();

            if (i == 0) first = cur_id;
            if (i == size - 1) last = cur_id;

            if (node->left) q.push({node->left, cur_id * 2 + 1});
            if (node->right) q.push({node->right, cur_id * 2 + 2});
        }
        
        ans = max(ans, (int)(last - first + 1));
    }
    return ans;
}
