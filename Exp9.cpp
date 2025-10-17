#include <iostream>
using namespace std;

class Matrix {
private:
    int mat[10][10];
    int rows, cols;

public:
    void inputMatrix() {
        cout << "Enter number of rows: ";
        cin >> rows;
        cout << "Enter number of columns: ";
        cin >> cols;
        cout << "Enter matrix elements:\n";
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cin >> mat[i][j];
            }
        }
    }

    void displayMatrix() {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }

    Matrix operator+(Matrix m) {
        Matrix temp;
        temp.rows = rows;
        temp.cols = cols;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                temp.mat[i][j] = mat[i][j] + m.mat[i][j];
            }
        }
        return temp;
    }
};

int main() {
    Matrix m1, m2, sum;

    cout << "Enter details for Matrix 1:\n";
    m1.inputMatrix();

    cout << "\nEnter details for Matrix 2:\n";
    m2.inputMatrix();

    cout << "\nMatrix 1:\n";
    m1.displayMatrix();

    cout << "\nMatrix 2:\n";
    m2.displayMatrix();

    sum = m1 + m2;

    cout << "\nSum of Matrix 1 and Matrix 2:\n";
    sum.displayMatrix();

    return 0;
}
