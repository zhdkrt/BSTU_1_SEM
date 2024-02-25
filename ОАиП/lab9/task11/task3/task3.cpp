#include <iostream>
#include <cmath>

using namespace std;

double function(double x) {
    return cos(x) + x - 7;
}

double calculateFunction() {
    double a, b, e;
    
    cout << "������� a: ";
    cin >> a;
    cout << "������� b: ";
    cin >> b;
    cout << "������� �������� (e): ";
    cin >> e;

    double x = (a + b) / 2;

    
    while (abs(a - b) > 2 * e) {
        if (function(x) * function(a) <= 0) {
            b = x;
        }
        else {
            a = x;
        }

        x = (a + b) / 2;
    }
    cout << "�������� �����: " << x << endl;

    return 0;
}

int main() {
    
    setlocale(LC_ALL, "RU");
    calculateFunction();

}