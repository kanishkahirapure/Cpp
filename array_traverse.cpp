#include <iostream>
using namespace std;

// traverse function
void traverse(int arr[], int n) {
    cout << "Array elements are: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;

    traverse(arr, n);   // function call

    return 0;
}
