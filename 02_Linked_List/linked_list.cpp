#include <bits/stdc++.h>
#include "linked_list.h"
using namespace std;

Node::Node(int data)
{
    this->data = data;
    this->next = NULL;
}

Linkedlist::Linkedlist()
{
    head = NULL;
}

bool Linkedlist::isEmpty()
{
    return head == NULL;
}

void Linkedlist::insertFirt(int newv)
{
    mySize++;
    Node *newnode = new Node(newv);
    if (isEmpty())
    {
        newnode->next = NULL;
        head = newnode;
    }
    else
    {
        newnode->next = head;
        head = newnode;
    }
}

void Linkedlist::display()
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl
         << "DONE" << endl;
}

int Linkedlist::count()
{
    Node *temp = head;
    int cnt = 0;
    while (temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

bool Linkedlist::isfound(int val)
{
    Node *temp = head;
    while (temp != NULL)
    {
        if (val == temp->data)
            return true;
        temp = temp->next;
    }
    return false;
}

void Linkedlist::insertBefore(int val, int newv)
{
    Node *temp = head;
    Node *newnode = new Node(newv);
    while (temp->next != NULL && temp->next->data != val)
    {
        temp = temp->next;
    }
    if (temp->next == NULL)
    {
        cout << "Value not found" << endl;
    }
    else
    {
        newnode->next = temp->next;
        temp->next = newnode;
    }
}

void Linkedlist::insert(int newv, int index)
{
    if (index < 0 || index > this->mySize)
    {
        cerr << "Illegal location to insert -- " << index << endl;
        return;
    }
    mySize++;
    Node *newN = new Node(newv);
    if (index == 0)
    {
        newN->next = head;
        head = newN;
        return;
    }
    Node *temp = head;
    for (int i = 0; i < index - 2; i++)
    {
        temp = temp->next;
    }
    newN->next = temp->next;
    temp->next = newN;
}

void Linkedlist::reverse()
{
    Node *prev, *next, *cur;
    prev = NULL;
    cur = head;
    next = cur->next;
    while (cur != NULL)
    {
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    head = prev;
}

void Linkedlist::Destroy()
{
    while (head)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
    }
}

Linkedlist::~Linkedlist()
{
    Destroy();
}