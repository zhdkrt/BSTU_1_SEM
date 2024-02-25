#include<iostream>
#include<ctime>

using namespace std;

void fillArray(int* arr, int size) {
    srand(time(0));
    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % 200 + 1;
    }
}

int calculateProduct(const int* arr, int size) {
    int product = 1;
    for (int i = 0; i < size; ++i) {
        if (arr[i] < 50) {
            product *= arr[i];
        }
    }
    return product;
}

int main() {
    setlocale(LC_ALL, "RU");

    const int size = 15;
    int* array = new int[size];

    fillArray(array, size);

    cout << "Исходный массив: ";
    for (int i = 0; i < size; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;

    int product = calculateProduct(array, size);

    cout << "Произведение элементов < 50: " << product << endl;

    delete[] array;

    return 0;
}
