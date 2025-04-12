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

class Queue
{
private:
    Node *rear;
    Node *front;
    int count;

public:
    Queue();
    bool isEmpty();
    bool isFull();
    void Enqueue(int val);
    void Dequeue();
    void display();
    int getFront();
    int getRear();
    int getSize();
    void Clear();
    void reverse();
    ~Queue();
    // sheet
    void Destroy();
};
//  sheet
//  Write a function that returns the first element entered to a stack.
//  Write a function to return the size of a stack.
//  Write a function that returns a copy from the last element in a stack.
//  Write a function to copy a stack to another.
//  Write a function to destroy a stack.
//  Write a function to print on the screen the contents of a stack without changing the stack.
