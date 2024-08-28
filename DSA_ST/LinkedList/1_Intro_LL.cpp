#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};
 

Node* convertArr2LL(vector<int>&arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1; i<arr.size(); ++i){
        Node* temp = new Node(arr[i]);
        mover -> next = temp;
        mover = temp;
    }
    return head;
}

// Lenght of the LL
int lengthOftheLL(Node* head){
    int cnt = 0;
    Node* temp = head;
    while(temp){
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

// Searching in the LL -->> O(n)
int checkPresent(Node* head, int val){
    Node* temp = head;
    while(temp){
        if(temp->data == val){
            return 1;
        }
        temp = temp->next;
    }
    return 0;
}


// Print
void print(Node* head){
    Node* temp = head;
    while(temp){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Deleting Head of the LL
Node* removesHead(Node* head){
    if(head == NULL) return NULL;

    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}

// Deleting the tail of the LL
Node* deleteTail(Node* head){
    if(head == NULL || head->next == NULL) return NULL;

    Node* temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    free(temp->next);
    temp->next = nullptr;

    return head;
}

// Delete element of kth position
Node* deleteKthNode(Node* head, int k){
    if(head == NULL) return head;
    if(k == 1){
        Node* temp = head;
        head = head-> next;
        free(temp);
        return head;
    }
    int cnt = 0;
    Node* temp = head;
    Node* prev = NULL;

    while(temp != NULL){
        cnt++;
        if(cnt == k){
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

// Delete fix element
Node* deleteEl(Node* head, int val){
    if(head == NULL) return head;
    if(head->data == val){
        Node* temp = head;
        head = head-> next;
        free(temp);
        return head;
    }
    
    Node* temp = head;
    Node* prev = NULL;

    while(temp != NULL){
       
        if(temp->data == val){
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

// Inssertion
Node* insertHead(Node* head, int val){
    return new Node (val, head);
}

Node* insertTail(Node* head, int val){
    if(head == NULL) return new Node(val);
    Node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = new Node(val);
    return head;
}

Node* insertAtPosition(Node* head, int val, int k){
    if(head == NULL){
        if(k==1) return new Node(val);
        else return head;
    }
    if(k==1){
        return new Node(val, head);
    }
    Node* temp = head;
    int cnt = 0;
    while(temp != NULL){
        cnt++;
        if(cnt == (k-1)){
            Node* newNode = new Node(val, temp->next);
            temp->next = newNode;
            break;
        }
        temp = temp->next;
    }
    return head;
}

Node* insertBeforeValue(Node* head, int val, int el){
    if(head == NULL){
        return NULL;
    }
    if(head->data == val){
        return new Node(el, head);
    }
    Node* temp = head;
    while(temp->next != NULL){
        if(temp->next->data == val){
            Node* newNode = new Node(el, temp->next);
            temp->next = newNode;
            break;
        }
        temp = temp->next;
    }
    return head;
}
int main(){
    vector<int> arr = {1,6,3,2,66};

// ------------------------- About Address -------------------------------
    // Node* y = new Node(arr[0], nullptr);
    // cout << y << endl;
    // cout << y -> data ;

// ----------------------- Convert Array to LL & Traversal to LL O(n) ------------------------------

    Node* head = convertArr2LL(arr);
    // cout << head->data << endl;
    // print(head);


// -------------------------- Length of LL -------------------------------
    // cout << "Lenght: " << lengthOftheLL(head) << endl;          // O(n)


// ----------- searching in LL ---------------------------------

    int value = 5;
    // cout << checkPresent(head, value) << endl;
    // head = removesHead(head);
    // print(head);

    // head = deleteTail(head);
    // print(head);

    // head = deleteKthNode(head, 3);
    // print(head);

    // head = deleteEl(head, 43);
    // print(head);

    // head = insertHead(head, 100);
    // print(head);

    // head = insertTail(head, 1000);
    // print(head);

    // head = insertAtPosition(head, 111, 1);
    // print(head);

    head = insertBeforeValue(head, 1, 30);
    print(head);
    return 0;
}