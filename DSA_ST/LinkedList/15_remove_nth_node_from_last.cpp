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
    public:
        ListNode* removeNthFromEnd(ListNode* head, int n) {
            if(!head) return nullptr;
            if(!head->next && n==1) return nullptr; 
            
            int cnt = 0;
            ListNode* temp = head;
            while(temp) {
                cnt++;
                temp = temp->next;
            }
    
            cnt = cnt - n + 1;
            int k = 1;
            ListNode* prev = nullptr;
    
            if(cnt==1) {
                ListNode* temp = head;
                head = head->next;
                delete temp;
                return head;
            }
    
            temp = head;
            while(temp) {
                if(cnt == k) {
                    if(temp->next) prev->next = temp->next;
                    else prev->next = nullptr;
                    delete temp;
                    return head;
                }
                prev = temp;
                temp = temp -> next;
                k++;
            }
            return head;
        }
    };

// ------------------ in single traversal ------------------------


class Solution {
    public:
        ListNode* removeNthFromEnd(ListNode* head, int n) {
            ListNode* dummy = new ListNode(0);
            dummy->next = head;
            ListNode* fast = dummy;
            ListNode* slow = dummy;
    
            for(int i=0; i<n+1; i++) {
                if(fast) fast = fast->next;
                else {
                    ListNode* newHead = dummy->next;
                    delete dummy;
                    return newHead;
                }
            }
    
            while(fast != nullptr) {
                slow = slow -> next;
                fast = fast->next;
            }
    
            // fast -> end then slow -> just before the node that has to be deleted
            ListNode* nodeTobedeleted = slow->next;
            slow->next = slow->next->next;
            delete nodeTobedeleted;
            ListNode* newHead = dummy->next;
            delete dummy;
    
            return newHead;
        }
    };
    
    