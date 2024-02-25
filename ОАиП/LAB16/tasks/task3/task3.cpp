#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int rows, cols;

    cout << "¬ведите количество строк: ";
    cin >> rows;

    cout << "¬ведите количество столбцов: ";
    cin >> cols;

    int** matrix = new int* [rows];
    for (int i = 0; i < rows; ++i) {
        matrix[i] = new int[cols];
    }

    cout << "¬ведите элементы матрицы:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }

    int maxElement = matrix[0][0];
    int maxRow = 0, maxCol = 0;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (matrix[i][j] > maxElement) {
                maxElement = matrix[i][j];
                maxRow = i;
                maxCol = j;
            }
        }
    }

    for (int j = 0; j < cols; ++j) {
        int temp = matrix[0][j];
        matrix[0][j] = matrix[maxRow][j];
        matrix[maxRow][j] = temp;
    }

    for (int i = 0; i < rows; ++i) {
        int temp = matrix[i][0];
        matrix[i][0] = matrix[i][maxCol];
        matrix[i][maxCol] = temp;
    }

    cout << "»змененна€ матрица:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }

    for (int i = 0; i < rows; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;
}