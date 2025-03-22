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
    void insertBefore(int val, int newv);
    void append(int newv);
    void deleteNode(int val);
    void reverse();
};
