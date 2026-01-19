#include <iostream>
using namespace std;

void display(int mat[2][2]) {
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) cout << mat[i][j] << " ";
        cout << endl;
    }
}

int main() {
    int A[2][2], B[2][2], res[2][2];
    int choice;

    // Initial input for matrices A and B
    cout << "--- Matrix Input ---\n";
    cout << "Enter elements for Matrix A:\n";
    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 2; j++) cin >> A[i][j];

    cout << "Enter elements for Matrix B:\n";
    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 2; j++) cin >> B[i][j];

    do {
        cout << "\n--- MATRIX OPERATIONS MENU ---\n";
        cout << "1. Addition (A + B)\n";
        cout << "2. Subtraction (A - B)\n";
        cout << "3. Multiplication (A * B)\n";
        cout << "4. Transpose of Matrix A\n";
        cout << "5. Generate 2x2 Identity Matrix\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                for(int i = 0; i < 2; i++)
                    for(int j = 0; j < 2; j++) res[i][j] = A[i][j] + B[i][j];
                cout << "\nResult of Addition:\n"; display(res);
                break;

            case 2:
                for(int i = 0; i < 2; i++)
                    for(int j = 0; j < 2; j++) res[i][j] = A[i][j] - B[i][j];
                cout << "\nResult of Subtraction:\n"; display(res);
                break;

            case 3:
                
                for(int i = 0; i < 2; i++) {
                    for(int j = 0; j < 2; j++) {
                        res[i][j] = 0;
                        for(int k = 0; k < 2; k++)
                            res[i][j] += A[i][k] * B[k][j];
                    }
                }
                cout << "\nResult of Multiplication:\n"; display(res);
                break;

            case 4:
                
                for(int i = 0; i < 2; i++)
                    for(int j = 0; j < 2; j++) res[j][i] = A[i][j];
                cout << "\nTranspose of Matrix A:\n"; display(res);
                break;

            case 5:
                for(int i = 0; i < 2; i++)
                    for(int j = 0; j < 2; j++) res[i][j] = (i == j) ? 1 : 0;
                cout << "\n2x2 Identity Matrix:\n"; display(res);
                break;

            case 6:
                cout << "Exiting program...";
                break;

            default:
                cout << "Invalid choice! Please try again.";
        }
    } while(choice != 6);

    return 0;
}
