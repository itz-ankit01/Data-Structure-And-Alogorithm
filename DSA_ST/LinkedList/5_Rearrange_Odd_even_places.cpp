/*
You are given the 'head' of a singly linked list. Your task is to group all the nodes with odd indices together followed by the nodes with even indices, and return the reordered list’s head.

The first node is considered odd, and the second node is even, and so on.

Note:
Keep in mind that reordering is to be done according to the indexes and not the node values.
Also, ensure that the relative order inside both the even and odd groups should remain as it was in the input.


Example:
Input: 'head' -> 1 -> 3 -> 5 -> 7

Output: 'head' -> 1 -> 5 -> 3 -> 7

Explanation:
The nodes with odd indices (1, 5) are grouped together, followed by the nodes with even indices (3, 7).

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
 
// problem : https://www.codingninjas.com/studio/problems/rearrange-odd-and-even-places_920379?leftPanelTabValue=PROBLEM

Node* oddEvenList(Node* head)
{
	// Write your code here.
    Node* odd = head;
    Node* even = head->next;
    Node* evenHead = head->next;
    if(head==NULL || head->next==NULL) return head;
    while(even != NULL && even->next != NULL){
        odd-> next = odd->next->next;
        even->next = even->next->next;
        odd = odd->next;
        even = even->next;
    }
    odd->next = evenHead;
    return head;
}

