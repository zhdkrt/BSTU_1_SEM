#include <iostream>
#include <iomanip>

using namespace std;

const int MAX_SIZE = 100;

int calculateProductWithoutNegatives(int arr[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    int product = 1;

    for (int i = 0; i < rows; ++i) {
        bool hasNegative = false;
        for (int j = 0; j < cols; ++j) {
            if (arr[i][j] < 0) {
                hasNegative = true;
                break;
            }
        }
        if (!hasNegative) {
            for (int j = 0; j < cols; ++j) {
                product *= arr[i][j];
            }
        }
    }

    return product;
}

int findMaxDiagonalSum(int arr[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    int maxDiagonalSum = INT_MIN;

    for (int k = 0; k < rows + cols - 1; ++k) {
        int diagonalSum = 0;

        for (int i = max(0, k - cols + 1); i < min(rows, k + 1); ++i) {
            int j = k - i;
            diagonalSum += arr[i][j];
        }

        maxDiagonalSum = max(maxDiagonalSum, diagonalSum);
    }

    return maxDiagonalSum;
}

int main() {
    int n;
    cout << "Введите размерность матрицы: ";
    cin >> n;

    int arr[MAX_SIZE][MAX_SIZE];
    cout << "Введите элементы матрицы:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> arr[i][j];
        }
    }

    cout << "Исходная матрица:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << setw(3) << arr[i][j] << " ";
        }
        cout << endl;
    }

    int product = calculateProductWithoutNegatives(arr, n, n);
    cout << "Произведение элементов в строках без отрицательных элементов: " << product << endl;

    int maxDiagonalSum = findMaxDiagonalSum(arr, n, n);
    cout << "Максимум среди сумм элементов диагоналей: " << maxDiagonalSum << endl;
}