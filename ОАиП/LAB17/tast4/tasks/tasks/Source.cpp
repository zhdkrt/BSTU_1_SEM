#include <iostream>

const int MAX_ROWS = 12;
const int MAX_COLS = 8;

// ��������� �������
void sortArray(int* array, int size);
void swapRows(int matrix[MAX_ROWS][MAX_COLS], int row1, int row2, int cols);

int main() {
    int size;
    int choice;

    // ���� ������� �������
    std::cout << "������� ������ �������: ";
    std::cin >> size;

    // ��������� ������������ ������ ��� ������
    int* dynamicArray = new int[size];

    // ���� ��������� �������
    std::cout << "������� �������� �������:\n";
    for (int i = 0; i < size; ++i) {
        std::cout << "������� " << i + 1 << ": ";
        std::cin >> dynamicArray[i];
    }

    // ����� ����
    std::cout << "�������� ��������:\n";
    std::cout << "1. ���������� �������\n";
    std::cout << "2. ����� ����� �������\n";
    std::cin >> choice;

    switch (choice) {
    case 1:
        // ����� ������� ���������� �������
        sortArray(dynamicArray, size);
        std::cout << "��������������� ������:\n";
        for (int i = 0; i < size; ++i) {
            std::cout << dynamicArray[i] << " ";
        }
        break;

    case 2: {
        int k, n;

        // ���� �������� �������
        std::cout << "������� ���������� ����� (k) � �������� (n) ������� (k <= 12, n <= 8): ";
        std::cin >> k >> n;

        // �������� ������������ ��������
        if (k > MAX_ROWS || n > MAX_COLS || k <= 0 || n <= 0) {
            std::cerr << "������������ ������� �������. ���������� ���������.\n";
            return 1;
        }

        int matrix[MAX_ROWS][MAX_COLS];

        // ���� ��������� �������
        std::cout << "������� �������� ������� " << k << "x" << n << ":\n";
        for (int i = 0; i < k; ++i) {
            for (int j = 0; j < n; ++j) {
                std::cout << "������� [" << i + 1 << "][" << j + 1 << "]: ";
                std::cin >> matrix[i][j];
            }
        }

        int a, b;

        // ���� ��������� a � b
        std::cout << "������� �������� a � b ��� ������ �����:\n";
        std::cout << "a: ";
        std::cin >> a;
        std::cout << "b: ";
        std::cin >> b;

        // ����� ����� � �������
        swapRows(matrix, a, b, n);

        // ����� ���������� �������
        std::cout << "������� ����� ������ �����:\n";
        for (int i = 0; i < k; ++i) {
            for (int j = 0; j < n; ++j) {
                std::cout << matrix[i][j] << " ";
            }
            std::cout << std::endl;
        }
        break;
    }

    default:
        std::cerr << "������������ ����� ��������. ���������� ���������.\n";
        break;
    }

    // ������������ ������
    delete[] dynamicArray;

    return 0;
}

// ������� ���������� �������
void sortArray(int* array, int size) {
    // ���� ���������� ���������� �������, ��������, ���������� ��������� ��� ���������� �������
    // ...
}

// ������� ��� ������ ����� �������
void swapRows(int matrix[MAX_ROWS][MAX_COLS], int row1, int row2, int cols) {
    for (int j = 0; j < cols; ++j) {
        int temp = matrix[row1][j];
        matrix[row1][j] = matrix[row2][j];
        matrix[row2][j] = temp;
    }
}
