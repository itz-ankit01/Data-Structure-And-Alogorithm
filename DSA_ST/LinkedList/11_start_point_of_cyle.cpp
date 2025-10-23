
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
        ListNode *detectCycle(ListNode *head) {
            unordered_map<ListNode*, int> mp;
            ListNode* temp = head;
    
            while(temp != nullptr) {
                if(mp.find(temp) != mp.end()) {
                    break;
                }
    
                mp[temp] = 1;
                temp = temp -> next;
            }
            return temp;
    
        }
    };


// -------------------- optimal approach ------------------

class Solution {
    public:
        ListNode *detectCycle(ListNode *head) {
            ListNode* slow = head;
            ListNode* fast = head;
    
            while(fast && fast -> next) {
                slow = slow -> next;
                fast = fast -> next -> next;
                if(slow == fast) {
                    ListNode* temp = head;
                    while(slow != temp) {
                        slow = slow->next;
                        temp = temp -> next;
                    }
                    return temp;
                }
            }
            return nullptr;
    
        }
    };

