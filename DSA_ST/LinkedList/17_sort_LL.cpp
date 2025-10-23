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
        ListNode* sortList(ListNode* head) {
            multiset<int> st;
            ListNode* temp = head;
            while(temp) {
                st.insert(temp->val);
                temp = temp->next;
            }
    
            temp = head;
            for(auto it: st) {
                temp->val = it;
                temp = temp->next;
            }
            return head;
        }
    };


// --------------------------- mergeSort ------------------------

class Solution {
    ListNode* findMiddle(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head -> next;
        
        while(fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }

    ListNode* merge(ListNode* left, ListNode* right) {
        ListNode* dummy = new ListNode(-1);
        ListNode* temp = dummy;

        while(left && right) {
            if(left->val < right->val) {
                temp->next = left;
                temp = left;
                left = left->next;
            }
            else {
                temp->next = right;
                temp = right;
                right = right->next;
            }
        }
        if(left)temp->next = left;
        else temp->next = right;

        return dummy->next;
    }

    ListNode* mergeSort(ListNode* head) {
        if(!head || !head->next) return head;

        ListNode* middle = findMiddle(head);
        ListNode* leftHead = head;
        ListNode* rightHead = middle->next;
        middle->next = nullptr;

        leftHead = mergeSort(leftHead);
        rightHead = mergeSort(rightHead);
        return merge(leftHead, rightHead);
    }
public:
    ListNode* sortList(ListNode* head) {
        return mergeSort(head);
    }
};

