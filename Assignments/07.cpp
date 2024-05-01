#include <iostream>
using namespace std;

class Matrix {
private:
    int rows;
    int cols;
    int **data;

public:
    // Dynamic constructor to initialize matrix with specified dimensions
    Matrix(int r, int c) : rows(r), cols(c) {
        data = new int*[rows];
        for (int i = 0; i < rows; ++i) {
            data[i] = new int[cols];
        }
    }

    // Read elements of the matrix
    void readMatrix() {
        cout << "Enter elements of the matrix:" << endl;
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cin >> data[i][j];
            }
        }
    }

    // Display the matrix
    void displayMatrix() {
        cout << "Matrix:" << endl;
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }

    // Add two matrices
    Matrix add(Matrix& other) {
        if (rows != other.rows || cols != other.cols) {
            cout << "Matrices have different dimensions. Addition not possible." << endl;
            return Matrix(0, 0); // Return an empty matrix
        }

        Matrix result(rows, cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                result.data[i][j] = data[i][j] + other.data[i][j];
            }
        }
        return result;
    }

    // Destructor to free memory
    ~Matrix() {
        for (int i = 0; i < rows; ++i) {
            delete[] data[i];
        }
        delete[] data;
        data = nullptr; // Set data pointer to nullptr after deallocation
    }
};

int main() {
    int m, n;
    cout << "Enter dimensions of first matrix (rows columns): ";
    cin >> m >> n;
    Matrix mat1(m, n);
    mat1.readMatrix();

    cout << "Enter dimensions of second matrix (rows columns): ";
    cin >> m >> n;
    Matrix mat2(m, n);
    mat2.readMatrix();

    Matrix mat3 = mat1.add(mat2);
    mat3.displayMatrix();

    return 0;
}

