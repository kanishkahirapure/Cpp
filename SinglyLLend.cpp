#include <iostream>
using namespace std;

int main()
{
    int Info[7], Link[7];
    int start = 3, ptr, avail = 6, Item, New1;

    cout << "Name of Programmer: Kanishka Hirapure" << endl;

    // Initial Linked List
    Info[start] = 10;
    Link[start] = 1;

    Info[1] = 20;
    Link[1] = 4;

    Info[4] = 40;
    Link[4] = 0;   // end node

    cout << "Initial Linked List: ";
    ptr = start;
    while (ptr != 0)
    {
        cout << Info[ptr] << " ";
        ptr = Link[ptr];
    }

    cout << "\nEnter the item you want to insert: ";
    cin >> Item;

    cout << "After Insertion at End:\n";

    if (avail == 0)
    {
        cout << "Overflow – No space left!";
        return 0;
    }

    // Create new node
    New1 = avail;
    avail = Link[avail];  // update avail list
    Info[New1] = Item;

    // Find the last node
    ptr = start;
    while (Link[ptr] != 0)
    {
        ptr = Link[ptr];
    }

    // Insert at end
    Link[ptr] = New1;
    Link[New1] = 0;

    // Print updated list
    ptr = start;
    while (ptr != 0)
    {
        cout << Info[ptr] << " ";
        ptr = Link[ptr];
    }

    return 0;
}
