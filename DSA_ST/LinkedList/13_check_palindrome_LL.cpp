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
        bool isPalindrome(ListNode* head) {
            vector<int> v;
            ListNode* temp = head;
            while(temp != nullptr) {
                v.push_back(temp->val);
                temp = temp -> next;
            }
            int s = 0, e = v.size()-1;
            while(s < e) {
                if(v[s] != v[e]) return false;
                s++;
                e--;
            }
            return true;
        }
    };

// ------------- optimal ----------------------

ListNode* reverseLL(ListNode* head) {
    ListNode* curr = head;
    ListNode* prev = NULL;

    while(curr) {
        ListNode* nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
    }
    return prev;
}

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(!head || !head->next) return true;

        ListNode* slow = head;
        ListNode* fast = head;

        while(fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* newHead = reverseLL(slow->next);
        ListNode* firstHalf = head;
        ListNode* secondHalf = newHead;

        while(secondHalf) {
            if(firstHalf->val != secondHalf->val) {
                reverseLL(newHead);
                return false;
            }

            firstHalf = firstHalf->next;
            secondHalf = secondHalf->next;
        }

        reverseLL(newHead);
        return true;
    }
};