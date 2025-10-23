#include <bits/stdc++.h>
using namespace std;


struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }

};


class Solution {
    public:
  
      Node *removeDuplicates(struct Node *head) {
          
          if(!head || !head->next) return head;
          // Your code here
          Node* prev = head;
          Node* curr = head->next;
          while(curr) {
              if(prev->data != curr->data) {
                  prev-> next = curr;
                  curr->prev = prev;
                  prev = curr;
              }
              curr = curr->next;
          }
          prev->next = nullptr;
          return head;
      }
  };