#include <bits/stdc++.h>
using namespace std;
class Array
{
private:
    int _size;
    int _length;
    int *_items;

public:
    Array(int size)
    {
        _size = size;
        _length = 0;
        _items = new int[_size];
    }
    void Fill()
    {
        int no_items;
        cout << "Enter the number of elements: ";
        cin >> no_items;
        if (no_items > _size)
        {
            cout << "Array size exceeded!" << endl;
            return;
        }
        else
        {
            for (int i = 0; i < no_items; i++)
            {
                cout << "Enter element " << i + 1 << ": ";
                cin >> _items[i];
                _length++;
            }
        }
    }
    void Display()
    {
        for (int i = 0; i < _length; i++)
        {
            cout << _items[i] << " ";
        }
        cout << endl;
    }
    int getSize()
    {
        return _size;
    }
    int getLength()
    {
        return _length;
    }
    int Search(int key)
    {
        for (int i = 0; i < _length; i++)
        {
            if (_items[i] == key)
            {
                return ++i;
            }
        }
        return -1;
    }
    string Append(int newItem)
    {
        if (_length < _size)
        {
            _items[_length++] = newItem;
            return "Element appended successfully!";
        }
        else
        {
            return "Array is full!";
        }
    }
    string Insert(int index, int value)
    {
        if (index == _length)
            Append(value);
        else if (index >= 0 && index < _length && _length < _size)
        {
            for (int i = _length; i > index; i--)
            {
                _items[i] = _items[i - 1];
            }
            _items[index] = value;
            _length++;
            return "Element inserted successfully!";
        }
        else
        {
            return "Invalid index!";
        }
    }
};