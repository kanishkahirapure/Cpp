#include <iostream>
using namespace std;

int main() {
    int Info[7], Link[7];
    int start = 3, ptr, avail = 6;
    int Temp, Item;

    cout << "Name of Programmer: Kanishka" << endl;

    // Creating a static linked list
    Info[start] = 10;
    Link[start] = 1;

    Info[1] = 20;
    Link[1] = 4;

    Info[4] = 40;
    Link[4] = 0;

    cout << "Original Linked List: ";
    ptr = start;
    while (ptr != 0) {
        cout << Info[ptr] << " ";
        ptr = Link[ptr];
    }

    cout << endl << "After Deletion at Beginning:" << endl;

    // Deletion at beginning
    if (start == 0) {
        cout << "Underflow";
    } else {
        Item = Info[start];
        Temp = Link[start]; // next node

        // New start
        start = Temp;

        // Managing avail list (Not very useful, but keeping your logic)
        avail = Temp;
    }

    // Print updated list
    ptr = start;
    while (ptr != 0) {
        cout << Info[ptr] << " ";
        ptr = Link[ptr];
    }

    return 0;
}
