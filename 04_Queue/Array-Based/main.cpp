#include "Queue.cpp"
#include <bits/stdc++.h>
using namespace std;

int main()
{
    Queue q(5);
    q.Enqueue(1);
    q.Enqueue(2);
    q.Enqueue(3);
    q.Enqueue(4);
    q.Enqueue(5);

    q.Traverse();
    q.Dequeue();
    q.Traverse();
}