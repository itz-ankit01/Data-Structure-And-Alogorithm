#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
typedef vector<int> vi;

struct Node {
    int val;
    struct Node* left;
    struct Node* right;

    Node (int val) {
        val = val;
        left = right = nullptr;
    }
};



class Solution {
  public:
    int minValue(Node* root) {
        // Code here
        if(!root) return 0;
        while(root -> left!= nullptr) {
            root = root -> left;
        }
        return root->val;
    }
};