#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
 
    vector<ListNode*> reverseLL(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* tmp = head;
        while(curr) {
 
            ListNode* nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        return {prev, tmp};
    }

    int fun(ListNode* head) {

        int cnt = 0;
        
        ListNode* t = head;
        while(t) {
            cnt++;
            t = t->next;
        }
        return cnt;
    }
public:
    ListNode* rotateRight(ListNode* head, int k) {

        int cnt = fun(head);
        if(!head || !head->next || k==0 ) return head;
        k = k%cnt;
           if(k==0) return head;
        
        vector<ListNode*> v = reverseLL(head);
    
        head = v[0];
        ListNode* tail = v[1];

         cnt = 0;
        bool f = true;
        ListNode* newHead = head;
        ListNode* curr = head;
        while(curr) {
            cnt++;
            if(cnt == k) {
                newHead = curr->next;
                curr->next = NULL;
                vector<ListNode*> v = reverseLL(head);
                if(f) {
                    head = v[0];
                    f = false;
                }
                tail = v[1];
                break;
            }
            curr = curr->next;
        } 

        v = reverseLL(newHead);
        tail->next = v[0];
        return head;
    }
};