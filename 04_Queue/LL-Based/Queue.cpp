#include "Queue.h"
#include <bits/stdc++.h>
using namespace std;

Node::Node(int data)
{
    this->data = data;
    next = NULL;
}

linkedQueue::linkedQueue()
{
    rear = front = NULL;
    len = 0;
}

bool linkedQueue::isEmpty()
{
    return front == NULL;
}

// bool linkedQueue::isFull() {}

void linkedQueue::Enqueue(int val)
{
    if (isEmpty())
    {
        front = new Node(val);
        rear = front;
        len++;
    }
    else
    {
        Node *n = new Node(val);
        rear->next = n;
        rear = n;
        len++;
    }
}

void linkedQueue::Dequeue()
{
    if (isEmpty())
    {
        return;
    }
    else
    {
        // int tmp = front->data;
        Node *temp = front;
        if (front == rear)
        {
            front = rear = NULL;
        }
        else
        {
            front = front->next;
        }
        len--;
        delete temp;
        // return tmp;
    }
}

void linkedQueue::display()
{
    Node *temp = front;
    cout << "[ ";
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "]\n";
}

int linkedQueue::getFront()
{
    assert(!isEmpty());
    return front->data;
}

int linkedQueue::getRear()
{
    assert(!isEmpty());
    return rear->data;
}

int linkedQueue::getSize()
{
    return len;
}

void linkedQueue::Clear()
{
    Node *temp;
    while (front != NULL)
    {
        temp = front;
        front = front->next;
        delete temp;
    }
    rear = front = NULL;
    len = 0;
}

void linkedQueue::reverse() {}

linkedQueue::~linkedQueue()
{
    Clear();
}
