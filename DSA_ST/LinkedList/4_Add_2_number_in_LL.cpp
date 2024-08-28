/*
Problem statement
You are given two non-negative numbers 'num1' and 'num2' represented in the form of linked lists.

The digits in the linked lists are stored in reverse order, i.e. starting from least significant digit (LSD) to the most significant digit (MSD), and each of their nodes contains a single digit.

Calculate the sum of the two numbers and return the head of the sum list.

Example :
Input:
'num1' : 1 -> 2 -> 3 -> NULL
'num2' : 4 -> 5 -> 6 -> NULL

Output: 5 -> 7 -> 9 -> NULL

Explanation: 'num1' represents the number 321 and 'num2' represents 654. Their sum is 975.
*/

// code

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
 


Node *addTwoNumbers(Node *num1, Node *num2)
{
    // Write your code here.
    Node* dummyNode = new Node(-1);
    Node* curr = dummyNode;
    Node* t1 = num1;
    Node* t2 = num2;
    int carry = 0;
    while(t1!=NULL || t2!=NULL){
        int sum = carry;
        if(t1) sum += t1->data;
        if(t2) sum += t2-> data;
        Node* newNode = new Node(sum%10);
        carry = sum/10;
        curr -> next = newNode;
        curr = curr->next;
        if(t1)t1=t1->next;
        if(t2)t2=t2->next;
    }
    if(carry){
        Node* newNode = new Node(carry);
        curr->next = newNode;
    }
    return dummyNode->next;
}

int main(){
    return 0;
}

// prob : https://www.codingninjas.com/studio/problems/add-two-numbers_1170520?leftPanelTabValue=PROBLEM