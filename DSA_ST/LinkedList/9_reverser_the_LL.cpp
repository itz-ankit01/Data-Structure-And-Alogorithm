
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

//-------------------------- stack --------------------

class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {

        if (!head || !head->next)
            return head;
        stack<int> st;
        ListNode *temp = head;
        while (temp != nullptr)
        {
            st.push(temp->val);
            temp = temp->next;
        }

        temp = head;
        while (temp != nullptr)
        {
            temp->val = st.top();
            st.pop();
            temp = temp->next;
        }
        return head;
    }
};

// ------------------------------ swap link -----------------------
class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {
        ListNode *curr = head;
        ListNode *prev = nullptr;
        while (curr != nullptr)
        {
            ListNode *next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
};

// ------------------- recursively -------------------------------

class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {
        if (!head || !head->next)
            return head;

        ListNode *newHead = reverseList(head->next);
        ListNode *front = head->next;
        front->next = head;
        head->next = nullptr;

        return newHead;
    }
};