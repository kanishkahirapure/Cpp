#include <iostream>
using namespace std;

int main()
{
    int Info[7], Link[7];
    int start = 3, ptr, avail = 6;

    cout << "Name of Programmer: Kanishka" << endl;

    Info[start] = 10;
    Link[start] = 1;

    Info[1] = 20;
    Link[1] = 4;

    Info[4] = 40;
    Link[4] = 0;

    ptr = start;

    while (ptr != 0)
    {
        cout << Info[ptr] << " ";
        ptr = Link[ptr];
    }

    return 0;
}
