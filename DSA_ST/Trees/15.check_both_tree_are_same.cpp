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

bool isTreeSame(Node* p, Node* q){
    if(p == nullptr || q == nullptr){
        return (p == q);
    }

    return (p->data == q->data) && isTreeSame(p->left, q->left) && isTreeSame(p->right , q->right);
}
