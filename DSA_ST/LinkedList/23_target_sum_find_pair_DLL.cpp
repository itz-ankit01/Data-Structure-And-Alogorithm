#include <bits/stdc++.h>
using namespace std;


struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

class Solution {
    public:
      vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target) {
          // code here
          unordered_map<int, int> mp;
          Node* temp = head;
          vector<pair<int,int>> v;
          while(temp) {
              if(mp.find(target - temp->data) != mp.end()) {
                  v.push_back({target-temp->data, temp->data });
              }
              mp[temp->data]++;
              temp = temp->next;
          }
          sort(v.begin(), v.end());
          
          return v;
          
      }
  };