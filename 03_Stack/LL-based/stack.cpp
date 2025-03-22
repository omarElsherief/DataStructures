#include <bits/stdc++.h>
#include "stack.h"
using namespace std;

Node::Node(int data_)
{
    data = data_;
    next = NULL;
}

Stack::Stack()
{
    top = NULL;
}

bool Stack::isEmpty()
{
    return top == NULL;
}

void Stack::push(int val)
{
    Node *newnode = new Node(val);
    if (isEmpty())
    {
        newnode->next = NULL;
        top = newnode;
    }
    else
    {
        newnode->next = top;
        top = newnode;
    }
}

int Stack::pop()
{
    int val = top->data;
    Node *delptr = top;
    top = top->next;
    delete delptr;
    return val;
}

int Stack::Top()
{
    return top->data;
}

void Stack::display()
{
    Node *temp = top;
    if (isEmpty())
    {
        cout << "STack is empty \n";
    }
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "\n";
}
