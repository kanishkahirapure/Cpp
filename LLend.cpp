#include <iostream>
using namespace std;

int main()
{
    int Info[7], Link[7];
    int start = 3, ptr, avail = 6, Item, New1;

    cout << "Name of Programmer: Kanishka" << endl;

    Info[start] = 10;
    Link[start] = 1;

    Info[1] = 20;
    Link[1] = 4;

    Info[4] = 40;
    Link[4] = 0;

    cout << "Initial Linked List: ";
    ptr = start;
    while (ptr != 0)
    {
        cout << Info[ptr] << " ";
        ptr = Link[ptr];
    }

    cout << "\nEnter the item you want to insert at end: ";
    cin >> Item;

    if (avail == 0)
    {
        cout << "Overflow – No free space left.";
        return 0;
    }

    // Find last node dynamically
    ptr = start;
    while (Link[ptr] != 0)
    {
        ptr = Link[ptr];
    }

    New1 = avail;
    avail = Link[avail];

    Info[New1] = Item;
    Link[New1] = 0;
    Link[ptr] = New1;

    cout << "After Insertion at End: ";
    ptr = start;
    while (ptr != 0)
    {
        cout << Info[ptr] << " ";
        ptr = Link[ptr];
    }

    return 0;
}
