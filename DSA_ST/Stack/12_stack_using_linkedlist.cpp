#include <bits/stdc++.h>
using namespace std;

struct stackNode {
    int data;
    stackNode* next;
    stackNode(int x) {
        data = x;
        next = nullptr;
    }
};

class Mystack {
    private: 
    stackNode* top;

    public: 
    Mystack() {
        top = nullptr;
    }

    void push(int x) {
        stackNode* newNode = new stackNode(x);
        newNode -> next = top;
        top = newNode;
    }

    int pop() {
        if( top == nullptr ) return -1;
        int x = top -> data;
        stackNode* temp = top;
        top = top -> next;
        delete temp;
        return x;
    }

    int top() {
        if (top == nullptr) return -1;
        return top-> data;
    }

    bool empty() {
        return top == nullptr;
    }
};