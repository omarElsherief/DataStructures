#pragma once

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data);
};

class linkedQueue
{
private:
    Node *rear;
    Node *front;
    int len;

public:
    linkedQueue();
    bool isEmpty();
    // bool isFull();
    void Enqueue(int val);
    void Dequeue();
    void display();
    int getFront();
    int getRear();
    int getSize();
    void reverse();
    ~linkedQueue();

private:
    void Clear();
};
