#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout<<"Program by Kanishka\n";
    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter number of columns: ";
    cin >> cols;

    int matrix[100][100]; // Fixed size (VS Code allowed)

    cout << "Enter matrix elements:\n";

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "Matrix Traversal:\n";

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
