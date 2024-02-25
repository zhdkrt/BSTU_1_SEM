#include <iostream>
#include <iomanip>

using namespace std;

void main(){
    setlocale(LC_ALL, "RU");

    const int ci = 4, cj = 3;
    int b[ci][cj] = { { 7, 8, 1 }, { 9, 10, 2 }, { 11, 12, 3 }, {13, 14, 4 } };

    cout << "Массив b:" << endl;

    for (int i = 0; i < ci; i++)
    {
        for (int j = 0; j < cj; j++)
        {
            cout << setw(5) << b[i][j];
        }
        cout << endl;
    }
}