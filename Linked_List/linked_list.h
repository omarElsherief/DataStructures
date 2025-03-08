#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data);
};

class Linkedlist
{
private:
    Node *head;

public:
    Linkedlist();
    bool isEmpty();
    void insertFirt(int newv);
    void display();
    int count();
    bool isfound(int val);
};

#endif
