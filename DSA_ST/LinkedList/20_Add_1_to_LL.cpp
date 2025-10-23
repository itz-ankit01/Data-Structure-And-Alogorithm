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

class Solution {
    Node* reverseLL(Node* head) {
        Node* prev = nullptr;
        Node* curr = head;
        
        while(curr) {
            Node* nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        return prev;
    }
    
  public:
    Node* addOne(Node* head) {
        
        if(!head) return new Node(1);
        
        head = reverseLL(head);
        
        Node* curr = head;
        int x = 1;
        while(x && curr) {
            x += curr->data;
            curr->data = x%10;
            x/=10;
            
            if (!curr->next && x) {
                curr->next = new Node(x);
                x = 0;
                break;
            }
            curr = curr ->next;
        }
        head = reverseLL(head);
       return head;
    }
};

// ------------------------- recursive --------------------

class Solution {
    
    int addoneToEnd(Node* node) {
        if(!node) return 1;
        
        int carry = addoneToEnd(node->next);
        int sum = node->data + carry;
        node->data = sum % 10;
        return sum/10;
    }
    
  public:
    Node* addOne(Node* head) {
        
        if(!head) return new Node(1);
        
        int carry = addoneToEnd(head);
        if(carry) {
            Node* newNode = new Node(1);
            newNode->next = head;
            head = newNode;
        }
       return head;
    }
};