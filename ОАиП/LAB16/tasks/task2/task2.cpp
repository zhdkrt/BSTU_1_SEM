#include <iostream>
#include <time.h>
#include <iomanip> 
using namespace std;
void main(void)
{
    float plus_count=0;
    int** a; // ������������ ������� ����� �����
    int n; // ������� �������
    setlocale(LC_ALL, "Russian");
    cout << "������� ������� ������� n: ";
    cin >> n;
    a = new int* [n];
    for (int i = 0; i < n; i++)
        a[i] = new int[n];
    int select;
    do
    {
        cout << "\n�������� ������ ���������� �������" << endl;
        cout << "1 - ���� � ����������" << endl;
        cout << "2 - ��������� ����� �� ������� [-25; +25]" << endl;
        cout << "\t�����: ";
        cin >> select;
    } while ((select < 1) || (select > 2));
    if (select == 1)
    {
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
            {
                cout << "\t- ������� A[" << (i + 1) << "][" << (j + 1) << "]: ";
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
    cout << "\n�������� ������� A:" << endl;
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
    cout << "���������� �����. ����. ������� ���������: " << p_count << endl;
    for (int i = 0; i < n; i++)
        a[i][n - i - 1] *= plus_count;
    cout << "\n�������� ��������������� �������:" << endl;
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
