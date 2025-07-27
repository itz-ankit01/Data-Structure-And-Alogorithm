#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int key, value;
    Node* next;
    Node* prev;

    Node(int k, int val) {
        key = k;
        value = val;
        next = prev = nullptr;
    }
};

class LRUCache {
    unordered_map<int, Node*> mpp;
    int capacity;
    Node* head;
    Node* tail;

    // Remove a node from DLL
    void deleteNode(Node* node) {
        Node* prevNode = node->prev;
        Node* nextNode = node->next;

        prevNode->next = nextNode;
        nextNode->prev = prevNode;
    }

    // Insert a node right after head (MRU position)
    void insertNode(Node* node) {
        Node* temp = head->next;

        node->next = temp;
        node->prev = head;

        head->next = node;
        temp->prev = node;
    }

public:
    LRUCache(int cap) {
        capacity = cap;

        // Create dummy head and tail
        head = new Node(-1, -1);
        tail = new Node(-1, -1);

        head->next = tail;
        tail->prev = head;
    }

    int get(int key) {
        if (mpp.count(key) == 0) return -1;

        Node* node = mpp[key];
        deleteNode(node);
        insertNode(node); // Move to front as most recently used

        return node->value;
    }

    void put(int key, int value) {
        if (mpp.count(key)) {
            // Key exists: update and move to front
            Node* node = mpp[key];
            node->value = value;
            deleteNode(node);
            insertNode(node);
        } else {
            // Capacity full: remove LRU
            if (mpp.size() == capacity) {
                Node* lru = tail->prev;
                mpp.erase(lru->key);
                deleteNode(lru);
                delete lru;
            }

            Node* newNode = new Node(key, value);
            mpp[key] = newNode;
            insertNode(newNode);
        }
    }
};
