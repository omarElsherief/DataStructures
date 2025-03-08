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
