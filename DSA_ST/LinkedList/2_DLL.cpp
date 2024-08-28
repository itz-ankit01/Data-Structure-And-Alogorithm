#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* back;

    public:
    Node(int data1, Node* next1, Node* back1){
        data = data1;
        next = next1;
        back = back1;
    }

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

Node* convertArr2DLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i=1; i<arr.size(); ++i){
        Node* temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

Node* deleteHead(Node* head){
    if(head == NULL || head->next == NULL){
        return NULL;
    }
    Node* prev = head;
    head = head->next;
    head->back = nullptr;
    prev->next = nullptr;
    free(prev);
    return head;
}

Node* deleteTail(Node* head){
    if(head == NULL || head->next == NULL){
        return NULL;
    }
    Node* tail = head;
    while(tail->next!=NULL){
        tail = tail->next;
    }
    Node* newTail = tail->back;
    newTail->next = nullptr;
    tail->back = nullptr;
    free(tail);
    return head;
}

Node* removeKthElement(Node* head, int k){
    if(head == NULL){
        return NULL;
    }
    int cnt = 0;
    Node* kNode = head;
    while(kNode!=NULL){
        cnt++;
        if(cnt == k) break;
        kNode = kNode->next;
    }
    Node* prev = kNode->back;
    Node* front = kNode->next;
    if(prev == NULL && front == NULL) return NULL;
    else if(prev == NULL) return deleteHead(head);
    else if(front == NULL) return deleteTail(head);

    prev->next = front;
    front->back = prev;
    kNode->next = nullptr;
    kNode->back = nullptr;
    return head;
}

void deleteNode(Node* temp){
    Node* prev = temp->back;
    Node* front = temp->next;

    if(front == NULL){
        prev->next = nullptr;
        temp->back = nullptr;
        free(temp);
        return;
    }

    prev->next = front;
    front->back = prev;
    temp->back = nullptr;
    temp->next = nullptr;
    free(temp);

}

Node* insertBeforeHead(Node* head, int val){
    Node* newHead = new Node(val, head, nullptr);
    head->back = newHead;
    head = newHead;
    return head;
}

Node* insertBeforeTail(Node* head, int val){
    if(head->next == NULL) return insertBeforeHead(head, val);
    Node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    Node* prev = temp->back;
    Node* newNode = new Node(val, temp, prev);
    prev->next = newNode;
    temp->back = newNode;
    return head;
}

Node* insertBeforeKthElement(Node* head, int val, int k){
    if(k == 1) return insertBeforeHead(head, val);
    int cnt = 0;
    Node* temp = head;
    while(temp!=NULL){
       cnt++;
       if(cnt == k) break;
       temp = temp->next; 
    }
    Node* prev = temp->back;
    Node* newNode = new Node(val, temp, prev);
    prev->next = newNode;
    temp->back = newNode;
    return head;

}

void insertBeforeNode(Node* node, int val){
    Node* prev = node->back;
    Node* newNode = new Node(val, node, prev);
    prev->next = newNode;
    node->back = newNode;

}

void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main(){
    vector<int> arr = {1,2,3,4,5,6};
    Node* head = convertArr2DLL(arr);

    // head = deleteHead(head);
    // print(head);

    // head = deleteTail(head);
    // print(head);

    // head = removeKthElement(head, 5);
    // print(head);

    // deleteNode(head->next->next);
    // print(head);

    // head = insertAtHead(head, 10);
    // print(head);

    // head = insertBeforeTail(head, 10);
    // print(head);

    // head = insertBeforeKthElement(head, 25, 3);
    // print(head);

    insertBeforeNode(head->next, 11);
    print(head);
    return 0;
}