#include "stack.h"
#include <bits/stdc++.h>
using namespace std;

int main()
{
    Stack s;
    int x = 5;
    while (x--)
    {
        cout << "Enter item number:" << 5 - x << endl;
        int val;
        cin >> val;
        s.push(val);
        s.display();
    }
    return 0;
}

// g++ main.cpp stack.cpp -o main.exe
// .\main.exe