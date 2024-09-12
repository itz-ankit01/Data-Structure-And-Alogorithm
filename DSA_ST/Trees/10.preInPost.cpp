#include <bits/stdc++.h>
using namespace std;
#define pb push_back
typedef vector<int> vi;


struct Node {
    int data;
    struct Node* left;
    struct Node* right;
    Node(int val){
        data = val;
        left = right = nullptr;
    }
};

vector<int> preInPostTraversal(Node* root){
    vi pre, in, post;
    stack<pair<Node*, int> > st;
    st.push({root, 1});
    if(root == nullptr) return;

    while(!st.empty()) {
        auto it = st.top();
        st.pop();

        /**
         * * PreOrder
         * * num = 1 
         * * num++
         * * look for left side
         */
        if(it.second == 1){
            pre.pb(it.first->data);
            it.second++;
            if(it.first->left != nullptr){
                st.push({it.first->left, 1});
            }
        }


        /**
         * * InOrder
         * * num = 2 
         * * num++
         * * look for right side
         */
        if(it.second == 2){
            in.pb(it.first->data);
            it.second++;
            if(it.first->right != nullptr){
                st.push({it.first->right, 1});
            }
        }

        /**
         * * PostOrder
         * * num = 3 
         */

        else {
            post.pb(it.first->data);
        }

    }
}

