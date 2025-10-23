
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int val;
    Node *next;
    Node() : val(0), next(nullptr) {}
    Node(int x) : val(x), next(nullptr) {}
    Node(int x, Node *next) : val(x), next(next) {}
};

class Solution {
    public:
      int lengthOfLoop(Node *head) {
          // code here
          Node* temp = head;
          int cnt = 1;
          int prev = 0;
          unordered_map<Node*, int> mp;
          while(temp != nullptr) {
              if(mp.find(temp) != mp.end()) {
                  break;
              }
              mp[temp] = cnt;
              prev = cnt;
              cnt++;
              temp = temp -> next;
          }
          if(!temp) return 0;
          return abs(mp[temp] - prev) + 1;
      }
  };
// ------------------- slow and fast ------------------


class Solution {
    public:
      int lengthOfLoop(Node *head) {
          // code here
          Node* slow = head;
          Node* fast = head;
          while(fast && fast-> next) {
              slow = slow -> next;
              fast = fast-> next -> next;
              if(slow == fast) {
                  int cnt = 0;
                  slow = slow->next;
                  while(slow != fast) {
                      cnt++;
                      slow = slow -> next;
                  }
                  return cnt +1 ;
              }
          }
          return 0;
      }
  };