class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<int, vector<int>, greater<int>> pq;

        // Collect all node values in the min-heap
        for(int i = 0; i < lists.size(); ++i) {
            ListNode* curr = lists[i];
            while(curr != nullptr) {
                pq.push(curr->val);
                curr = curr->next;
            }
        }

        if(pq.empty()) return nullptr;  // ✅ prevent runtime error

        // Create head of result list
        ListNode* head = new ListNode(pq.top());
        pq.pop();
        ListNode* temp = head;

        // Build rest of the list
        while(!pq.empty()) {
            ListNode* newNode = new ListNode(pq.top());
            pq.pop();
            temp->next = newNode;
            temp = temp->next;
        }

        return head;
    }
};
