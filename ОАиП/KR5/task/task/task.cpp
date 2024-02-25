#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    
    int rows, cols;
   
   cout << "������� ���������� �����: ";
   cin >> rows;
   
   cout << "������� ���������� ��������: ";
   cin >> cols;

    int** arr = new int* [rows];
    for (int i = 0; i < rows; i++) {
        arr[i] = new int[cols];
    }

   cout << "������� �������� �������: " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
           cin >> arr[i][j];
        }
    }

    cout << "�������� ������: " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
           cout << setw(5) << arr[i][j];
        }
       cout <<endl;
    }

    cout << "������ ����� ������: " << endl;
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