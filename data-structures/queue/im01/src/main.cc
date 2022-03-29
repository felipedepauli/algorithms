#include <stdio.h>
#include "../include/queue.h"

// Driver Program to test anove functions
int main()
{
    struct Queue* q = createQueue();
    enQueue(q, 10);
    enQueue(q, 20);
    deQueue(q);
    deQueue(q);
    enQueue(q, 30);
    enQueue(q, 40);
    enQueue(q, 50);
    deQueue(q);
    printf("Queue Front : %d \n", q->front->key);
    printf("Queue Rear : %d", q->rear->key);
    return 0;
}