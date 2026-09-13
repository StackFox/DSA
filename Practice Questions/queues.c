#include <stdio.h>
#include <stdlib.h>
#define N 10
int queue[N];
int front = -1;
int rear = -1;

int isEmpty()
{
    return (front == -1 || front > rear);
}

int isFull()
{
    return (rear == N - 1);
}

void enqueue(int value)
{
    if (isFull())
    {
        printf("queue overflow");
        return;
    }
    if (front == -1)
        front = 0;
    rear++;
    queue[rear] = value;
    printf("%d enqueued\n", value);
}

void dequeue()
{
    if (isEmpty())
    {
        printf("Queue underflow");
        return;
    }
    printf("%d dequeued\n", queue[front]);
    front++;
    if (front > rear)
    {
        front = rear = -1;
    }
}

void display()
{
    if (isEmpty())
    {
        printf("queue is empty\n");
        return;
    }
    for (int i = front; i <= rear; i++)
    {
        printf("%d ", queue[i]);
    }
}

void main()
{
    enqueue(10);
    enqueue(20);
    enqueue(40);

    dequeue();
    display();
}