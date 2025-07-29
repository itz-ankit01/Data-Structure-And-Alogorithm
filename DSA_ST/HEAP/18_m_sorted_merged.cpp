#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int data) {
        val = data;
        next = nullptr;
    }
};

class Solution {
    public:
        ListNode* mergeKLists(vector<ListNode*>& lists) {
            priority_queue<int, vector<int>, greater<int>> pq;
    
          
            for(int i = 0; i < lists.size(); ++i) {
                ListNode* curr = lists[i];
                while(curr != nullptr) {
                    pq.push(curr->val);
                    curr = curr->next;
                }
            }
    
            if(pq.empty()) return nullptr;  
    
            
            ListNode* head = new ListNode(pq.top());
            pq.pop();
            ListNode* temp = head;
    
            
            while(!pq.empty()) {
                ListNode* newNode = new ListNode(pq.top());
                pq.pop();
                temp->next = newNode;
                temp = temp->next;
            }
    
            return head;
        }
    };
    