#include <stdio.h>
#include <stdlib.h>

// Structure for a node
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the beginning of the list
void insertAtBeginning(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        newNode->next = newNode;
        newNode->prev = newNode;
    } else {
        struct Node* last = (*head)->prev;
        newNode->next = *head;
        newNode->prev = last;
        (*head)->prev = newNode;
        last->next = newNode;
    }
    *head = newNode;
}

// Function to insert a node at the end of the list
void insertAtEnd(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        newNode->next = newNode;
        newNode->prev = newNode;
        *head = newNode;
    } else {
        struct Node* last = (*head)->prev;
        newNode->next = *head;
        newNode->prev = last;
        (*head)->prev = newNode;
        last->next = newNode;
    }
}

// Function to insert a node after a given node in the list
void insertAfter(struct Node** head, int data, int key) {
    if (*head == NULL) {
        printf("List is empty.\n");
        return;
    }
    
    struct Node* temp = *head;
    do {
        if (temp->data == key) {
            struct Node* newNode = createNode(data);
            newNode->next = temp->next;
            newNode->prev = temp;
            temp->next->prev = newNode;
            temp->next = newNode;
            
            if (temp == (*head)->prev) {
                *head = newNode;
            }
            
            printf("Node inserted after %d\n", key);
            return;
        }
        temp = temp->next;
    } while (temp != *head);
    
    printf("Key not found in the list.\n");
}

// Function to delete a node from the list
void deleteNode(struct Node** head, int key) {
    if (*head == NULL) {
        printf("List is empty.\n");
        return;
    }
    
    struct Node* temp = *head;
    do {
        if (temp->data == key) {
            if (temp->next == temp) { // Only one node in the list
                free(temp);
                *head = NULL;
                printf("Node with data %d deleted successfully.\n", key);
                return;
            }
            
            struct Node* prevNode = temp->prev;
            struct Node* nextNode = temp->next;
            
            prevNode->next = nextNode;
            nextNode->prev = prevNode;
            
            if (temp == *head) {
                *head = nextNode;
            }
            
            free(temp);
            printf("Node with data %d deleted successfully.\n", key);
            return;
        }
        temp = temp->next;
    } while (temp != *head);
    
    printf("Key not found in the list.\n");
}

// Function to display
void displayList(struct Node* head){
	if(head == NULL){
		printf("List is empty.\n");
		return;
	}
	struct Node* temp = head;
do {
    printf("%d ", temp->data);
    temp = temp->next;
} while (temp != head);

printf("\n");
}

int main(){
	
struct Node* head = NULL;
// Insert nodes at the beginning
insertAtBeginning(&head, 4);
insertAtBeginning(&head, 3);
insertAtBeginning(&head, 2);
insertAtBeginning(&head, 1);

// Display the list
printf("List after inserting at the beginning: ");
displayList(head);

// Insert nodes at the end
insertAtEnd(&head, 5);
insertAtEnd(&head, 6);

// Display the list
printf("List after inserting at the end: ");
displayList(head);

// Insert node after a given node
insertAfter(&head, 7, 5);

// Display the list
printf("List after inserting after a given node: ");
displayList(head);

// Delete a node
deleteNode(&head, 3);

// Display the list
printf("List after deleting a node: ");
displayList(head);


}