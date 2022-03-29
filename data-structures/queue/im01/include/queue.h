#ifndef __QUEUE__
#define __QUEUE__
// A linked list (LL) node to store a queue entry
struct QNode {
    int key;
    struct QNode* next;
};
 
// The queue, front stores the front node of LL and rear stores the
// last node of LL
struct Queue {
    struct QNode *front, *rear;
};

// A utility function to create a new linked list node.
struct QNode* newNode(int);

// A utility function to create an empty queue
struct Queue* createQueue();

// The function to add a key k to q
void enQueue(struct Queue*, int );

// Function to remove a key from given queue q
void deQueue(struct Queue*);

#endif