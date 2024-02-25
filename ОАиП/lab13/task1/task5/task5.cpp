#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int A, p, n;

    cout << "¬ведите число A: ";
    cin >> A;

    cout << "¬ведите количество бит n: ";
    cin >> n;

    cout << "¬ведите позицию p: ";
    cin >> p;

    cout << "»сходное число A: " << A << endl;

    unsigned int mask = (1u << n) - 1;

    mask = mask << p;

    A = A | mask;

    cout << "„исло A после установки битов: " << A << endl;
}
