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

void Linkedlist::append(int newv)
{
    Node *newnode = new Node(newv);
    if (isEmpty())
    {
        newnode->next = NULL;
        head = newnode;
    }
    else
    {
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}

void Linkedlist::deleteNode(int val)
{
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
