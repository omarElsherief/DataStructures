#include <iostream>
using namespace std;

struct Book
{
    string name;
    string author;
    int pages;
    double price;
};

int main()
{
    // // Initialize an integer variable with value 9
    // int x = 9;
    // // Print the memory address of variable x
    // cout << &x << endl;

    // // Create a pointer 'ptr' that stores the address of x
    // int *ptr = &x;
    // // Dereference ptr to print the value it points to (value of x)
    // cout << *ptr << endl;

    // // Change the value at the memory location ptr points to
    // // This will change the value of x indirectly
    // *ptr = 10;
    // // Print x to show it was changed through the pointer
    // cout << x << endl;

    // int *ptr = new int(20);
    // cout << *ptr;

    // STRUCTURE
    // Book book1;
    // book1.name = "Harry Potter";
    // book1.author = "JK Rowling";
    // book1.pages = 500;
    // book1.price = 20.5;

    // Book book1 = {"Harry Potter", "JK Rowling", 500, 20.5};
    // cout << book1.name << endl;
    // cout << book1.author << endl;
    // cout << book1.pages << endl;

        return 0;
}