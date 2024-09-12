#include <bits/stdc++.h>
using namespace std;
#define pb push_back
typedef vector<int> vi;

/**
 * ! using 1 stack
 */

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
    Node(int val){
        data = val;
        left = right = nullptr;
    }
};

vector<int> postOrderTraversal(Node* root){
    vi postorder;
    if(root == nullptr) return postorder;
    stack<Node*> st;
    Node* curr = root;
    Node* temp;

    while(curr != nullptr && !st.empty()){
        if(curr != nullptr){
            st.push(curr);
            curr = curr -> left;
        }
        else {
            temp = st.top()->right;
            if(temp == nullptr){
                temp = st.top();
                st.pop();
                postorder.pb(temp->data);

                while(!st.empty() && temp == st.top()->right){
                    temp = st.top();
                    st.pop();
                    postorder.pb(temp->data);
                }
            }
            else {
                curr = temp;
            }
        }
    }
    
    
    return postorder;
}

/**
 * * Postorder: [ left  right root]
 * * Using 1 Stack
 * * TC = O(2N)
 * * SC = O(N)
 */