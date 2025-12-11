#include <iostream>
using namespace std;

int main() {
    int r, c;
    cout<<"Program by Kanishka\n";
    cout << "Enter rows and columns: ";
    cin >> r >> c;

    int A[100][100], B[100][100], C[100][100]; 

    cout << "Enter elements of Matrix A:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> A[i][j];
        }
    }

    cout << "Enter elements of Matrix B:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> B[i][j];
        }
    }

    cout << "Matrix Addition Result:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            C[i][j] = A[i][j] + B[i][j];
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
