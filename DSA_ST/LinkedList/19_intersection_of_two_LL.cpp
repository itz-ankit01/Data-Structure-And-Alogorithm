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
        ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
            unordered_map<ListNode*, int> mp;
    
            ListNode* temp = headA;
            while(temp) {
                mp[temp] = 1;
                temp = temp -> next;
            }
            temp = headB;
            while(temp) {
                if(mp.find(temp) != mp.end()) {
                    return temp;
                }
                temp = temp -> next;
            }
            return NULL;
        }
    };


// ------------------ by reducing the length -------------------------

class Solution {
    public:
        ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
            int lenA = 0;
            int lenB = 0;
            ListNode* tmp1 = headA;
            ListNode* tmp2 = headB;
    
            while(tmp1 || tmp2) {
                if(tmp1) {
                    lenA++;
                    tmp1 = tmp1->next;
                }
                if(tmp2) {
                    lenB++;
                    tmp2 = tmp2->next;
                }
            }
            int diff = lenA - lenB;
            ListNode* temp;
            ListNode* small;
            if(diff < 0) {
                temp = headB;
                small = headA;
            }
            else {
                temp = headA;
                small = headB;
            }
    
            for(int i=1; i<=abs(diff) ; i++) temp = temp->next;
    
            while(temp && small) {
                if(temp == small) {
                    return temp;
                }
                temp = temp->next;
                small = small->next;
            }
            return NULL;
        }
    };
    