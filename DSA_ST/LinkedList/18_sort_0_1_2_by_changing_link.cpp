#include <bits/stdc++.h>
using namespace std;


class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};

class Solution {
    public:
      Node* segregate(Node* head) {
          
          Node* ZeroHead = new Node(-1);
          Node* OneHead = new Node(-1);
          Node* TwoHead = new Node(-1);
          
          
          Node* zero = ZeroHead;
          Node* one = OneHead;
          Node* two = TwoHead;
          
          Node* temp = head;
          while(temp) {
              if(temp->data == 0) {
                  zero->next = temp;
                  zero = temp;
              }
              else if(temp->data == 1) {
                  one->next = temp;
                  one = temp;
              }
              else {
                  two->next = temp;
                  two = temp;
              }
              temp = temp->next;
          }
          
          zero->next = OneHead->next ? OneHead->next : TwoHead->next;
          
          one->next = TwoHead->next;
          two->next = NULL;
          
          Node* newHead = ZeroHead->next;
          
          delete ZeroHead;
          delete OneHead;
          delete TwoHead;
          
          return newHead;
          
      }
  };