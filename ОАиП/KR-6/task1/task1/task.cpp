#include <iostream>
#include <iomanip>

using namespace std;

const int MAX_SIZE = 10;

void inputArr(int arr[MAX_SIZE][MAX_SIZE], int n) {
    cout << "Введите элементы матрицы:\n";
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> arr[i][j];
}

void printArr(const int arr[MAX_SIZE][MAX_SIZE], int n) {
    cout << "Матрица:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j)
            cout << setw(3) << arr[i][j] << " ";
        cout << endl;
    }
}

int maximumDiagonalSum(const int arr[MAX_SIZE][MAX_SIZE], int n) {
    int maxSum = arr[0][0];
    for (int i = 1; i < n; ++i) {
        int diagonalSumAbove = 0;
        int diagonalSumBelow = 0;
        for (int j = 0; j < n; ++j) {
            if (i + j < n) {
                diagonalSumAbove += arr[i + j][j];
            }
            if (j + i < n) {
                diagonalSumBelow += arr[j][j + i];
            }
        }
        int maxDiagonalSum = max(diagonalSumAbove, diagonalSumBelow);
        if (maxDiagonalSum > maxSum) {
            maxSum = maxDiagonalSum;
        }
    }
    return maxSum;
}

long long product(const int arr[MAX_SIZE][MAX_SIZE], int n) {
    long long product = 1;
    for (int i = 0; i < n; ++i) {
        bool flag = false;
        for (int j = 0; j < n; ++j)
            if (arr[i][j] < 0) {
                flag = true;
                break;
            }
        if (!flag)
            for (int j = 0; j < n; ++j)
                product *= arr[i][j];
    }
    return product;
}

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    
    cout << "Введите размер матрицы (не более " << MAX_SIZE << "): ";
    cin >> n;

    int arr[MAX_SIZE][MAX_SIZE];
    inputArr(arr, n);

    printArr(arr, n);

    int maxDiagonalSum = maximumDiagonalSum(arr, n);
    long long prod = product(arr, n);

    cout << "Максимум среди сумм элементов, параллельных главной диагонали: " << maxDiagonalSum << endl;
    cout << "Произведение элементов в строках без отрицательных элементов: " << prod << endl;

    return 0;
}