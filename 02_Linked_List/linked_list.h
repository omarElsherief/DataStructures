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
    int mySize;

public:
    Linkedlist();
    bool isEmpty();
    void insertFirt(int newv);
    void display();
    int count();
    bool isfound(int val);
    void insertBefore(int val, int newv);
    void insert(int newv, int index);
    void reverse();
    ~Linkedlist();
    // sheet
    void Destroy();
};
