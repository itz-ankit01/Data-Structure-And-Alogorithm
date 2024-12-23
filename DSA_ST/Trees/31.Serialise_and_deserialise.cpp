#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
typedef vector<int> vi;

struct TreeNode {
    int val;
    struct TreeNode* left;
    struct TreeNode* right;

    TreeNode (int val) {
        val = val;
        left = right = nullptr;
    }
};

class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string s = "";
        if(!root) return s;
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()) {
            auto it = q.front();
            q.pop();
            if(it == NULL) s.append("#,");
            else s.append(to_string(it->val) + ',');
            if(it != nullptr) {
                q.push(it->left);
                q.push(it->right);
            }
        }
        return s;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if(data.size() == 0) return NULL;

        stringstream s(data);       // gives to permission to iterate the string as object
        string str;             // as a iterator
        getline(s, str, ',');

        queue<TreeNode*> q;
        TreeNode* root = new TreeNode(stoi(str));
        q.push(root);

        while(!q.empty()) {
            auto it = q.front();
            q.pop();

            getline(s, str, ',');
            if(str == "#") {
                it -> left = nullptr;
            } else {
                it -> left = new TreeNode(stoi(str));
                q.push(it -> left);
            }

            getline(s, str, ',');
            if(str == "#") {
                it -> right = nullptr;
            } else {
                it -> right = new TreeNode(stoi(str));
                q.push(it -> right);
            }
        }
        return root;
    }
};

int main() {

    return 0;
}