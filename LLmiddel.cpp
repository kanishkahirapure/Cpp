#include <iostream>
using namespace std;

int main()
{
    int Info[10], Link[10];
    int start = 3, ptr, avail = 6, Item, pos, New1;
    cout<<"Program by Kanishka\n";

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

    cout << "\nEnter the item you want to insert: ";
    cin >> Item;

    cout << "Enter the position in the list (1,2,3...): ";
    cin >> pos;

    if (avail == 0)
    {
        cout << "Overflow!";
        return 0;
    }

    // Traverse to the correct list position
    int count = 1;
    ptr = start;

    while (count < pos && Link[ptr] != 0)
    {
        ptr = Link[ptr];
        count++;
    }

    // Create new node
    New1 = avail;
    avail = Link[avail];

    Info[New1] = Item;

    // Insert after ptr
    Link[New1] = Link[ptr];
    Link[ptr] = New1;

    cout << "After Insertion: ";
    ptr = start;
    while (ptr != 0)
    {
        cout << Info[ptr] << " ";
        ptr = Link[ptr];
    }

    return 0;
}
