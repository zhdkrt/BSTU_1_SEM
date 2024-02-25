#include <iostream>

const int MAX_ROWS = 12;
const int MAX_COLS = 8;

// Прототипы функций
void sortArray(int* array, int size);
void swapRows(int matrix[MAX_ROWS][MAX_COLS], int row1, int row2, int cols);

int main() {
    int size;
    int choice;

    // Ввод размера массива
    std::cout << "Введите размер массива: ";
    std::cin >> size;

    // Выделение динамической памяти под массив
    int* dynamicArray = new int[size];

    // Ввод элементов массива
    std::cout << "Введите элементы массива:\n";
    for (int i = 0; i < size; ++i) {
        std::cout << "Элемент " << i + 1 << ": ";
        std::cin >> dynamicArray[i];
    }

    // Вывод меню
    std::cout << "Выберите операцию:\n";
    std::cout << "1. Сортировка массива\n";
    std::cout << "2. Обмен строк матрицы\n";
    std::cin >> choice;

    switch (choice) {
    case 1:
        // Вызов функции сортировки массива
        sortArray(dynamicArray, size);
        std::cout << "Отсортированный массив:\n";
        for (int i = 0; i < size; ++i) {
            std::cout << dynamicArray[i] << " ";
        }
        break;

    case 2: {
        int k, n;

        // Ввод размеров матрицы
        std::cout << "Введите количество строк (k) и столбцов (n) матрицы (k <= 12, n <= 8): ";
        std::cin >> k >> n;

        // Проверка корректности размеров
        if (k > MAX_ROWS || n > MAX_COLS || k <= 0 || n <= 0) {
            std::cerr << "Некорректные размеры матрицы. Завершение программы.\n";
            return 1;
        }

        int matrix[MAX_ROWS][MAX_COLS];

        // Ввод элементов матрицы
        std::cout << "Введите элементы матрицы " << k << "x" << n << ":\n";
        for (int i = 0; i < k; ++i) {
            for (int j = 0; j < n; ++j) {
                std::cout << "Элемент [" << i + 1 << "][" << j + 1 << "]: ";
                std::cin >> matrix[i][j];
            }
        }

        int a, b;

        // Ввод элементов a и b
        std::cout << "Введите элементы a и b для обмена строк:\n";
        std::cout << "a: ";
        std::cin >> a;
        std::cout << "b: ";
        std::cin >> b;

        // Обмен строк в матрице
        swapRows(matrix, a, b, n);

        // Вывод измененной матрицы
        std::cout << "Матрица после обмена строк:\n";
        for (int i = 0; i < k; ++i) {
            for (int j = 0; j < n; ++j) {
                std::cout << matrix[i][j] << " ";
            }
            std::cout << std::endl;
        }
        break;
    }

    default:
        std::cerr << "Некорректный выбор операции. Завершение программы.\n";
        break;
    }

    // Освобождение памяти
    delete[] dynamicArray;

    return 0;
}

// Функция сортировки массива
void sortArray(int* array, int size) {
    // Ваша реализация сортировки массива, например, сортировка пузырьком или сортировка выбором
    // ...
}

// Функция для обмена строк матрицы
void swapRows(int matrix[MAX_ROWS][MAX_COLS], int row1, int row2, int cols) {
    for (int j = 0; j < cols; ++j) {
        int temp = matrix[row1][j];
        matrix[row1][j] = matrix[row2][j];
        matrix[row2][j] = temp;
    }
}
