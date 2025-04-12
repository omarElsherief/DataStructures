#pragma once
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data);
};

class Stack
{
private:
    Node *top;

public:
    Stack();
    void push(int val);
    int pop();
    int Top();
    void display();
    bool isEmpty();
    ~Stack();
    // sheet
    int Bottom();
    int Size();
    Stack Copy();
    void Delete();
};