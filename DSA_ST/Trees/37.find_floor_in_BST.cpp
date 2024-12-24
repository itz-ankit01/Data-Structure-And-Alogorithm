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
class Solution{

public:
    int floor(Node* root, int x) {
        // Code here
        int floor = -1;
        while (root) {
            if(x == root -> data) {
                floor = root -> data;
                return floor;
            }
            
            if(x < root -> data) {
                root = root -> left;
            } else {
                floor = root -> data;
                root = root -> right;
            }
            
        }
        return floor;
    }
};