#include <iostream>
#include <time.h>
#include <iomanip> 
using namespace std;
void main(void)
{
    float plus_count=0;
    int** a; // динамическая матрица целых чисел
    int n; // порядок матрицы
    setlocale(LC_ALL, "Russian");
    cout << "Введите порядок матрицы n: ";
    cin >> n;
    a = new int* [n];
    for (int i = 0; i < n; i++)
        a[i] = new int[n];
    int select;
    do
    {
        cout << "\nВыберите способ заполнения матрицы" << endl;
        cout << "1 - ввод с клавиатуры" << endl;
        cout << "2 - случайные числа из отрезка [-25; +25]" << endl;
        cout << "\tВыбор: ";
        cin >> select;
    } while ((select < 1) || (select > 2));
    if (select == 1)
    {
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
            {
                cout << "\t- введите A[" << (i + 1) << "][" << (j + 1) << "]: ";
                cin >> a[i][j];
            }
    }
    else
    {
        srand(time(NULL));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                a[i][j] = -25 + rand() % 51;
    }
    cout << "\nЭлементы матрицы A:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << setw(7) << a[i][j];
        cout << endl << endl;
    }
    int p_count = 0;
    for (int i = 0; i < n; i++)
        if (a[i][i] > 0)
            plus_count++;
    cout << "Количество полож. элем. главной диагонали: " << p_count << endl;
    for (int i = 0; i < n; i++)
        a[i][n - i - 1] *= plus_count;
    cout << "\nЭлементы преобразованной матрицы:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << setw(7) << a[i][j];
        cout << endl << endl;
    }
    for (int i = 0; i < n; i++)
        delete[]a[i];
    delete[]a;
}
