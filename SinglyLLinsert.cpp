#include <iostream>
using namespace std;

int main()
{
    int Info[7], Link[7];
    int start = 3, ptr, avail = 6, Item;
    int New1 = avail;

    
    cout << "Name of Programmer: Kanishka Hirapure" << endl;

    // Initial static linked list
    Info[start] = 10;
    Link[start] = 1;

    Info[1] = 20;
    Link[1] = 4;

    Info[4] = 40;
    Link[4] = 0;

    // Display original list
    cout << "Initial Linked List: ";
    ptr = start;
    while (ptr != 0)
    {
        cout << Info[ptr] << " ";
        ptr = Link[ptr];
    }

    cout << "\nEnter the item you want to insert: ";
    cin >> Item;

    cout << "After Insertion at Beginning:\n";

    if (avail == 0)
    {
        cout << "Overflow – No space left!";
        return 0;
    }

    // Allocate new node
    avail = Link[avail];
    Info[New1] = Item;
    Link[New1] = start;
    start = New1;

    // Print updated list
    ptr = start;
    while (ptr != 0)
    {
        cout << Info[ptr] << " ";
        ptr = Link[ptr];
    }

    return 0;
}
