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

vector<int> BottomViewOfBT(Node* root){
    vi ans;
    if(root == nullptr) return ans;
    queue<pair<Node*, int>> q;
    map<int, int> mp;
    q.push({root, 0});
    while(!q.empty()){
        auto it = q.front();
        q.pop();
        int line = it.second;
        Node* node = it.first;
        mp[line] = node->data;
        if(node->left) q.push({node->left, line-1});
        if(node->right) q.push({node->right, line+1});
    }

    for(auto &it: mp){
        ans.pb(it.second);
    }
    return ans;
}

