/*
Given a linked list of 'N' nodes, where each node has an integer value that can be 0, 1, or 2. You need to sort the linked list in non-decreasing order and the return the head of the sorted list.

Example:
Given linked list is 1 -> 0 -> 2 -> 1 -> 2. 
The sorted list for the given linked list will be 0 -> 1 -> 1 -> 2 -> 2.
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
 
Node* sortList(Node *head){
    // Write your code here.

    Node* zeroHead = new Node(-1);
    Node* oneHead = new Node(-1);
    Node* twoHead = new Node(-1);
    Node* temp = head;
    Node* zero = zeroHead;
    Node* one = oneHead;
    Node* two = twoHead;

    while(temp != NULL){
        if(temp->data == 0) {
            zero->next = temp;
            zero = zero->next;
        }
        else if(temp->data == 1){
            one->next = temp;
            one = one->next;
        }
        else{
            two-> next = temp;
            two = two->next;
        }
        temp = temp->next;
    }
    zero->next = oneHead->next ? oneHead->next : twoHead->next;
    one->next = twoHead->next;
    two->next = NULL;
    Node* newHead = zeroHead->next;
    delete oneHead;
    delete twoHead;
    delete zeroHead;
    return newHead;
    
}

// prob : https://www.codingninjas.com/studio/problems/sort-linked-list-of-0s-1s-2s_1071937?leftPanelTabValue=PROBLEM
