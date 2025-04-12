#include <iostream>
#include <cassert>
using namespace std;
const int MAX_LEN = 100;
class arrayQueue
{
    int rear;
    int front;
    int len;
    int arr[MAX_LEN];

public:
    arrayQueue()
    {
        front = 0;
        rear = MAX_LEN - 1;
        len = 0;
    }
    bool isEmpty()
    {
        return len == 0;
    }
    bool isFull()
    {
        return len == MAX_LEN;
    }
    void Enqueue(int val)
    {
        if (isFull())
            return;
        else
        {
            rear = (rear + 1) % MAX_LEN;
            arr[rear] = val;
            len++;
        }
    }
    void Dequeue()
    {
        if (isEmpty())
            return;
        else
        {
            front = (front + 1) % MAX_LEN;
            len--;
        }
    }
    int getFront()
    {
        if (isEmpty())
            return -1;
        return arr[front];
    }
    int getRear()
    {
        assert(!isEmpty());
        return arr[rear];
    }
    void Display()
    {
        for (int i = front; i != rear; i = (i + 1) % MAX_LEN)
        {
            cout << arr[i] << " ";
        }
        cout << arr[rear] << "\n";
    }
    int getSize()
    {
        return len;
    }
};
int main()
{
    arrayQueue q;

    q.Enqueue(1);
    q.Enqueue(2);
    q.Enqueue(3);
    q.Enqueue(4);
    q.Enqueue(5);

    q.Display();
    q.Dequeue();
    q.Display();
}