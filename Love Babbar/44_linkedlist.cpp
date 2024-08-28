#include<iostream>
using namespace std;

class node {
    public:
    int data;
    node* next;

    // constructor
    node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

// INSERT AN ELEMENT AT THE BEGININIG
void insertAtBegining(node* &head, int d){
    // new node create
    node* temp = new node(d);
    temp -> next = head;
    head = temp;
}

// INSERT AN ELEMENT AT THE END
void insertAtTail(node* &tail, int d){
    node* temp = new node(d);
    tail -> next = temp;
    tail = temp;
}

void insertAtPosition(node* &head, node* &tail, int position, int d){

    if(position == 1){
        insertAtBegining(head, d);
        return;
    }
    node* temp = head;
    int cnt = 1;
    while(cnt < position-1){
        temp = temp -> next;
        cnt++;
    }
    
    // inserting at last position
    if(temp -> next == NULL){
        insertAtTail(tail, d);
        return;
    }

    node* nodeToInsert = new node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;
}

// DELETE AT ANY POSITION
void deleteAtPosition(node* &head, int position){
    node* temp = head;
    int cnt = 1;
    while(cnt < position - 1){
        temp = temp -> next;
        cnt++;
    }
    node* nodeTodelete = temp -> next;
    temp -> next = nodeTodelete -> next;
    free(nodeTodelete);
}

// DELETION AT THE START
void deleteAtBegining(node* &head){
    node* temp = head;
    head = temp -> next;
    free(temp);
}

// DELETION AT THE END
void deleteAtEnd(node* &head, node* &tail){
    node *temp = head;
    while(temp -> next != NULL){
        temp = temp -> next;
    }


}
void print(node* &head){
    node* temp = head;
    while(temp!= NULL){
        cout << temp -> data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main(){
    // created a new node
    node* node1 = new node(10);
    cout << node1 -> data << endl;
    // cout << node1 -> next << endl;

    // head pointed to node1
    node* head = node1;
    node* tail = node1;

    insertAtBegining(head, 12);
    print(head);

    insertAtBegining(head, 14);
    print(head);

    insertAtTail(tail, 20);
    print(head);

    insertAtPosition(head, tail, 3, 22);
    print(head);

    insertAtPosition(head, tail, 1, 88);
    print(head);

    cout << "Head " << head -> data <<" " << endl;
    cout << "Tail " << tail -> data <<" " << endl;

    deleteAtPosition(head, 3);
    cout << "After deletion: ";
    print(head);

    deleteAtBegining(head);
    cout << "After deletion: ";
    print(head);
    cout << "Head " << head -> data <<" " << endl;
    
    deleteAtPosition(head, 4);
    cout << "After deletion: ";
    print(head);
    cout << "Tail " << tail -> data <<" " << endl;
    return 0;
}