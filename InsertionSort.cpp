#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for(int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

int main() {
    int n;
    cout<<"Program by Knaishka \n";

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100];  // safer fixed size

    cout << "Enter array elements:\n";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    insertionSort(arr, n);

    cout << "Insertion Sorted Array: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
