#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* prev;
    struct node* next;
};

void display(struct node* head) {
    struct node* temp = head;
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("\n");
}

void insertAtHead(struct node** head, int d) {
    struct node* nodeToInsert = (struct node*)malloc(sizeof(struct node));
    nodeToInsert->data = d;

    struct node* temp = *head;
    while (temp->next != *head) {
        temp = temp->next;
    }
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
    (*head)->prev = nodeToInsert;
    nodeToInsert->next = *head;
    *head = nodeToInsert;
}

void insertAtEnd(struct node** head, int d){
    struct node* nodeToInsert = (struct node*)malloc(sizeof(struct node));
    nodeToInsert->data = d;

    struct node* temp = *head;

    
}

int main() {
    struct node* head;
    struct node* first;
    struct node* second;
    struct node* third;

    head = (struct node*)malloc(sizeof(struct node));
    first = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));

    head->data = 1;
    head->prev = third;
    head->next = first;

    first->data = 2;
    first->prev = head;
    first->next = second;

    second->data = 3;
    second->prev = first;
    second->next = third;

    third->data = 4;
    third->prev = second;
    third->next = head;

    display(head);
    insertAtHead(&head, 5);
    display(head);


}