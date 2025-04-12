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
    cout << "Items in the stack [ ";
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "]\n";
}

// sheet stuff

int Stack::Bottom()
{
    if (isEmpty())
        return -1;
    Node *temp = top;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    return temp->data;
}

int Stack::Size()
{
    int size = 0;
    if (isEmpty())
        return 0;
    size++;
    Node *temp = top;
    while (temp->next != NULL)
    {
        temp = temp->next;
        size++;
    }
    return size;
}

Stack Stack::Copy()
{
    Stack st;
    int size = Size();
    int arr[size];
    int index = 0;
    if (isEmpty())
        return st;
    Node *temp = top;
    arr[index++] = temp->data;
    while (temp->next != NULL)
    {
        temp = temp->next;
        arr[index++] = temp->data;
    }
    for (int i = size - 1; i >= 0; i--)
    {
        st.push(arr[i]);
    }
    return st;
}

void Stack::Delete()
{
    while (top)
    {
        Node *temp = top;
        top = top->next;
        delete temp;
    }
}

Stack::~Stack()
{
    Delete();
}