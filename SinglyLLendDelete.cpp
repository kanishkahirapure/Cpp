#include <iostream>
using namespace std;

int main() {

    int Info[7], Link[7];
    int start = 3, avail = 6, ptr, Temp, Item;

    cout << "Name of Programmer: Krushika" << endl;

    // Creating Static Linked List
    Info[start] = 10;
    Link[start] = 1;

    Info[1] = 20;
    Link[1] = 4;

    Info[4] = 50;
    Link[4] = 0;

    // Printing original list
    cout << "Original Linked List: ";
    ptr = start;
    while (ptr != 0) {
        cout << Info[ptr] << " ";
        ptr = Link[ptr];
    }

    cout << endl << "After Deletion at Given Position (position = 2):" << endl;

    // Position to delete (2nd node)
    int pos = 2;

    // Check underflow
    if (start == 0) {
        cout << "Underflow";
        return 0;
    }

    // If deleting first node (not used here but added)
    if (pos == 1) {
        Item = Info[start];
        Temp = Link[start];
        start = Temp;
    } else {
        // Traverse to (pos-1)th node
        int p = start;
        int k = 1;

        while (k < pos - 1 && p != 0) {
            p = Link[p];
            k++;
        }

        if (p == 0 || Link[p] == 0) {
            cout << "Invalid Position";
            return 0;
        }

        // Node to delete
        int del = Link[p];
        Item = Info[del];

        // Adjust links
        Link[p] = Link[del];

        // Add deleted node to avail list
        Link[del] = avail;
        avail = del;
    }

    // Display updated list
    ptr = start;
    while (ptr != 0) {
        cout << Info[ptr] << " ";
        ptr = Link[ptr];
    }

    return 0;
}
