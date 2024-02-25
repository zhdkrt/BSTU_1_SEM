#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int* pArr;
    int length, a, b;

    cout << "Введите размер массива: ";
    cin >> length;

    pArr = new int[length];

    cout << "Введите массив: ";
    for (int i = 0; i < length; i++) {
        cin >> pArr[i];
    }

    cout << "Введите интервал [a, b]: ";
    cin >> a >> b;

    int newLength = 0;

    for (int i = 0; i < length; i++) {
        if (pArr[i] < a || pArr[i] > b) {
            pArr[newLength] = pArr[i];
            newLength++;
        }
    }

    for (int i = newLength; i < length; i++) {
        pArr[i] = 0;
    }

    cout << "Новый массив: ";
    for (int i = 0; i < newLength; i++) {
        cout << pArr[i] << " ";
    }

    delete[] pArr;
}
