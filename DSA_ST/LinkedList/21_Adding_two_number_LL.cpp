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
        ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
            int cnt1 = 0, cnt2 = 0;
            ListNode* t1 = l1;
            ListNode* t2 = l2;
    
            while(t1 || t2) {
                if(t1){
                    cnt1++;
                    t1 = t1->next;
                }
                if(t2) {
                    cnt2++;
                    t2 = t2->next;
                }
            }
            int diff = cnt1-cnt2;
            if(diff < 0) {
                t1 = l2;
                t2 = l1;
            }
            else {
                t1 = l1;
                t2 = l2;
            }
            int x = 0;
            ListNode* temp = t1;
            while(t1 || t2) {
                if(t2){
                    x = t1->val + t2->val + x;
                    t1->val = x%10;
                    t2 = t2->next;
                }
                else {
                    x = t1->val  + x;
                    t1->val = x%10;
                  
                }
                x = x/10;
    
                if(x && !t1->next) {
                    ListNode* newNode = new ListNode(1);
                    t1->next = newNode;
                    return temp;
                }
    
                t1 = t1->next;
            }
    
            return temp;
    
            
        }
    };