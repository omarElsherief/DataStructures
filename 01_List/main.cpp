#include "list.cpp"
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    Array arr(size);
    arr.Fill();
    cout << "Enter the index and value to insert: ";
    int index, value;
    cin >> index >> value;
    arr.Insert(index, value);
    arr.Display();
    return 0;
}
