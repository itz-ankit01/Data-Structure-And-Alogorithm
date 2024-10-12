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

vector<int> TopViewOfBT(Node* root){
    vector<int> ans;
    if(root == nullptr) return ans;
    /**
     * * map<line, node> mpp;
     */
    map<int, int> mpp;
    queue<pair<Node*, int> > q;
    q.push({root, 0});
    while(!q.empty()){
        auto it = q.front();
        q.pop();
        Node* node = it.first;
        int line = it.second;
        if(mpp.find(line) == mpp.end()) mpp[line] = node->data;
        if(node->left) {
            q.push({node->left, line-1});
        }
        if(node->right){
            q.push({node->right, line+1});
        }
        return ans;
    }

    for(auto &it: mpp){
        ans.pb(it.second);
    }

}

int main() {

    return 0;
}