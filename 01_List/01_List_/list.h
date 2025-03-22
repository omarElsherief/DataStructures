#ifndef LIST_H
#define LIST_H

class ArrayList
{
private:
    int *arr;     // Dynamic array
    int capacity; // Maximum size of the list
    int size;     // Current number of elements

public:
    ArrayList(int cap = 10); // Constructor
    ~ArrayList();            // Destructor

    bool isEmpty() const;
    bool isFull() const;
    bool insert(int value, int index);
    bool append(int value);
    bool remove(int index);
    int search(int value) const;
    void display() const;
};

#endif // LIST_H
