#include <iostream>

using namespace std;

void inputMatrix(int** matrix, int rows, int cols) {
    cout << "Введите элементы матрицы " << rows << " x " << cols << ":\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "A[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matrix[i][j];
        }
    }
}

void inputVector(int* vector, int size) {
    cout << "Введите элементы вектора " << size << " x 1:\n";
    for (int i = 0; i < size; ++i) {
        cout << "B[" << i + 1 << "]: ";
        cin >> vector[i];
    }
}

int matrixVectorProduct(const int** matrix, const int* vector, int rows, int cols) {
    int product = 1;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            product *= matrix[i][j];
        }
    }

    for (int i = 0; i < rows; ++i) {
        product *= vector[i];
    }

    return product;
}

int main() {
    setlocale(LC_ALL, "RU");
    int n, m;

    cout << "Введите количество строк матрицы: ";
    cin >> n;

    cout << "Введите количество столбцов матрицы: ";
    cin >> m;

    int** matrix = new int* [n];
    for (int i = 0; i < n; ++i) {
        matrix[i] = new int[m];
    }

    int* vector = new int[m];

    inputMatrix(matrix, n, m);
    inputVector(vector, m);

    int result = matrixVectorProduct((const int**)matrix, vector, n, m);

    cout << "Произведение элементов матрицы и вектора: " << result << endl;

    for (int i = 0; i < n; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;

    delete[] vector;

    return 0;
}
