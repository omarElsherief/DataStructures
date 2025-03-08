#include "list.h"
#include <iostream>
using namespace std;

// Constructor
ArrayList::ArrayList(int cap)
{
    capacity = cap;
    arr = new int[capacity];
    size = 0;
}

// Destructor
ArrayList::~ArrayList()
{
    delete[] arr; // Free memory
}

// Check if the list is empty
bool ArrayList::isEmpty() const
{
    return size == 0;
}

// Check if the list is full
bool ArrayList::isFull() const
{
    return size == capacity;
}

// Insert an element at a given index
bool ArrayList::insert(int value, int index)
{
    if (index < 0 || index > size || isFull())
    {
        cout << "Insertion failed: Invalid index or list full.\n";
        return false;
    }
    for (int i = size; i > index; i--)
    {
        arr[i] = arr[i - 1]; // Shift elements
    }
    arr[index] = value;
    size++;
    return true;
}

// Append an element at the end
bool ArrayList::append(int value)
{
    if (isFull())
    {
        cout << "Append failed: List is full.\n";
        return false;
    }
    arr[size++] = value;
    return true;
}

// Delete an element at a given index
bool ArrayList::remove(int index)
{
    if (index < 0 || index >= size)
    {
        cout << "Deletion failed: Invalid index.\n";
        return false;
    }
    for (int i = index; i < size - 1; i++)
    {
        arr[i] = arr[i + 1]; // Shift elements left
    }
    size--;
    return true;
}

// Search for an element and return its index (-1 if not found)
int ArrayList::search(int value) const
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == value)
        {
            return i;
        }
    }
    return -1;
}

// Display the list elements
void ArrayList::display() const
{
    if (isEmpty())
    {
        cout << "List is empty.\n";
        return;
    }
    cout << "List elements: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
