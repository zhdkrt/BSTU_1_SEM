#include <iostream>
#include <iomanip>

using namespace std;

const int MAX_ROWS = 12;
const int MAX_COLS = 8;

void printMatrix(int** matrix, int rows, int cols);
void inputMatrix(int** matrix, int rows, int cols);
void sortMatrix(int** matrix, int rows, int cols);
void swapRowsContainingElements(int** matrix, int rows, int cols, int a, int b);

int main() {
    setlocale(LC_ALL, "RU");
    int rows, cols, a, b;
    int** matrix;

    cout << "Введите количество строк матрицы (не более " << MAX_ROWS << "): ";
    cin >> rows;

    cout << "Введите количество столбцов матрицы (не более " << MAX_COLS << "): ";
    cin >> cols;

    matrix = new int* [rows];
    for (int i = 0; i < rows; ++i) {
        matrix[i] = new int[cols];
    }

    cout << "Введите элементы матрицы:\n";
    inputMatrix(matrix, rows, cols);

    cout << "Матрица до обмена строк:\n";
    printMatrix(matrix, rows, cols);

   cout << "Введите элементы a и b для обмена строк:\n";
   
   cout << "a: ";
    cin >> a;
   
    cout << "b: ";
    cin >> b;

    swapRowsContainingElements(matrix, rows, cols, a, b);

    cout << "Матрица после обмена строк:\n";
    printMatrix(matrix, rows, cols);

    cout << "Выберите операцию:\n";
    
    cout << "1. Вывести матрицу\n";
    cout << "2. Ввести новую матрицу\n";
    cout << "3. Сортировать матрицу\n";
    cout << "4. Выход\n";
   
    int choice;
    cin >> choice;

    switch (choice) {
    case 1:
        cout << "Матрица:\n";
        printMatrix(matrix, rows, cols);
        break;

    case 2:
        cout << "Введите новые элементы матрицы:\n";
        inputMatrix(matrix, rows, cols);
        break;

    case 3:
        sortMatrix(matrix, rows, cols);
        cout << "Отсортированная матрица:\n";
        printMatrix(matrix, rows, cols);
        break;
    case 4:
        return 0;

    default:
        cout << "Некорректный выбор операции. Завершение программы.\n";
        break;
    }

    for (int i = 0; i < rows; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;
}

void printMatrix(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << setw(3) << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void inputMatrix(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Элемент [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matrix[i][j];
        }
    }
}

void sortMatrix(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            for (int k = 0; k < cols - 1; ++k) {
                if (matrix[i][k] > matrix[i][k + 1]) {
                    int temp = matrix[i][k];
                    matrix[i][k] = matrix[i][k + 1];
                    matrix[i][k + 1] = temp;
                }
            }
        }
    }
}

void swapRowsContainingElements(int** matrix, int rows, int cols, int a, int b) {
    int rowA = -1, rowB = -1;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (matrix[i][j] == a) {
                rowA = i;
            }
            if (matrix[i][j] == b) {
                rowB = i;
            }
        }
    }

    if (rowA != -1 && rowB != -1) {
        int* tempRow = matrix[rowA];
        matrix[rowA] = matrix[rowB];
        matrix[rowB] = tempRow;
    }
    else {
        cout << "Элементы a и b не найдены. Обмен строк не выполнен.\n";
    }
}