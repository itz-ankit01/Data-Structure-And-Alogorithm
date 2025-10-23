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
        ListNode* prev = NULL;
        ListNode* curr = head;

        while(curr) {
            ListNode* nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        ListNode* tail = head;
        return {prev, tail};
    }
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        int cnt = 0;
        ListNode* temp = head;
        ListNode* curr = head;
        bool f = false;
        ListNode* prevTail = nullptr;
        ListNode* nxt = nullptr;
        while(temp) {
            cnt++;
            if(cnt == k) {
                nxt = temp->next;
                temp->next = nullptr;
                vector<ListNode*> v = reverseLL(curr);
                curr = nxt;

                ListNode* currhead = v[0];
                ListNode* currtail= v[1] ;
                if(!f) {
                    f = true;
                    head = v[0];
                }

                if (prevTail) prevTail->next = currhead;
                prevTail = currtail;


                cnt = 0;
                temp = nxt;

            }
            else temp = temp->next;
        }
        if(cnt>0) {
            prevTail->next = nxt;
        }
        return head;
    }
};