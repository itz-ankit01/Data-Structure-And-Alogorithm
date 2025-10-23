#include <bits/stdc++.h>
using namespace std;


struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

Node* deleteAllOccurances(Node* head, int x) {
    Node dummy(0);           // temporary node
    dummy.next = head;
    Node* prev = &dummy;
    Node* curr = head;

    while (curr) {
        if (curr->data == x) {
            prev->next = curr->next;
            Node* to_del = curr;
            curr = curr->next;
            delete to_del;
        } else {
            prev = curr;
            curr = curr->next;
        }
    }

    return dummy.next;
}
