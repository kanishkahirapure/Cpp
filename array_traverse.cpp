#include <iostream>
using namespace std;

// traverse function static program
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

}

 //traverse function dynamic program
 void traverse(int arr[], int n) {
    cout << "Array elements are: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main(){         

    int n, i;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[50];   // fixed maximum size dena padega Turbo me (dynamic memory nahi hai)
    
    cout << "Enter " << n << " elements: ";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }

    traverse(arr, n);
   

    return 0;
}
