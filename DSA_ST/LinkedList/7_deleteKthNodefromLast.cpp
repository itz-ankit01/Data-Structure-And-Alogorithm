/*
You have been given a singly Linked List of 'N' nodes with integer data and an integer 'K'.

Your task is to remove the 'K'th node from the end of the given Linked List and return the head of the modified linked list.

Example:
Input : 1 -> 2 -> 3 -> 4 -> 'NULL'  and  'K' = 2
Output: 1 -> 2 -> 4 -> 'NULL'
Explanation:
After removing the second node from the end, the linked list become 1 -> 2 -> 4 -> 'NULL'.

*/


#include<bits/stdc++.h>
using namespace std;


  class Node {
  public:
       int data;
       Node* next;
       Node() {
           this->data = 0;
           this->next = NULL;
       }
       Node(int data) {
           this->data = data;
           this->next = NULL;
       }
       Node (int data, Node* next) {
           this->data = data;
           this->next = next;
       }
  };
 
Node* removeKthNode(Node* head, int k)
{
    // Write your code here.
    Node* fast = head;
    Node* slow = head;
    for(int i=0; i<k; ++i){
        fast = fast->next;
    }
    if(fast == NULL) return head->next;
    while(fast->next != NULL){
        fast = fast->next;
        slow = slow->next;
    }
    Node* deleteNode = slow->next;
    slow->next = slow-> next->next;
    delete deleteNode;
    return head;

}

// prob: https://www.codingninjas.com/studio/problems/delete-kth-node-from-end_799912?leftPanelTabValue=PROBLEM