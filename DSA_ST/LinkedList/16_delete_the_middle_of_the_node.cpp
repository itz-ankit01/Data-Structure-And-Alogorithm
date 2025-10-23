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
        ListNode* deleteMiddle(ListNode* head) {
    
            if(!head || !head->next) return nullptr;
            
            ListNode* dummy = new ListNode(0);
            dummy->next = head;
            ListNode* slow = dummy;
            ListNode* fast = dummy;
    
            while(fast->next && fast->next->next) {
                slow = slow->next;
                fast = fast->next->next;
            }
    
            ListNode* nodeToRemove = slow->next;
            slow ->next = slow->next->next;
            delete nodeToRemove;
    
            head = dummy->next;
            delete dummy;
    
            return head;
        }
    };