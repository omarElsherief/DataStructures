#ifndef QUEUEARRAY_H_INCLUDED
#define QUEUEARRAY_H_INCLUDED

class Queue
{
    int capacity;
    int front;
    int rear;
    int len;
    int *arr;

public:
    Queue(int c);
    ~Queue();
    int Empty();
    int Full();
    void Enqueue(int e);
    int Dequeue();
    void Traverse();
};

#endif // QUEUEARRAY_H_INCLUDED
