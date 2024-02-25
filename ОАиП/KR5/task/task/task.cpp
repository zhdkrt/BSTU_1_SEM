#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    
    int rows, cols;
   
   cout << "Введите количество строк: ";
   cin >> rows;
   
   cout << "Введите количество столбцов: ";
   cin >> cols;

    int** arr = new int* [rows];
    for (int i = 0; i < rows; i++) {
        arr[i] = new int[cols];
    }

   cout << "Введите элементы массива: " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
           cin >> arr[i][j];
        }
    }

    cout << "Исходный массив: " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
           cout << setw(5) << arr[i][j];
        }
       cout <<endl;
    }

    cout << "Массив после замены: " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] > 0) {
                arr[i][j] = 1;
            }
            else if (arr[i][j] < 0) {
                arr[i][j] = -1;
            }
           cout << setw(4) << arr[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    delete[] arr;
}