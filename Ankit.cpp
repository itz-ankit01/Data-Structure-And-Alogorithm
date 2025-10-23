#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node (int val) {
        data = val;
        next = nullptr;
    }

    Node (int val, Node* nxt) {
        data = val;
        next = nxt;
    }
};

int main() {
        
    Node* x = new Node(9);
    cout << x << endl;
    cout << x-> data << endl;
    cout << &x << endl;
    return 0;
}