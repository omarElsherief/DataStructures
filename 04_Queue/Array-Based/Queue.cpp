#include "Queue.h"
#include <bits/stdc++.h>
using namespace std;

Queue::Queue(int c)
{
    capacity = c;
    front = 0;
    rear = -1;
    len = 0;
    arr = new int[capacity];
}

Queue::~Queue()
{
    len = 0;
    delete[] arr;
    capacity = 0;
    rear = -1;
    front = 0;
}

int Queue::Empty()
{
    return len == 0;
}

int Queue::Full()
{
    return len == capacity;
}

void Queue::Enqueue(int e)
{
    rear = (rear + 1) % capacity;
    arr[rear] = e;
    len++;
}

int Queue::Dequeue()
{
    int x = arr[front];
    front = (front + 1) % capacity;
    len--;
    return x;
}

void Queue::Traverse()
{
    for (int i = front; i != rear; i = (i + 1) % capacity)
    {
        cout << arr[i] << " ";
    }
    cout << arr[rear] << "\n";
}