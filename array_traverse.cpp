#include <iostream>
using namespace std;

int main() {
    int i, n, arr[20];
    cout<<"Program by Kanishka:\n";

    cout << "Enter number of elements in array: ";
    cin >> n;

    cout << "Enter elements: ";
    for(i = 1; i <= n; i++){
        cin >> arr[i];
    }

    cout << "Traversing array elements:" << endl;
    for(i = 1; i <= n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
