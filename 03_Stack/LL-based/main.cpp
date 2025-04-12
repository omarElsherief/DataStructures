#include "stack.cpp"
#include <bits/stdc++.h>
#define el endl
using namespace std;

int main()
{
    Stack s;
    int x = 0;
    while (x++ < 5)
    {
        // cout << "Enter item number:" << 5 - x << endl;
        int val = x;
        // cin >> val;
        s.push(val);
    }
    s.display();
    cout << "the first element enterd : " << s.Bottom() << el;
    cout << "Size : " << s.Size() << el;
    Stack nw = s.Copy();
    nw.display();

    return 0;
}

// g++ main.cpp stack.cpp -o main.exe
// .\main.exe