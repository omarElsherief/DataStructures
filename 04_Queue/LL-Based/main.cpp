#include "Queue.cpp"
#include <bits/stdc++.h>
using namespace std;

int main()
{
    linkedQueue q;
    q.Enqueue(1);
    q.Enqueue(2);
    q.Enqueue(3);
    q.Enqueue(4);
    q.Enqueue(5);
    q.Enqueue(6);
    q.Enqueue(7);

    cout << "Front :" << q.getFront() << "\n";
    cout << "Rear :" << q.getRear() << "\n";

    q.display();
    q.Dequeue();
    q.Dequeue();
    q.display();

    return 0;
}