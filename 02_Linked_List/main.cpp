#include <bits/stdc++.h>
#include "linked_list.h"
using namespace std;

int main()
{
    Linkedlist lst;
    // if (lst.isEmpty())
    //     cout << "List is empty" << endl;
    // else
    //     cout << "List contains " << lst.count() << " elements" << endl;
    // int val;
    // cout << "Enter the value to be inserted: " << endl;
    // cin >> val;
    // lst.insertFirt(val);
    // lst.display();
    // int val1;
    // cout << "Enter the value to be inserted: " << endl;
    // cin >> val1;
    // lst.insertFirt(val1);
    // lst.display();
    // int val2;
    // cout << "Enter the value to be inserted: " << endl;
    // cin >> val2;
    // lst.insertFirt(val2);
    // lst.display();

    // int item;
    // cout << "Enter the element to be searched: " << endl;
    // cin >> item;
    // if (lst.isfound(item))
    //     cout << "Element found" << endl;
    // else
    //     cout << "Element not found" << endl;
    // cout << "Enter the value to be inserted before: " << endl;
    // int val3;
    // cin >> val3;
    // cout << "Enter the value to be inserted: " << endl;
    // int val4;
    // cin >> val4;
    // lst.insertBefore(val3, val4);
    for (size_t i = 0; i < 10; i++)
    {
        int val;
        cin >> val;
        lst.insertFirt(val);
    }

    lst.display();
    lst.reverse();
    lst.display();

    return 0;
}