#include <iostream>
using namespace std;

// Node class
class QueueNode {
public:
    int data;
    QueueNode* next;

    QueueNode(int a) {
        data = a;
        next = NULL;
    }
};

// Queue class
class MyQueue {
private:
    QueueNode* front;
    QueueNode* rear;

public:
    MyQueue() {
        front = rear = NULL;
    }

    // Function to add an element to the rear of the queue
    void push(int x) {
        QueueNode* newNode = new QueueNode(x);

        if (rear == NULL) {
            // Queue is empty
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
    }

    // Function to remove and return element from front
    int pop() {
        if (front == NULL) {
            // Queue is empty
            return -1;
        }

        int x = front->data;
        QueueNode* temp = front;
        front = front->next;

        if (front == NULL) {
            // If queue becomes empty, update rear also
            rear = NULL;
        }

        delete temp;
        return x;
    }

    // (Optional) Function to check if queue is empty
    bool isEmpty() {
        return front == NULL;
    }
};

// Example usage
int main() {
    MyQueue q;

    q.push(5);
    q.push(10);
    q.push(15);

    cout << q.pop() << endl; // 5
    cout << q.pop() << endl; // 10
    cout << q.pop() << endl; // 15
    cout << q.pop() << endl; // -1 (empty queue)

    return 0;
}
