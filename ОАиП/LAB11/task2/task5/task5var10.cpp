#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    const int SIZE_1 = 10;
    const int SIZE_2 = 7;

    int arrA[SIZE_1] = { 1,2,4,6,9,12,15,17,3,5 };
    int arrB[SIZE_2] = { 1,3,7,8,9,11,13 };
    int minNumber = INT_MAX;
    bool flag = false;

    for (int i = 0; i < SIZE_1; i++) {
        flag = false;
        for (int n = 0; n < SIZE_2; n++) {
            if (arrA[i] == arrB[n]) {
                flag = true;
                break;
            }
        }
        if (!flag && arrA[i] < minNumber) {
            minNumber = arrA[i];
        }
    }

    cout << "Наименьшее: " << minNumber << endl;
}