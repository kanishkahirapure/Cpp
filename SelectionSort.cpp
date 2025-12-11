#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[minIndex])
                minIndex = j;
        }

        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main() {
    int n;
    cout<<"Program by Knaishka \n";
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100];  // fixed size — safer

    cout << "Enter array elements:\n";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    selectionSort(arr, n);

    cout << "Selection Sorted Array: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
